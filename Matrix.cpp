#include "Matrix.h"
#include <iostream>
#include <vector>
#include <sstream>>

Matrix::Matrix(const size_t rows , const size_t columns, Generator* generator) : rows (rows ), columns(columns)
{
    std::vector<std::vector<int>> matrix(rows , std::vector<int>(columns));

    for (size_t i = 0; i < rows ; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            matrix[i][j] = generator->generate();
        }
    }

    this->matrix = matrix;
    if (this->is_empty())
    {
        throw std::out_of_range("Матрица пуста");
    }
}

Matrix::~Matrix()
{
    if (!is_empty())
    {
        this->matrix.clear();
    }
}

Matrix::Matrix(const Matrix& other) : rows (other.rows ), columns(other.columns), matrix(other.matrix) {}

bool Matrix::is_empty() const
{
    return (matrix.size() == 0) or (columns == 0);
}

Matrix& Matrix::operator=(const Matrix& other)
{
    if (this != &other)
    {
        Matrix temp(other);
        std::swap(matrix, temp.matrix);
        std::swap(rows , temp.rows );
        std::swap(columns, temp.columns);
    }

    return *this;
}

std::string Matrix::matrix_to_string() const
{
    std::stringstream buffer;
    for (size_t i = 0; i < rows ; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            buffer << matrix[i][j] << '\t';
        }
        buffer << "\n";
    }
    return buffer.str();
}

std::ostream& operator<<(std::ostream& os, Matrix& matrix)
{
    os << matrix.matrix_to_string();
    return os;
}
#include "Matrix.h"
#include <iostream>
#include <vector>
#include <sstream>

Matrix::Matrix(const size_t rows, const size_t columns, Generator* generator) : rows(rows), columns(columns), matrix(rows, std::vector<int>(columns))
{
    if (columns && rows < 0)
    {
        throw std::invalid_argument("Неправильный размер матрицы.")
    }
    if (generator == nullptr)
    {
        throw std::invalid_argument("Ошибка генератора матрицы.")
    }
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            matrix[i][j] = generator->generate();
        }
    }
}

std::string Matrix::matrixString()
{
    std::stringstream buffer;
    for (size_t i = 0; i < rows ; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            buffer << matrix[i][j] << '\t';
        }
        buffer << "\n";
    }
    return buffer.str();
}

std::ostream& operator<<(std::ostream& os, Matrix& matrix)
{
    os << matrix.matrixString();
    return os;
}

size_t Matrix::getColumns()
{
    return columns;
}

size_t Matrix::getRows()
{
    return rows;
}

std::vector<int>& Matrix::operator[](size_t index)
{
    if (index > matrix.size())
    {
        throw std::out_of_range("Индекс вне размера матрицы.");
    }
    return matrix[index];
}

std::vector<std::vector<int>> Matrix::getMatrix()
{
    return this->matrix;
}

#include "Matrix.h"
#include <iostream>
#include <vector>
#include <sstream>

Matrix::Matrix(const int rows, const int columns, Generator* generator) : rows(rows), columns(columns), matrix(rows, std::vector<int>(columns))
{
    if (generator && columns && rows > 0)
    {
        for (size_t i = 0; i < static_cast<size_t>(rows); ++i)
        {
            for (size_t j = 0; j < static_cast<size_t>(columns); ++j)
            {
                matrix[i][j] = generator->generate();
            }
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
    if (index < matrix.size())
    {
        return matrix[index];
    }
    else 
    {
        std::cerr << "Ошибка: индекс за пределами вектора.";
        static std::vector<int> dummy;
        return dummy;
    }
}

std::vector<std::vector<int>> Matrix::getMatrix()
{
    return this->matrix;
}
#include "Exersize.h"
#include "RandomGenerator.h"

Exersize::Exersize(Matrix matrix) : matrix(matrix) {}

Matrix Exersize::Exersize1()
{
    for (size_t i = 0; i < matrix.getRows(); ++i)
    {
        size_t max = matrix[i][0];
        for (size_t j = 0; j < matrix.getColumns(); ++j)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }

        for (size_t j = 0; j < matrix.getColumns(); ++j)
        {
            if (matrix[i][j] == max)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

Matrix Exersize::Exersize2()
{
    size_t newRows = matrix.getRows();

    for (size_t i = 0; i < matrix.getRows(); ++i)
    {
        if (matrix[i][0] % 3 == 0)
        {
            newRows += 1; 
        }
    }

    RandomGenerator rnd(0, 0);
    Matrix newMatrix(newRows, matrix.getColumns(), &rnd);

    size_t newIndex = 0;

    for (size_t i = 0; i < matrix.getRows(); ++i)
    {
        if (matrix[i][0] % 3 == 0)
        {
            for (size_t j = 0; j < matrix.getColumns(); ++j)
            {
                newMatrix[newIndex][j] = 0;
            }
            newIndex += 1;
        }

        for (size_t j = 0; j < matrix.getColumns(); ++j)
        {
            newMatrix[newIndex][j] = matrix[i][j];
        }
        newIndex += 1;
    }

    return newMatrix;
}

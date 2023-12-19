#include "Generator.h"
#include <iostream>
#include <vector>

/**
 * \brief Класс для представления матрицы целых чисел.
 */
class Matrix 
{
    private:
        int rows; 
        int columns; 
        std::vector<std::vector<int>> matrix;
    public:
        /**
         * \brief Конструктор с заданным размером матрицы.
         * \param rows Количество строк.
         * \param columns Количество столбцов.
         */
        Matrix(int rows, int columns, Generator* generator);

        /**
         * \brief Деструктор.
         */
        ~Matrix() = default;

        /**
        * @brief Проверка на пустоту матрицы.
        */
        bool isEmpty() const;

        /**
        * @brief Переопределение оператора вывода
        * @param os Поток вывода
        * @param matrix Матрица
        * @return Элемент матрицы по индексу
        */
        friend std::ostream& operator<<(std::ostream& os, Matrix& matrix);

        /**
        * @brief Вывод матрицы в строку
        * @return Матрица в строку
        */
        std::string matrixString();
        
        /**
         * \brief Метод для получения количества столбцов.
        */
        size_t getColumns();

        /**
         * \brief Метод для получения количества строк.
        */
        size_t getRows();

        /**
         * \brief Конструктор копирования.
         * \param other Ссылка на другой объект Matrix для копирования.
         */
        Matrix(const Matrix& other) = default;

        /**
         * \brief Оператор присваивания.
         * \param other Ссылка на другой объект Matrix для присваивания.
         */
        Matrix& operator=(const Matrix& other) = default;

        /**
         * \brief Конструктор перемещения.
         * \param other R-value ссылка на другой объект Matrix для перемещения.
         */
        Matrix(Matrix&& other) noexcept = default;

        /**
         * \brief Оператор перемещения.
         * \param other R-value ссылка на другой объект Matrix для перемещения.
         */
        Matrix& operator=(Matrix&& other) noexcept = default;

        /**
         * \brief Получение элемента матрицы.
         * \param rows Номер строки.
         * \param columns Номер столбца.
         */
        int getElement(int rows, int columns);

        /**
         * \brief Переопределение оператора []
         * \param index Индекс матрицы.
         */
        std::vector<int>& operator[](size_t index);

        /**
        * @brief Получение матрицы
        */
        std::vector<std::vector<int>> getMatrix();
};
#include "Generator.h"
#include <iostream>
#include <vector>

/**
 * \brief Класс для представления матрицы целых чисел.
 */
class Matrix 
{
    private:
        size_t rows; 
        size_t columns; 
        std::vector<std::vector<int>> matrix;
    public:
        /**
         * \brief Конструктор с заданным размером матрицы.
         * \param rows Количество строк.
         * \param columns Количество столбцов.
         */
        Matrix(size_t rows, size_t columns, Generator* generator);

        /**
         * \brief Деструктор.
         */
        ~Matrix();

        /**
        * @brief Проверка на пустоту матрицы.
        */
        bool is_empty() const;

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
        std::string matrix_to_string() const;

        /**
         * \brief Конструктор копирования.
         * \param other Ссылка на другой объект Matrix для копирования.
         */
        Matrix(const Matrix& other);

        /**
         * \brief Оператор присваивания.
         * \param other Ссылка на другой объект Matrix для присваивания.
         * \return Ссылка на текущий объект после присваивания.
         */
        Matrix& operator=(const Matrix& other);

        /**
         * \brief Конструктор перемещения.
         * \param other R-value ссылка на другой объект Matrix для перемещения.
         */
        Matrix(Matrix&& other) noexcept;

        /**
         * \brief Оператор перемещения.
         * \param other R-value ссылка на другой объект Matrix для перемещения.
         * \return Ссылка на текущий объект после перемещения.
         */
        Matrix& operator=(Matrix&& other) noexcept;

        /**
         * \brief Получение элемента матрицы.
         * \param rows Номер строки.
         * \param columns Номер столбца.
         * \return Значение элемента матрицы.
         */
        int getElement(int rows, int columns);

        /**
         * \brief Вывод матрицы в стандартный поток вывода.
         */
        void print();
};
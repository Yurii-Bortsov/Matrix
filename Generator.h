#pragma once

/**
 * \brief Абстрактный класс для генератора случайных чисел.
 */
class Generator {
public:
    /**
     * \brief Виртуальный деструктор.
     */
    virtual ~Generator() = 0;

    /**
     * \brief Виртуальный метод для генерации случайного числа.
     */
    virtual int generate() = 0;
};

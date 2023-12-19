#pragma once
#include "Exersizes.h"

/**
* @brief класс с заданиями 1 и 2.
*/
class Exersize : public ExersizeAbs
{
    private:
        Matrix matrix;
    public:
        /**
        * @brief конструктор
        */
        Exersize(Matrix matrix);

        /**
        * @brief метод для задания 1.
        */
        Matrix Exersize1() override;

        /**
        * @brief метод для задания 2.
        */
        Matrix Exersize2() override;

};
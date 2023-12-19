#include <vector>
#include <iostream>
#include "IStreamGenerator.h"
#include "RandomGenerator.h"
#include "Exersizes.h"
#include "Exersize.h"

int main()
{
    // std::istream& in = std::cin;
    // IStreamGenerator rnd(in);
    // Matrix MyMatrix(4, 4, &rnd);

    RandomGenerator rnd(1, 5);
    Matrix MyMatrix(4, 3, &rnd);

    std::cout << MyMatrix << "\n\n";

    Exersize task1(MyMatrix);
    Matrix result1 = task1.Exersize1();
    std::cout << result1.matrixString() << "\n\n";


    Exersize task2(MyMatrix);
    Matrix result2 = task2.Exersize2();
    std::cout << result2.matrixString();


    return 0;
}
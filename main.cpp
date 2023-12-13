#include <vector>
#include <iostream>
#include "Matrix.h"

int main()
{
    std::istream& in = std::cin;
    IStreamGenerator rnd(in);
    Matrix MyMatrix(4, 4, &rnd);

    std::cout << MyMatrix << "\n";

    return 0;
}
#include <iostream>
#include <string>
#include "complex.h"
#define LEVEL 4

using namespace std;

int main()
{
#if LEVEL >= 1
    Complex x1, x4(3, 4);
    const Complex x2(-2, -3), x3(0, 2);

    x1.setRe(1).setIm(2);
    cout  << "LEVEL 1" << endl;
    std::cout << "x1 = " << x1.getRe() << " + " << x1.getIm() << "i" << std::endl;
    std::cout << "x2 = " << x2.getRe() << " + " << x2.getIm() << "i" << std::endl;
    std::cout << "x3 = " << x3.getRe() << " + " << x3.getIm() << "i" << std::endl;
    std::cout << "x4 = " << x4.getRe() << " + " << x4.getIm() << "i" << std::endl;

#if LEVEL >= 2
    cout  << endl << "LEVEL 2" << endl;
    x1.add(x2).add(x3);
    double a = x4.multiply(-2).abs();

    std::cout << "x1 = " << x1.getRe() << " + " << x1.getIm() << "i" << std::endl;
    std::cout << "abs(-2*x4) = " << a << std::endl;

#if LEVEL >= 3

    Complex y1, y2, y3, y4, y5, y6;

    y1 = x2 + x3;
    y2 = x2 - x3;
    y3 = x2 * 2.0;
    y4 = -x3;
    y5 = x2 * x3;
    y6 = 2.0 * x2;
    cout  << endl << "LEVEL 3" << endl;
    std::cout << "y1 = " << y1.getRe() << " + " << y1.getIm() << "i" << std::endl;
    std::cout << "y2 = " << y2.getRe() << " + " << y2.getIm() << "i" << std::endl;
    std::cout << "y3 = " << y3.getRe() << " + " << y3.getIm() << "i" << std::endl;
    std::cout << "y4 = " << y4.getRe() << " + " << y4.getIm() << "i" << std::endl;
    std::cout << "y5 = " << y5.getRe() << " + " << y5.getIm() << "i" << std::endl;
    std::cout << "y6 = " << y6.getRe() << " + " << y6.getIm() << "i" << std::endl;

#if LEVEL >= 4

    std::cout << y1 << std::endl;
    std::cout << y2 << std::endl;
    std::cout << y3 << std::endl;
    std::cout << y4 << std::endl;
    std::cout << y5 << std::endl;
    std::cout << y6 << std::endl;

#if LEVEL >= 5

    Complex z1;

    std::cout << "Zadej komplexni cislo: ";
    std::cin >> z1;
    std::cout << "z1 = " << z1 << std::endl;

#endif // L5
#endif // L4
#endif // L3
#endif // L2
#endif // L1
}
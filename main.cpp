#include "Wektor2D.hpp"
#include <iostream>

int main()
{
    Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
    v1.setX(1.);             // setter
    v1.setY(1.);             // setter
    double x1 = v1.getX();   // getter
    double y1 = v1.getY();   // getter
    std::cout << "Wektor v1: (" << x1 << ", " << y1 << ")" << std::endl;

    Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne
    std::cout << "Wektor v2: (" << v2.getX() << ", " << v2.getY() << ")" << std::endl;

    Wektor2D sum = v1 + v2; // dodawanie wektorów
    std::cout << "Suma v1 + v2: (" << sum.getX() << ", " << sum.getY() << ")" << std::endl;

    double prod = v1 * v2; // iloczyn skalarny
    std::cout << "Iloczyn skalarny v1 * v2: " << prod << std::endl;

    return 0;
}

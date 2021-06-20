#pragma once
#include "virtual.h"
#include <cmath>

class Paralel : public Soedinenie
{
protected:
    double l1;
    double l2;
public:
    Paralel(double L_1, double L_2)
    {
        this->l1 = L_1;
        this->l2 = L_2;
    }

    double formule() override;
    void print() override;

};

double Paralel::formule()
{
    return (l1 * l2) / (l1 + l2);
}

void Paralel::print()
{
    std::cout << "Параллельное соединение" << std::endl << "Ответ = " << formule() << std::endl;
}

#pragma once
#include "virtual.h"
#include <cmath>

class Posled : public Soedinenie 
{
protected:
    double l1;
    double l2;
public:
    Posled(double L_1, double L_2) 
    {
        this->l1 = L_1;
        this->l2 = L_2;
    }

    double formule() override;
    void print() override;

};

double Posled::formule() {
    return l1 + l2;
}

void Posled::print() {
    std::cout << "Последовательное соединение" << std::endl << "Ответ = " << formule() << std::endl;
}

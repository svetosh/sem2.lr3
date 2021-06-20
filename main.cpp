#include "virtual.h"     
#include "Paralel.h"
#include "Posled.h"  

#include <vector>

int main() {
    setlocale(LC_ALL, "ru");
    double L_1, L_2;
    std::cout << "Введите индуктивность первой катушки L_1 = " << std::endl;
    std::cin >> L_1;
    std::cout << "Введите индуктивность второй катушки L_2 = " << std::endl;
    std::cin >> L_2;

    Paralel Par(L_1, L_2);

    Posled Pos(L_1, L_2);


    std::vector<Soedinenie*> Otvet{ &Par, &Pos };

    for (int i = 0; i < Otvet.size(); i++) 
    {
        Otvet[i]->print();
    }

    return 0;
}

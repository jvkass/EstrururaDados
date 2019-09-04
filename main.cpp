#include <iostream>
using std::cin;
using std::cout;
#include "pilha.hpp"

int main()
{
    Pilha<double> P;
    if (P.inicializar())
        return 1;

    for (;;)
    {
        cout << "Número para empilhar"
             << "(Negativo para terminar): ";

        double num;
        cin >> num;
        if (num < 0)
            break;
        if (P.empilhar(num))
            return 2;
    }
    cout << "Os números digitados, do último para o primeiro, foram: ";
    while (!P.vazia())
    {
        cout << ' ' << P.topo();
        if (P.desempilhar())
            return 3;
    }

    P.terminar();
}
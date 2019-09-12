#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "fila.hpp"

int main()
{
	Fila<double> F;
	if (F.inicializar())
		return 1;
	cout << "Número de pessoas a serem enfiladas ";

	int i;
	cin >> i;
	for (int j = 0; j < i; j++)
	{
		cout << "Número para empilhar "
			<< "(Negativo para terminar): ";

		int num;
		cin >> num;

		if (F.enfilar(num))
		{
			cout << "Fila cheia" << endl;
		}
	}

	int escolha = 0;

	while (escolha != -1)
	{
		cout << "Informe a operação desejada (1 - Enfilar; 2 - Desenfilar; 0 - Sair do menu): " << endl;
		cin >> escolha;
		if (escolha == 1)
		{
			if (F.enfilar(5))
			{
				cout << F.printar(true) << " " << F.printar(false) << endl;
				cout << "Fila cheia" << endl;
			}
			else { cout << F.printar(true) << " " << F.printar(false) << endl; }
		}
		if (escolha == 2)
		{

			F.desenfilar();
			cout << F.printar(true) << " " << F.printar(false) << endl;
		}
		if (escolha == 0) {
			escolha = -1;
		}
	}

	//  cout << F.printar() << endl;
	//  F.desenfilar();
	//  cout << F.printar() << endl;
	//  F.desenfilar();
	//  cout << F.printar() << endl;
	//  if (F.enfilar(5))
	//  {
	//      cout << "Fila cheia" << endl;
	//  }
	//  cout << F.printar() << endl;

	  //while (!F.vazia())
	  //{
	  //    cout << ' ' << F.topo();
	  //    if (P.desempilhar())
	  //        return 3;
	  //}
}

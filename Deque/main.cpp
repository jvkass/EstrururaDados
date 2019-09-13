#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Deque.hpp"

int main()
{
	Deque<int> D;
	if (D.inicializar())
		return 1;



	int escolha = 0;

	while (escolha != -1)
	{
		cout << "Informe a operação desejada (1 - inserir_esq; 2 - inserir_dir; 3 - remover_esq; 4 - remover_dir; 0 - Sair do menu): " << endl;
		cin >> escolha;
		if (escolha == 1)
		{
			if (D.inserir_esq(5))
			{
				cout << D.printar(1) << " " << D.printar(2) << " " << D.printar(3) << endl;
				cout << "Deque cheio ou Redimensionado" << endl;
			}
			else { cout << D.printar(1) << " " << D.printar(2) << " " << D.printar(3) << endl; }
		}
		if (escolha == 2)
		{

			if (D.inserir_dir(4))
			{
				cout << D.printar(1) << " " << D.printar(2) << " " << D.printar(3) << endl;
				cout << "Deque cheio ou Redimensionado" << endl;
			}
			else { cout << D.printar(1) << " " << D.printar(2) << " " << D.printar(3) << endl; }
		}
		if (escolha == 3)
		{

			
				cout << D.printar(1) << " " << D.printar(2) << " " << D.printar(3) << " "<<  D.remover_esq() << endl;
				//cout << "Deque vazio" << endl;
		
		}
		if (escolha == 4)
		{

			
				cout << D.printar(1) << " " << D.printar(2) << " " << D.printar(3) << " " << D.remover_dir() << endl;
				//cout << "Deque vazio" << endl;
			}
		if (escolha == 0) {
			escolha = -1;
		}
	}


}

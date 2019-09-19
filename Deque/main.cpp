#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Deque.hpp"

int main()
{
	Deque<int> D;
	if (inicializar(D))
		return 1;



	int escolha = 0;

	while (escolha != -1)
	{
		cout << "Informe a operação desejada (1 - inserir_esq; 2 - inserir_dir; 3 - remover_esq; 4 - remover_dir; 0 - Sair do menu): " << endl;
		cin >> escolha;
		if (escolha == 1)
		{
			if (inserir_esq(D,5))
			{
				cout << D.left << " " << D.right << " " << D.elements << " " << endl;
				cout << "Deque cheio ou Redimensionado" << endl;
			}
			else { cout << D.left << " " << D.right << " " << D.elements << " " << endl; }
		}
		if (escolha == 2)
		{

			if (inserir_dir(D,4))
			{
				cout << D.left << " " << D.right << " " << D.elements << " " << endl;
				cout << "Deque cheio ou Redimensionado" << endl;
			}
			else { cout << D.left << " " << D.right << " " << D.elements << " " << endl; }
		}
		if (escolha == 3)
		{

			
				cout << D.left << " " << D.right << " " << D.elements << " " << remover_esq(D) << endl;
				//cout << "Deque vazio" << endl;
		
		}
		if (escolha == 4)
		{

			
				cout << D.left << " " << D.right << " " << D.elements << " " << remover_dir(D) << endl;
				//cout << "Deque vazio" << endl;
			}
		if (escolha == 0) {
			escolha = -1;
		}
	}


}

#include <new>
using std::nothrow;

template <typename T>

struct Deque
{
	T* v;
	T* w;
	int esquerda, direita, tam_v = 1, tam_w, quant,auxRetorno;

	bool inicializar()
	{
		v = new (nothrow) T[tam_v];
		if (v == nullptr)
			return true;
		esquerda = -2;
		direita = -2;
		quant=0;
		//tam_v = 1;
		return false;
	}

    	void terminar()
	{
		delete[] v;
	}

    	bool vazia()
	{
		return (quant==0);
	}

		bool cheia()
	{
		return (quant==tam_v);
	}

    bool inserir_esq (T e){
        	
		if (vazia()){
			if (tam_v==1){
			esquerda=0;
			direita=0;
			}
			v[esquerda] = e;
			++quant;
			return false;
		}

		if (cheia()){
			if (redimensionar(tam_v * 2))
			{
				return true;
			}
			return true;
		}
		if (esquerda-1==-1){
		if (!redimensionar(tam_v * 2)){
			return true;
		}	

		}
		--esquerda;
		v[esquerda] = e;
		++quant;
		return false;

    }

    bool inserir_dir (T e){

		if (vazia()) {
			if (tam_v == 1) {
				esquerda = 0;
				direita = 0;
			}
			v[direita] = e;
			++quant;
			return false;
		}

		if (cheia()) {
			if (redimensionar(tam_v * 2))
			{
				return true;
			}
			return true;
		}
		if (direita + 1 == tam_v) {
			if (!redimensionar(tam_v * 2)) {
				return true;
			}

		}
		++direita;
		v[direita] = e;
		++quant;
		return false;

    }

	T remover_esq() { //remover lado esquerdo e retorna no console
		if (vazia()) {
			return true;
		}
		else {
			auxRetorno = v[esquerda];
			if (esquerda != direita){
			++esquerda;
			}
			--quant;
			return auxRetorno;
		}
	}

	T remover_dir() { //remover lado direito e retorna no console
		if (vazia()) {
			return false;
		}
		else {
			auxRetorno = v[direita];
			if (esquerda!=direita){
			--direita;
			}
			--quant;
			return auxRetorno;
		}
	}


	bool redimensionar(int tam_w)
	{
		T *w = new (nothrow) T[tam_w];
		if (w == nullptr){
			return true;
			}
		
		esquerda = (tam_w-quant)/2	;
		direita = (esquerda+quant)-1;
		for (int i = 0; i < quant; i++)
		{
			w[i+esquerda] = v[i];
		}
		delete[] v;
		v = w;
		tam_v = tam_w;
		return false;
	}


		T printar(int Index) { //Printar no console 
		if (Index == 1) { return esquerda; }

		if (Index == 2) { return direita; }
		if (Index == 3) { return quant; }
	}
};
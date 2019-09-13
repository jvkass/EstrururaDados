#include <new>
using std::nothrow;

template <typename T>

struct Deque
{
	T* v;
	T* w;
	int esquerda, direita, tam_v = 2, tam_w;

	bool inicializar()
	{
		v = new (nothrow) T[tam_v];
		if (v == nullptr)
			return true;
		esquerda = 0;
		direita = 0;
		//tam_v = 1;
		return false;
	}

    	void terminar()
	{
		delete[] v;
	}

    	bool vazia()
	{
		return (esquerda == direita);
	}

    bool inserir_esq (T e){
        	if ((esquerda==-1) && (direita==tam_v-1))//Cheia 
		{
			return true;//redimensionar aqui
		}

       if ((esquerda==-1) && (direita!=tam_v-1))//Ponta vazia/Possivel colocar informação
		{   
            esquerda = tam_v-1;
			v[esquerda] = e;
            --esquerda;
		}

        if (esquerda-1==-1){
            if (){
                
            }
        }

		if (vazia())
		{
			++inicio;
		}
		if (inicio == -1)// Vazia
		{
			/*if (redimensionar(tam_v * 2))
			{
				return true;
			}
			**/
			return vazia();
		}



		if (fim == tam_v) fim = 0;

		v[fim] = e;
		++fim;



		return false;
    }

    bool inserir_dir (T e){

    }

};
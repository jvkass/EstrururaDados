#include <new>
using std::nothrow;

template <typename T>
struct Fila
{
    T *v;
    T *w;
    int inicio, fim, tam_v = 2, tam_w;

    bool inicializar()
    {
        v = new (nothrow) T[tam_v];
        if (v == nullptr)
            return true;
        inicio = -1;
        fim = 0;
        //tam_v = 1;
        return false;
    }

    void terminar()
    {
        delete[] v;
    }
    bool vazia()
    {
        return (inicio == -1);
    }
    //redimensionar fica aqui.
    bool enfilar(T e)
    {
		if (fim == inicio || (fim == tam_v && inicio == 0))//Cheia 
		{
			return true;
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

	T printar(bool Index) { //return v[inicio]; 
    if (Index == true){    return inicio;}

    if (Index == false){ return fim;}

    }

    // Pilha
    
    // Pré-Condição: Pilha não vazia.
    bool desenfilar()
    {
    
		if (inicio != fim) {
			++inicio;
		}
		if (inicio == tam_v && inicio == fim ) {
			inicio = -1;
			fim = 0;
		}

		
        if (!vazia() && 4 * (fim + 1) <= tam_v)
        {
           /* if (redimensionar(tam_v / 2))
            {
                return true;
            }**/
        }
        return false;
    }

    //Pilha
    //Pré-condição.: ult+1<= tam_w
   /* bool redimensionar(int tam_w)
    {
        T *w = new (nothrow) T[tam_w];
        if (w == nullptr)
            return true;
        for (int i = 0; i <= fim; i++)
        {
            w[i] = v[i];
        }
        delete[] v;
        v = w;
        tam_v = tam_w;
        return false;
    }
    **/
};  // Pilha
    //Guardas de inclusão

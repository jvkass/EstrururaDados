#include <new>
using std::nothrow;

template <typename T>
struct Pilha
{
    T *v;
    T *w;
    int ult, tam_v, tam_w;

    bool inicializar()
    {
        v = new (nothrow) T[1];
        if (v == nullptr)
            return true;
        ult = -1;
        tam_v = 1;
        return false;
    }

    void terminar()
    {
        delete[] v;
    }
    bool vazia()
    {
        return (ult == -1);
    }
    //redimensionar fica aqui.
    bool empilhar(T e)
    {
        if (ult == tam_v - 1)
        {
            if (redimensionar(tam_v * 2))
            {
                return true;
            }
        }

        ++ult;
        v[ult] = e;
        return false;
    }

    // Pilha
    T topo() { return v[ult]; }
    // Pré-Condição: Pilha não vazia.
    bool desempilhar()
    {
        --ult;
        if (!vazia() && 4 * (ult + 1) <= tam_v)
        {
            if (redimensionar(tam_v / 2))
            {
                return true;
            }
        }
        return false;
    }

    //Pilha
    //Pré-condição.: ult+1<= tam_w
    bool redimensionar(int tam_w)
    {
        T *w = new (nothrow) T[tam_w];
        if (w == nullptr)
            return true;
        for (int i = 0; i <= ult; i++)
        {
            w[i] = v[i];
        }
        delete[] v;
        v = w;
        tam_v = tam_w;
        return false;
    }

}; // Pilha
   //Guardas de inclusão
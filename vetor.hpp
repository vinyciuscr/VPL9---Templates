#include <iostream>

using namespace std;

template<typename T>

class Vetor{
    private:
    T* dados;
    int tamanho = 0;
    T elemento;


    public:

    Vetor(int n){
        this->tamanho = n;
        dados = new T[this->tamanho];
    }

    Vetor(const Vetor& copia){
        this->tamanho = copia.tamanho;
        this->dados = new T[tamanho];
        for (int i = 0; i < tamanho; i++){
            this->dados[i] = copia.dados[i];
        }
    }

    ~Vetor(){
        delete[] dados; //conferir se esta corretor
    }

    SetElemento(int i, T Elemento){
        this-elemento = Elemento;
        this->dados[i] = this-elemento;
    }

    GetElemento(int i){
        cout << this->dados[i];
    }

    AdcionaElemento(T Elemento){
        this->elemento = Elemento;
        dados[this-tamanho] = elemento;
    }

    Imprime(){
        for(int i; i < this->tamanho; i++){
            cout << dados[i] << " ";
        }
    }

};
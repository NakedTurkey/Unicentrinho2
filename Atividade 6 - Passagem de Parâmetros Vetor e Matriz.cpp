#include <iostream>
#include <iomanip>

#define TAM 8
using namespace std;

int main()
{
    void ordenar(int *a, int *b); //A, 1
    void separar(double *num); //A, 2
    bool has_zero(int v[], int n); //B
    int maiorValor(int *v); //C, 1
    float media(int v[TAM]); //C, 2
    int numInteiros(int v[]); //C, 3
    int encher(int n, int v[]); //C, 4
    int maiorMenor(int *v); //C, 5
    
    int n = TAM;
    int num1, num2;
    cout << "Numero 1: ";
    cin >> num1;
    cout << endl << "Numero 2: ";
    cin >> num2;
    ordenar(&num1, &num2); //A, 1
        
    
    
    
    return 0;
}

void ordenar(int *a, int *b) //A, 1
{
    int aux;
    if(*a == *b)
    {}
    else if(*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    cout << "A: " << *a << "B: " << *b << endl;
}

void separar(double *num) //A, 2
{
cout << setpresicion(1) << "Inteira: " << *num << "Decimais: " << *num << endl;
}

bool has_zero(v[], int n) //B
{
    int i;
        for(i = 0; i < n; i++)
        {
            if(v[i] == 0)
            {
                return true;
            }
            return false;
        }
}

int maiorValor(int *v) //C, 1
{
    int i, aux = v[0];
        for(i = 0; i < TAM-1; i++)
        {
            if(v[i+1] > aux)
            {
                aux = v[i+1];
            }
        }
    return aux;
}

float media(int v[TAM]) //C, 2
{
    int soma = 0;
        for(int i = 0; i < TAM; i++)
        {
            soma += v[i];
        }
    return soma / TAM;
}

int numInteiros(int v[]) //C, 3
{
    int i, soma = 0;
        for(i = 0; i < TAM; i++)
        {
            if(v[i] < 0)
            {
                soma++;
            }
        }
    return soma;
}

int encher(int n, int v[]) //C, 4
{
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

int maiorMenor(int *v) //C, 5
{
    int maior = menor = v[0];
        for(int i = 0; i < TAM-1; i++)
        {
            if(v[i+1] > maior)
            {
                maior = v[i+1];
            }
            if(v[i+1] < menor)
            {
                menor = v[i+1];
            }
        }
}

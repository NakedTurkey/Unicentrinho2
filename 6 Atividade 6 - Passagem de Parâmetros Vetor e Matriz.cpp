#include <iostream>

#define TAM 8
using namespace std;

void ordenar(int *a, int *b); //A, 1
    void has_zero(int v[], int n); //B
    int maiorValor(int *v); //C, 1
    float media(int v[TAM]); //C, 2
    int numInteiros(int v[]); //C, 3
    void encher(int n, int v[]); //C, 4
    void maiorMenor(int *v, int *maiore, int *menore); //C, 5

int main()
{
    int n = TAM, i;
    int num1, num2;
    int v[TAM];
    float media1;
    cout << "Numero 1: ";
    cin >> num1;
    cout << endl << "Numero 2: ";
    cin >> num2;
    ordenar(&num1, &num2); //A, 1
    
    cout << "Encha o vetor: "; //B
        for(i = 0; i < TAM; i++)
        {
            cin >> v[i];
        }
    cout << endl;
    has_zero(v, n);
    
    cout << endl << "Preencha o vetor novamente: "; //C, 1
        for(i = 0; i < TAM; i++)
        {
            cin >> v[i];
        }
    num1 = maiorValor(v);
    cout << endl << "Maior valor: " << num1 << endl;
    
    media1 = media(v); //C, 2 
    cout << "Media os valores: " << media1 << endl;
    
    num1 = numInteiros(v); //C, 3
    cout << num1 << " valores positivos." << endl;
    
    cout << "Insira valores no vetorzinho novamente: " << endl; //C, 4
    encher(n, v);
    cout << "Valores: ";
        for(i = 0; i < TAM; i++)
        {
            cout << v[i] << ' ';
        }
    
    maiorMenor(v, &num1, &num2); //C, 5
    cout << endl << "Maior valor: " << num1 << " Menor valor: " << num2 << endl;
    
    
    
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
    cout << "A: " << *a << " B: " << *b << endl;
}

void has_zero(int v[], int n) //B
{
    int i;
        for(i = 0; i < n; i++)
        {
            if(v[i] == 0)
            {
            cout << "True" << endl;
            break;
            }
        }
        if(i >= 6)
        {
            cout << "False" << endl;
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
            if(v[i] >= 0)
            {
                soma++;
            }
        }
    return soma;
}

void encher(int n, int v[]) //C, 4
{
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

void maiorMenor(int *v, int *maiore, int *menore) //C, 5
{
    *maiore = v[0];
    *menore = v[0];
        for(int i = 0; i < TAM-1; i++)
        {
            if(v[i+1] > (*maiore))
            {
                *maiore = v[i+1];
            }
            if(v[i+1] < (*menore))
            {
                *menore = v[i+1];
            }
        }
}

#include <iostream>

#define TAM 5
using namespace std;

int main()
{
    int multi1(int num1, int num2);
    int multi2(int *num1, int *num2);
    int soma1(int num);
    int soma2(int *num);
    int sub1(int num);
    int sub2(int *num);
    void inverte(int *vet);
    void maiusculo(char *pal);
    
    
    
    int num1, num2, vet[TAM] = {1, 2, 3, 4, 5};
    char pal[TAM] = {"Palav"};
    inverte(pV);
    for(int i = 0; i < TAM; i++)
    {
        cout << vet[i] << ' ';
    }
    
    return 0;
}

int multi1(int num1, int num2)
{
    return num1 * num2;
}

int multi2(int *num1, int *num2)
{
    return (*num1) * (*num2);
}

int soma1(int num)
{
    return num + 10;
}

int soma2(int *num)
{
    return (*num) + 10;
}

int sub1(int num)
{
    return num - 5;
}

int sub2(int *num)
{
    return (*num) - 5;
}

void inverte(int *vet)
{
    int i, j = 1, aux;
        for(i = 0; i < TAM / 2; i++)
        {
            aux = vet[i];
            vet[i] = vet[TAM-j];
            vet[TAM-j] = aux;
            j++;
        }
}

void maiusculo(char *pal)
{
    int i, j, k = 0;
    for(i = 0; i < TAM; i++)
    {
        for(j = 65; j <= 90; j++) //se maiuscula
        {
            if(pal[i] == j)
            {
                k++;
                break;
            }
        }
        if(k == 1)
        {
            continue;
        }
        k = 0;
        
    }
}

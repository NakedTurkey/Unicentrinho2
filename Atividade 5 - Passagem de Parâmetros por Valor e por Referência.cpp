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
    
    
    
    int num1, num2, i, vet[TAM] = {1, 2, 3, 4, 5};
    char pal[TAM];
    int *p1, *p2;
    p1 = &num1;
    p2 = &num2;
    
    cout << "Dois numeros: "; //ex1
    cin >> num1 >> num2;
    num1 = multi1(num1, num2);
    cout << "Multipricado " << num1 << endl;
    
    cout << "De novo dois numerinhos: "; //ex2
    cin >> num1 >> num2;
    num1 = multi2(p1, p2);
    cout << "Resurtado " << num1 << endl;
    
    cout << "Digite um numerin "; //ex3
    cin >> num1;
    num1 = soma1(num1);
    cout << "Somado " << num1 << endl;
    
    cout << "Numero: "; //ex4
    cin >> num1;
    num1 = soma2(p1);
    cout << "Somado " << num1 << endl;
    
    cout << "Numero imediatamente ";
    cin >> num1;
    num1 = sub1(num1);
    cout << "Substraido " << num1 << endl; //ex5
    
    cout << "Numero agora: "; //ex6
    cin >> num1;
    num1 = sub2(p1);
    cout << "Menos 5 " << num1 << endl;
    
    cout << "Encha o vetor:" << endl; //ex7
        for(i = 0; i < TAM; i++)
        {
            cin >> vet[i];
        }
    inverte(vet);
    cout << endl << "Invertido: ";
    for(int i = 0; i < TAM; i++)
    {
        cout << vet[i] << ' ';
    }
    
    cout << endl << "Palavra: "; //ex8
    cin >> pal;
    maiusculo(pal);
    cout << endl << "Maiusculada: ";
    for(int i = 0; i < TAM; i++)
    {
        cout << pal[i] << ' ';
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
    int i, j, k = 0, l;
    for(i = 0; i < TAM; i++)
    {
        k = 0;
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
        pal[i] = pal[i] - 32;
    }
}

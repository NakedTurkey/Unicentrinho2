#include <iostream>
#include <math.h>
#define TAM 8
using namespace std;

int soma(int num);
    void bissexto(int ano);
    void formaBinaria(int num);
    void senha(char senha[]);
    void juros();
    void ordenar(int vetorzinho[]);
int main()
{
    int vetor[TAM], vetor2[9];
    char vetorSenha[TAM];
    int i, j = 0, k, l = 0;
    int num, somaAntes;
    
    cout << "Digite um numero: ";
    cin >> num;
    somaAntes = soma(num);
    cout << "Soma dos antecessores " << somaAntes << endl;
    cout << "Escreva um ano: ";
    cin >> num;
    bissexto(num);
    cout << "Ponha um numero para converter em binaris: ";
    cin >> num;
    formaBinaria(num);
        while(j != 3)
        {
            cout << "Escreva uma senha com exatos 8 chars, pelo menos uma maiuscula e numero: ";
            cin >> vetorSenha;
               for(i = 0; i <= TAM; i++)
               {
                   if(vetorSenha[i] == 0)
                   {
                       break;
                   }
               }
              if(i != 8)
              {
                  cout << endl << "A senha eh com exatos 8 chars!" << endl << endl;
                  j = 0;
                  continue;
              }
              j++;
                for(i = 0; i < TAM; i++)
                {
                    for(k = 65; k <= 90; k++)
                    {
                        if(vetorSenha[i] == k)
                        {
                            l++;
                            break;
                        }
                    }
                    if(l > 0)
                    {
                      break;  
                    }
                }
                if(l == 0)
                    {
                        cout << endl << "A senha deve conter maiusculas!" << endl << endl;
                        j = l = 0;
                      continue;  
                    }
                j++;
                l = 0;
                for(i = 0; i < TAM; i++)
                {
                    for(k = 48; k <= 57; k++)
                    {
                        if(vetorSenha[i] == k)
                        {
                            l++;
                            break;
                        }
                    }
                    if(l > 0)
                    {
                      break;  
                    }
                }
                if(l == 0)
                {
                    cout << endl << "A senha deve conter numeros!" << endl << endl;
                    j = l = 0;
                    continue;
                }
                j++;
        }
    senha(vetorSenha);
    juros();
    cout << "Encha o vetor" << endl;
    for(i = 0; i< TAM; i++)  //vetorzinho
    {
        cin >> vetor[i];
    }
    ordenar(vetor);
    
    
    
    return 0;
}

int soma(int num)
{
    int soma = 0;
    int i;
        for(i = 1; i <= num; i++)
        {
            soma += i;
        }
        return soma;
}

void bissexto(int ano)
{
    if(ano % 4 == 0)
    {
       cout << "True" << endl;
    }
    else if(ano % 100 == 0)
    {
       cout << "True" << endl;
    }
    else if(ano % 400 == 0)
    {
        cout << "True" << endl;
    }
    else
    {
         cout << "False" << endl;
    }
}

void formaBinaria(int num)
{
    char binario[30], binario2[30];
    int i = 0, j, aux;
    while(num > 0)
    {
        
        if(num == 2)
            {
                binario[i] = '0';
                binario[i+1] = '1';
                i++;
                break;
            }
            else if(num == 1)
            {
                binario[i] = '1';
                binario[i+1] = '0';
                i++;
                break;
            }
            
        if(num % 2 == 0)
        {
            binario[i] = '0';
            num /= 2;
            i++;
            
        }
        else if(num % 2 == 1)
        {
            binario[i] = '1';
            num /= 2;
            i++;
        }
    }
    j = aux = i;
    
        for(i = 0; i <= aux; i++)
        {
            binario2[i] = binario[j];
            j--;
        }
        for(i = 0; i <= aux; i++)
        {
            cout << binario2[i];
        }
        cout << endl;
}

void senha(char senha[])
{
    char senha2[TAM];
    int i = 0;
    cout << "Digite a seha novamente: ";
    cin >> senha2;
        while(i < TAM)
        {
            if(senha[i] != senha2[i])
            {
                cout << "Senha incorreta!" << endl;
                break;
            }
            i++;
            if(i == TAM)
            {
                cout << "Senha correta!" << endl;
            }
        }
            
}

void juros()
{
    
    float pot(float base, int expo);
    
    float capital, juros, final, taxaExp;
    int anos;
    cout << "Capital: ";
    cin >> capital;
    cout << "Juros: ";
    cin >> juros;
    cout << "Anos: ";
    cin >> anos;
    juros /= 100;
    juros += 1;
    taxaExp = pow(juros, anos);
    final = capital * taxaExp;
   cout << "Seu montante eh " << final << endl;
}

float pot(float base, int expo)
{
    int i;
    float resul;
    for(i = 0; i < expo - 1; i++)
    {
        resul *= base;
    }
    return resul;
}

void ordenar(int vetorzinho[])
{
    int i, j, aux;
for(i = 0; i < TAM; i++)
{
    for(j = 0; j < TAM; j++)
    {
        if(vetorzinho[j+1] < vetorzinho[j])
        {
            aux = vetorzinho[j+1];
            vetorzinho[j+1] = vetorzinho[j];
            vetorzinho[j] = aux;
        }
    }
}
    cout << "Ordenada: ";
    for(i = 0; i< TAM; i++)
    {
        cout << vetorzinho[i] << " ";
    }
}

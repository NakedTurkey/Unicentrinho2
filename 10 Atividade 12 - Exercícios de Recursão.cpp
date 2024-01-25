/* 
 1 -
I. Faça teste de mesa para as duas implementações da função fatorial para as
seguintes instâncias: 5, 3 e 0.

Interativa:                     Recursiva:
    FAT     f   for     f           FAT     if1     else1      Saida 
1   5       1   5       120         5       F        V           120
2   3       1   3       6           3       F       V           6
3   0       1           1           0       V       F           1

II. Qual o valor de X(4)? (Feofiloff 2009)
    O valor é 13

 2 -
 I. Faça o teste de mesa da função max(), considerando v = {7, 12, 5, 14, 9}.
 
 v              n       if1      else1     if2     else2   
{7, 12, 5,      5       F           V       F       V
14, 9}   

3 - 
Quantas vezes a função fib() será chamada para resolver fib(8)?
    82 

4 - 

1. Como pode ser definido o problema em termos de um problema menor do mesmo
tipo?
    pilha

2. Como cada chamada recursiva diminui o tamanho do problema?
    Diminui o valor
    
3. Qual instância do problema serve como caso-base?
    quqando chega no final

4. À medida que o tamanho do problema diminui, é possível alcançar o caso-base?
    Sim.
    
*/
#include <iostream>

using namespace std;

int somaVetor(int *v, int n); //2 - II
int somaCadeia(int n); //4 - A

int main()
{
    int v[5] = {1, 3, 5, 7, 567}; //2 - II
    int soma; 
    soma = somaVetor(v, 5); //2 - II
    cout << "SOMA: " << soma << endl;
    
    soma = somaCadeia(6);//4 - A
    cout << "Soma consecutiva: " << soma << endl;
    
    
    
    return 0;
}

int somaVetor(int *v, int n) //2 - II
{
    if(n == 1)
    {
        return v[n-1];
    }else{
        return v[n-1] + somaVetor(v, n-1);
    }
}

int somaCadeia(int n) //4 - A
{
    if(n == 1)
    {
        return n;
    }
        return n + somaCadeia(n-1);
}


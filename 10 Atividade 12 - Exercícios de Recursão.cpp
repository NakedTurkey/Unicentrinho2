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




*/
#include <iostream>

using namespace std;

int soma(int *v, int n); //2 - II

int main()
{
    int v[5] = {1, 3, 5, 7, 567}; //2 - II
    int soms = soma(v, 5); //2 - II
    cout << "SOMA: " << soms; 
    return 0;
}

int soma(int *v, int n) //2 - II
{
    if(n == 1)
    {
        return v[n-1];
    }else{
        return v[n-1] + soma(v, n-1);
    }
}


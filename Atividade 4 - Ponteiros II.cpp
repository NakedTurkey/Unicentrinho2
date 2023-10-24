#include <iostream>

#define TAM 30
using namespace std;

int main()
{
    int dobro(int *p);
    void vogais(char pal, int *p);
    
        int a = 2, b = 4;//ex1
        int i;
        char pal[TAM];
        int *pA = &a;
        b = *pA + b;
        a = b - *pA;
        b = b - *pA;
        cout << a << ' ' << b << endl << endl;
        
        int v[3] = {1, 2, 3}; //ex2
        pA = &v[0];
            for(i = 0; i<3; i++)
             {
                 cout << *pA << endl;
                pA = &v[i+1];
             }
        
        pA = &a; //ex3
        a = dobro(pA);
        cout << endl << a << endl;
        
        a = 0;
        cin >> pal;
        vogais(pal, pA);
        cout << "Num de vogais: " << *pA << endl;
        
    
    return 0;
}

    int dobro(int *p)
    {
        int aux = *p * 2;
        return aux;
    }
    
    void vogais(char pal, int *p)
    {
        int i, j, k = 41, l = 0;
            for(i = 0; i < TAM; i++)
            {
                for(j = 0; j < 25; j++)
                {
                    if(pal[i] == k || k + 56)
                    {
                        *p++;
                        k = 41;
                        break;
                    }
                    k++;
                }
                if(pal[i+1] == '\0')
                {
                    break;
                }
            }
    }

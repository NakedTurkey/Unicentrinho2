#include <iostream>

#define TAM 30
using namespace std;

int main()
{
    int dobro(int *p);
    void vogais(char pal[], int *p);
    void invertStr(char pal[]);
    
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
        
        a = 0; //ex4
        cin >> pal;
        vogais(pal, pA);
        cout << "Num de vogais: " << *pA << endl;
        
        cin >> pal; //ex5
        invertStr(pal);
        
    
    return 0;
}

    int dobro(int *p)
    {
        int aux = *p * 2;
        return aux;
    }
    
    void vogais(char pal[], int *p)
    {
        int i, j, k = 65, l = 0;
            for(i = 0; i < TAM; i++)
            {
                for(j = 0; j < 5; j++)
                {
                    if(pal[i] == 'a')
                    {
                        *p += 1;
                        break;
                    }
                    else if(pal[i] == 'e')
                    {
                        *p += 1;
                        break;
                    }
                    else if(pal[i] == 'i')
                    {
                        *p += 1;
                        break;
                    }
                    else if(pal[i] == 'o')
                    {
                        *p += 1;
                        break;
                    }
                    else if(pal[i] == 'u')
                    {
                        *p += 1;
                        break;
                    }
                    
                }
                if(pal[i+1] == '\0')
                {
                    break;
                }
            }
    }
    
    void invertStr(char pal[])
    {
        int i, j, k = 1, aux;
        char *p;
            for(i = 0; i < TAM; i++)
            {
                if(pal[i+1] == '\0')
                {
                    aux = i+1;
                    break;
                }
            }
            j = aux / 2;
            aux--;
            for(i = 0; j > 0; i++)
            {
                p = &pal[i];
                pal[aux] = *p + pal[aux];
                pal[i] = pal[aux] - *p;
                pal[aux] = pal[aux] - pal[i];
                j--;
                aux--;
            }
        cout << "Pequena palavra: " << pal << endl;
    }

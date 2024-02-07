#include <iostream>

#define TAM 8

using namespace std;

int busca_sequencial(int x, int *v, int n); //ex1
int busca_bin_r(int x, int *v, int inicio, int fim); //ex2
int busca_sequencial2(int x, int *v, int n, int i); //ex3

int main(){
    int v[TAM];
    int i;
        for(i = 0; i < TAM; i++){
            v[i] = i+3;
        }
    i = busca_sequencial(9, v, TAM);
    cout << "o " << i << endl; //ex1
    
    i = busca_bin_r(9, v, 0, TAM);
    cout << "o " << i << endl; //ex2
    
    i = busca_sequencial2(9, v, TAM, 0);
    cout << "o " << i << endl; //ex3
    
    
    
    return 0;
}

int busca_sequencial(int x, int *v, int n){ //ex1
    int i;
        for (i = 0; i < n; i++){
            if(v[i] == x){
                return i-1;
            }
        }
    return -1;
}

int busca_bin_r(int x, int *v, int inicio, int fim){
if (inicio > fim)
return -1;
else{
int meio = (inicio + fim)/2;
if (x == v[meio])
return meio;
else
if (x < v[meio])
busca_bin_r(x, v, inicio, meio - 1);
else
busca_bin_r(x, v, meio + 1, fim);
}
}

int busca_sequencial2(int x, int *v, int n, int i){ //ex3
    if(i == n-1){
        if(v[i] == x){
            return i;
        }
    }else if(v[i] == x){
        return i;
    }
    return busca_sequencial2(x, v, n, i+1);
}

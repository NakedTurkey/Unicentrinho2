#include <iostream>

#define pi 3.1415

using namespace std;

void mul4(); // A 1
    void imparPar(); // A 2
    void somaIntervalo(); // A 3 
    void raio(); // A 4
    void fatorial();  // A 5
    void pot(); // A 6

    int mul42(int num); //B
    int imparPar2(int num); //B
    int somaIntervalo2(int num1, int num2); //B
    int raio2(int num); //B
    int fatorial2(int num); //B
    int pot2(int base, int expo); //B

int main()
{
    mul4();
    imparPar();
    somaIntervalo();
    raio();
    fatorial();
    pot();

    int num1, num2, multi4, intervalo, expResul;
    cout << endl << "Escreva um numero ";
    cin >> num1;
    multi4 = mul42(num1);

    if(multi4 % 4 == 0) //B
    {
        cout << "Multiplo de 4" << endl;
    }
    else
    {
        cout << "Nao e multiplo de 4" << endl;
    }
    cout << "Bote um numero: ";
    cin >> num1;
    num1 = imparPar2(num1);

    if(num1 % 2 == 0)
    {
        cout << "Eh par" << endl;
    }
    else
    {
        cout << "Nao eh par" << endl;
    }
    cout << "Digite dois numeros ";
    cin >> num1 >> num2;
    intervalo = somaIntervalo2(num1, num2);
    cout << "Intervalo: " << intervalo << endl;
    cout <<"Ponha um raio ";
    cin >> num1;
    num1 = raio2(num1);
    cout <<"Raio " << num1 << endl;
    cout << "Digite um fatorial ";
    cin >> num1;
    num1 = fatorial2(num1);
    cout << "Fatorial " << num1 << endl;
    cout << "Digite base e expoente ";
    cin >> num1 >> num2;
    expResul = pot2(num1, num2);
    cout << "Exponenciacao " << expResul;
}

void mul4() // A 1
{
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if(num % 4 == 0)
    {
        cout << "Multiplo de 4" << endl;
    }
    else
    {
        cout << "Nao e multiplo de 4" << endl;
    }
}

void imparPar() // A 2
{
    int num;
    cout << "Digite outro numero: ";
    cin >> num;
    if(num % 2 == 0)
    {
        cout << "Eh par" << endl;
    }
    else
    {
        cout << "Nao eh par" << endl;
    }
}

void somaIntervalo() // A 3
{
    int num1, num2;
    cout << "Escreva dois numeros: ";
    cin >> num1 >> num2;

    int i, soma = 0;
        for(i = num1; i <= num2; i++)
        {
            soma += i;
        }
    cout << "Intervalo " << soma << endl;
}

void raio() // A 4
{
    int raio;
    cout << "Ponha um raio: ";
    cin >> raio;
    cout << "Raio " <<(4*pi*(raio*raio*raio))/3 << endl;
}

void fatorial() // A 5
{
    int num;
    cout << "Bote um numero fatorial: ";
    cin >> num;
    int i, fatorial = 1;
    for(i = num; i > 0; i--)
    {
        fatorial *= num;
        num--;
    }
    cout << "Fatorial " << fatorial << endl;
}

void pot()  // A 6
{
    int base, expo;
    cout << "Digite base e expoente: ";
    cin >> base >> expo;
    int i, resul = 1;
        for(i = 0; i < expo; i++)
        {
            resul *= base;
        }
    cout << "Potenciacao " <<resul << endl;
}

int mul42(int num) // B
{
    return num % 4;
}

int imparPar2(int num) // B
{
    return num % 2;
}

int somaIntervalo2(int num1, int num2) //B
{
    int intervalo2 = 0;

    int i, soma = 0;
        for(i = num1; i <= num2; i++)
        {
            soma += i;
        }
    return soma;
}

int raio2(int num)
{
    int raio = (4*pi*(num*num*num))/3;
    return raio;
}

int fatorial2(int num)
{
    int i, fatorial = 1;
    for(i = num; i > 0; i--)
    {
        fatorial *= num;
        num--;
    }
    return fatorial;
}

int pot2(int base, int expo)
{
    int i, resul = 1;
        for(i = 0; i < expo; i++)
        {
            resul *= base;
        }
    return resul;
}

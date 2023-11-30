#include <iostream>

#define A 5
using namespace std;

static int c = 5;
register int d = 5;

void incrementa();

int main()
{
    int a, b; //1
    int *p = &a, *p1 = &b;
    int v[2] = {1, 2};
    
    p++;
    
    p = p + A; //2
    
    p = p - A; //3
    
    
    
    if(p1 == p) //5
    {
        return 0;
    }
    
    incrementa(); //6
    incrementa();
    incrementa();
    
    cout << c << ' ' << d << endl; //8
    
    p = &v[1]; //9
    cout << *p << endl;
    p++;
    cout << *p << endl;
    
    
    
    return 0;
}

void incrementa()
{
    c++;
    d++;
}

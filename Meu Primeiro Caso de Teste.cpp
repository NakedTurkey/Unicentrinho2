#include <iostream>

#define USU "usuario"
#define SENHA "senha"

using namespace std;

/*ID DO CASO DE TESTE
	TESTE

TÍTULO
	Assegurar que o sistema permite o acesso com um nome de usuário e senha corretos.

OBJETIVO
	O usuário deve estar registrado no sistema com o nome de usuário “usuario” e a senha “senha”

 PRÉ-CONDIÇÕES 
	O usuário deve estar registrado no sistema com o nome de usuário “usuario” e a senha “senha”*/

int main()
{
    string usuario;
    string senha;
    do{
        cin >> usuario;
            if(usuario != USU){
                cout << "Tente novamente\n\n";
            }
    }while(usuario != USU);
    
    do{
        cin >> senha;
            if(senha != SENHA){
                cout << "Tente novamente\n\n";
            }
    }while(senha != SENHA);
    
return 0;
}
    
    

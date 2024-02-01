#include <stdio.h>
#include <conio.h>

void espaco(int x);
void imprimeTitulo(char *picone, char direcao);
void imprimeCompras(char *picone, char direcao);
void navega(int direcao);

 
 typedef struct{ //Tipo Titulo
 	char elementos[8][12];
 }Titulo;
 
 typedef struct{
 	char elementos[4][20];
 }Compras;
 
int main() {
    printf("Pressione uma tecla (ou 'q' para sair):\n");
    navega(75);

    while (1) {
        char tecla = getch();
            if (tecla == 'q' || tecla == 'Q'){
            	espaco(5);
				printf("Você pressionou 'q'. Saindo...\n");
                break;
			}
		navega(tecla);
			
	}
    return 0;
}

void navega(int direcao)
{
	static char a, icone;
		if(a == 0){
			icone = 1;
			a++;
		}
		if(icone < 4){ //Titulo
			imprimeTitulo(&icone, direcao);
		}else if(icone >= 4){
			imprimeCompras(&icone, direcao);
		}
	
	
}

void imprimeTitulo(char *picone, char direcao){

	Titulo titulo = {{{"Comprar"},{"* Comprar"},
						{"Vender"}, {"* Vender"}, 
						{"Suporte"}, {"* Suporte"},
						{"Promocoes"}, {"* Promocoes"}}};
	
	if(*picone == 0){ //esquerda
		if(direcao == 80)
		{
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[0]);
			espaco(33);
			printf("%s\n", titulo.elementos[2]);
			espaco(5);
			printf("%s", titulo.elementos[5]);
			espaco(31);
			printf("%s\n", titulo.elementos[6]);
			*picone = 3;
		}else if(direcao == 77){
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[0]);
			espaco(33);
			printf("%s\n", titulo.elementos[3]);
			espaco(5);
			printf("%s", titulo.elementos[4]);
			espaco(33);
			printf("%s\n", titulo.elementos[6]);
			*picone = 1;
		}else if(direcao == 13){
			*picone = 5;
			imprimeCompras(picone, 75);
		}
	}else if(*picone == 1){ //direita
		if(direcao == 80)
		{
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[0]);
			espaco(33);
			printf("%s\n", titulo.elementos[2]);
			espaco(5);
			printf("%s", titulo.elementos[4]);
			espaco(33);
			printf("%s\n", titulo.elementos[7]);
			*picone = 2;
		}else if(direcao == 75){
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[1]);
			espaco(31);
			printf("%s\n", titulo.elementos[2]);
			espaco(5);
			printf("%s", titulo.elementos[4]);
			espaco(33);
			printf("%s\n", titulo.elementos[6]);
			*picone = 0;
		}
		
	}else if(*picone == 2){ //baixo direita
		if(direcao == 72)
		{
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[0]);
			espaco(33);
			printf("%s\n", titulo.elementos[3]);
			espaco(5);
			printf("%s", titulo.elementos[4]);
			espaco(33);
			printf("%s\n", titulo.elementos[6]);
			*picone = 1;
		}else if(direcao == 75){
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[0]);
			espaco(33);
			printf("%s\n", titulo.elementos[2]);
			espaco(5);
			printf("%s", titulo.elementos[5]);
			espaco(31);
			printf("%s\n", titulo.elementos[6]);
			*picone = 3;
		}
	}else if(*picone == 3){ //baixo esquerda
		if(direcao == 72)
		{
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[1]);
			espaco(31);
			printf("%s\n", titulo.elementos[2]);
			espaco(5);
			printf("%s", titulo.elementos[4]);
			espaco(33);
			printf("%s\n", titulo.elementos[6]);
			*picone = 0;
		}else if(direcao == 77){
			system("cls");
			espaco(5);
			printf("%s", titulo.elementos[0]);
			espaco(33);
			printf("%s\n", titulo.elementos[2]);
			espaco(5);
			printf("%s", titulo.elementos[4]);
			espaco(33);
			printf("%s\n", titulo.elementos[7]);
			*picone = 2;
		}
	}
	
}

void imprimeCompras(char *picone, char direcao){
	Compras compras = {{{"Fogao 7 boca"}, {"* Fogao 7 boca"},
						{"Serra de home"}, {"* Serra de home"}}};
	if(*picone == 4){
		if(direcao == 77){
			system("cls");
			espaco(5);
			printf("%s", compras.elementos[0]);
			espaco(36);
			printf("%s\n", compras.elementos[3]);
			*picone = 5;
		}else if(direcao == 8){
			*picone = 1;
			imprimeTitulo(picone, 75);
		}
	}else if(*picone == 5){
		if(direcao == 75){
			system("cls");
			espaco(5);
			printf("%s", compras.elementos[1]);
			espaco(36);
			printf("%s\n", compras.elementos[2]);
			*picone = 4;
		}else if(direcao == 8){
			*picone = 1;
			imprimeTitulo(picone, 75);
		}
	}
}

void espaco(int x)  //Fasz espaco
{
	int i;
	for(i = 0; i < x; i++)
	{
		printf(" ");
	}
}




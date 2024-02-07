#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void espaco(int x);
void navegaTitulo(char *picone, char direcao);
void imprimeTitulo(char icon);
void navegaCompras(char *picone, char direcao);
void imprimeCompras(char icon);
void imprimeArtes(int tipo);
void imprimeNome();
void navega(int direcao);
void setFontSize(int a, int b);

 
 typedef struct{ //Tipo Titulo
 	char elementos[8][12];
 }Titulo;
 
 typedef struct{
 	char elementos[4][20];
 }Compras;
 
int main() {
	setFontSize(32, 32);
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
			navegaTitulo(&icone, direcao);
		}else if(icone >= 4){
			navegaCompras(&icone, direcao);
		}
	
	
}

void navegaTitulo(char *picone, char direcao){
	
	
	if(*picone == 0){ //esquerda
		if(direcao == 80)
		{
			imprimeTitulo(3);
			*picone = 3;
		}else if(direcao == 77){
			imprimeTitulo(1);
			*picone = 1;
		}else if(direcao == 13){ //Entra
			*picone = 5;
			navega(75);
		}
	}else if(*picone == 1){ //direita
		if(direcao == 80)
		{
			imprimeTitulo(2);
			*picone = 2;
		}else if(direcao == 75){
			imprimeTitulo(0);
			*picone = 0;
		}
		
	}else if(*picone == 2){ //baixo direita
		if(direcao == 72)
		{
			imprimeTitulo(1);
			*picone = 1;
		}else if(direcao == 75){
			imprimeTitulo(3);
			*picone = 3;
		}
	}else if(*picone == 3){ //baixo esquerda
		if(direcao == 72)
		{
			imprimeTitulo(0);
			*picone = 0;
		}else if(direcao == 77){
			imprimeTitulo(2);
			*picone = 2;
		}
	}
	
}

void navegaCompras(char *picone, char direcao){
	if(*picone == 4){
		if(direcao == 77){
			imprimeCompras(1);
			*picone = 5;
		}else if(direcao == 8){
			*picone = 1;
			navega(75);
		}
	}else if(*picone == 5){
		if(direcao == 75){
			imprimeCompras(0);
			imprimeArtes(0);
			*picone = 4;
		}else if(direcao == 8){
			*picone = 1;
			navegaTitulo(picone, 75);
		}
	}
}

void imprimeArtes(int tipo){
	if(tipo == 0){
		imprimeNome();
	}
		
}

void imprimeNome(){
	HANDLE cor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(cor, 0x04);
	espaco(22);
	printf("_____ ___   _____ ___   ___   _ ___        _____ ___   ___\n");
	espaco(21);
	printf("(_   _)  _ \\(  _  )  _ \\(  _ \\(_)  _ \\     (  _  )  _ \\(  _ \\ \n");
	espaco(23);
	printf("| | | (_) ) (_) | (_(_) (_(_) | ( (_)    | (_) | |_) ) |_) )\n");
	espaco(23);
	printf("| | |    /(  _  )  _) |  _) | | |  _     (  _  )  __/|  __/\n");
	espaco(23);
	printf("| | | |\\ \\| | | | |   | |   | | (_( )    | | | | |   | |\n");
	espaco(23);
	printf("(_) (_) (_)_) (_)_)   (_)   (_)____/     (_) (_)_)   (_)\n\n\n");
	SetConsoleTextAttribute(cor, 0x07);
}


void imprimeTitulo(char icon){
	Titulo titulo = {{{"Comprar"},{"* Comprar"},
						{"Vender"}, {"* Vender"}, 
						{"Suporte"}, {"* Suporte"},
						{"Promocoes"}, {"* Promocoes"}}};
	
	if(icon == 0){
		system("cls");
		imprimeArtes(0);
		espaco(35);
		printf("%s", titulo.elementos[1]);
		espaco(29);
		printf("%s\n\n", titulo.elementos[2]);
		espaco(35);
		printf("%s", titulo.elementos[4]);
		espaco(31);
		printf("%s\n", titulo.elementos[6]);
	}else if(icon == 1){
		system("cls");
		imprimeArtes(0);
		espaco(5);
		printf("%s", titulo.elementos[0]);
		espaco(31);
		printf("%s\n", titulo.elementos[3]);
		espaco(5);
		printf("%s", titulo.elementos[4]);
		espaco(31);
		printf("%s\n", titulo.elementos[6]);
	}else if(icon == 2){
		system("cls");
		imprimeArtes(0);
		espaco(5);
		printf("%s", titulo.elementos[0]);
		espaco(31);
		printf("%s\n", titulo.elementos[2]);
		espaco(5);
		printf("%s", titulo.elementos[4]);
		espaco(31);
		printf("%s\n", titulo.elementos[7]);
	}else if(icon == 3){
		system("cls");
		imprimeArtes(0);
		espaco(5);
		printf("%s", titulo.elementos[0]);
		espaco(31);
		printf("%s\n", titulo.elementos[2]);
		espaco(5);
		printf("%s", titulo.elementos[5]);
		espaco(29);
		printf("%s\n", titulo.elementos[6]);
	}
}

void imprimeCompras(char icon){
	Compras compras = {{{"Fogao 7 boca"}, {"* Fogao 7 boca"},
						{"Serra de home"}, {"* Serra de home"}}};
	if(icon == 0){
		system("cls");
		espaco(5);
		printf("%s", compras.elementos[1]);
		espaco(36);
		printf("%s\n", compras.elementos[2]);
	}else if(icon == 1){
		system("cls");
		espaco(5);
		printf("%s", compras.elementos[0]);
		espaco(36);
		printf("%s\n", compras.elementos[3]);
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

void setFontSize(int a, int b) { 

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx =  new CONSOLE_FONT_INFOEX();

    lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);

    GetCurrentConsoleFontEx(hStdOut, 0, lpConsoleCurrentFontEx);

    lpConsoleCurrentFontEx->dwFontSize.X = a;

    lpConsoleCurrentFontEx->dwFontSize.Y = b;

    SetCurrentConsoleFontEx(hStdOut, 0, lpConsoleCurrentFontEx);

}




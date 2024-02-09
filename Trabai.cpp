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
void imprimeEuro();
void imprimeMuie();
void imprimeEuroMuie();
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
	}else if(tipo == 1){
		imprimeEuro();
	}else if(tipo == 2){
		imprimeEuroMuie();
	}
		
}

void imprimeNome(){
	HANDLE cor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(cor, 0x04);
	espaco(22);
	printf("_____ ___   _____ ___   ___   _ ___        _____ ___   ___\n");
	espaco(21);
	printf("(_   _)  _ \\(  _  )  _ \\(  _ \\(_)  _ \\     (  _  )  _ \\(  _ \\\n");
	espaco(23);
	printf("| | | (_) ) (_) | (_(_) (_(_) | ( (_)    | (_) | |_) ) |_) )\n");
	espaco(23);
	printf("| | |    /(  _  )  _) |  _) | | |  _     (  _  )  __/|  __/\n");
	espaco(23);
	printf("| | | |\\ \\| | | | |   | |   | | (_( )    | | | | |   | |\n");
	espaco(23);
	printf("(_) (_) (_)_) (_)_)   (_)   (_)____/     (_) (_)_)   (_)\n\n");
	espaco(20);
	SetConsoleTextAttribute(cor, 0x02);
	printf("'--------------------------------------------------------------'\n");
	SetConsoleTextAttribute(cor, 0x07);
}

void imprimeEuro(){
	HANDLE cor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(cor, 0x06);
	espaco(16);
		printf("_.-------._\n");
		espaco(13);
		printf("_-'_.------._ `-_\n");
		espaco(11);
		printf("_- _-          `-_/\n");
		espaco(10);
		printf("-  -\n");
		espaco(6);
		printf("___/  /______________\n");
		espaco(5);
		printf("/___  .______________/\n");
		espaco(6);
		printf("___| |_____________\n");
		espaco(5);
		printf("/___  .____________/\n");
		espaco(9);
		printf("\\  \\\n");
		espaco(10);
		printf("-_ -_             /|\n");
		espaco(12);
		printf("-_ -._        _- |\n");
		espaco(14);
		printf("-._ `------'_./\n");
		espaco(17);
		printf("`-------'\n");
	SetConsoleTextAttribute(cor, 0x07);
}

void imprimeEuroMuie(){
	int x = 12;
	HANDLE cor = GetStdHandle(STD_OUTPUT_HANDLE);
	
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(37);
		printf(".-\"\"-.");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(15);
		espaco(x);
		printf("_.-------._\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(36);
		printf("(___/\\ \\");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(11);
		espaco(x);
		printf("_-'_.------._ `-_\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(18);
		printf(",                 (|^ ^ ) )");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(8);
		espaco(x);
		printf("_- _-          `-_/\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(16);
		printf("//(                _)_\\=_// (");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(7);
		espaco(x);
		printf("-  -\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(10);
		printf(",..__/ `\\           ____(_/_ ` \\   )");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(2);
		espaco(x);
		printf("___/  /______________\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(12);
		printf("`\\    _/        _/---._/(_)_  `\\ (");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(1);
		espaco(x);
		printf("/___  .______________/\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(14);
		printf("'--\\ `-.__..-'    /.    (_), |  )");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(1);
		espaco(x);
		printf("___| |_____________\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(18);
		printf("`._        ___\\_____.'_| |__/");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(0);
		espaco(x);
		printf("/___  .____________/\n");
		SetConsoleTextAttribute(cor, 0x05); //muie
		espaco(21);
		printf("`~----\"`   `-.........'");
		SetConsoleTextAttribute(cor, 0x06);	//euro
		espaco(7);
		espaco(x);
		printf("\\  \\\n");
		espaco(52);
		espaco(x);
		printf("-_ -_             /|\n");
		espaco(54);
		espaco(x);
		printf("-_ -._        _- |\n");
		espaco(56);
		espaco(x);
		printf("-._ `------'_./\n");
		espaco(59);
		espaco(x);
		printf("`-------'\n");
	SetConsoleTextAttribute(cor, 0x07);
}

void imprimeMuie(){
		espaco(27);
		printf(".-\"\"-.\n");
		espaco(26);
		printf("(___/\\ \\\n");
		espaco(8);
		printf(",                 (|^ ^ ) )\n");
		espaco(7);
		printf("//(               _)_\\=_// (\n");
		espaco(1);
		printf(",..__/ `\\          ____(_/_ ` \\   )\n");
		espaco(2);
		printf("`\\    _/        _/---._/(_)_  `\\ (\n");
		espaco(4);
		printf("'--\\ `-.__..-'    /.    (_), |  )\n");
		espaco(8);
		printf("`._        ___\\_____.'_| |__/\n");
		espaco(11);
		printf("`~----\"`   `-.........'\n");
}

void imprimeTitulo(char icon){
	Titulo titulo = {{{"Comprar"},{"* Comprar"},
						{"Vender"}, {"* Vender"}, 
						{"Suporte"}, {"* Suporte"},
						{"Promocoes"}, {"* Promocoes"}}};
	
	if(icon == 0){
		system("cls");
		imprimeArtes(0);
		espaco(30);
		printf("%s", titulo.elementos[1]);
		espaco(29);
		printf("%s\n\n", titulo.elementos[2]);
		espaco(30);
		printf("%s", titulo.elementos[4]);
		espaco(31);
		printf("%s\n", titulo.elementos[6]);
		imprimeArtes(2);
	}else if(icon == 1){
		system("cls");
		imprimeArtes(0);
		espaco(30);
		printf("%s", titulo.elementos[0]);
		espaco(31);
		printf("%s\n\n", titulo.elementos[3]);
		espaco(30);
		printf("%s", titulo.elementos[4]);
		espaco(31);
		printf("%s\n", titulo.elementos[6]);
		imprimeArtes(2);
	}else if(icon == 2){
		system("cls");
		imprimeArtes(0);
		espaco(30);
		printf("%s", titulo.elementos[0]);
		espaco(31);
		printf("%s\n\n", titulo.elementos[2]);
		espaco(30);
		printf("%s", titulo.elementos[4]);
		espaco(31);
		printf("%s\n", titulo.elementos[7]);
		imprimeArtes(2);
	}else if(icon == 3){
		system("cls");
		imprimeArtes(0);
		espaco(30);
		printf("%s", titulo.elementos[0]);
		espaco(31);
		printf("%s\n\n", titulo.elementos[2]);
		espaco(30);
		printf("%s", titulo.elementos[5]);
		espaco(29);
		printf("%s\n", titulo.elementos[6]);
		imprimeArtes(2);
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




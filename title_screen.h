#include "funcs.h"

using namespace std;

void drawLogo(){
	FILE *logo = fopen("yugioh_logo.txt", "r+") ;
	if(logo == NULL) cout << "Erro ao abrir arquivo.\n";
	char c;
	c = fgetc(logo);
	while(c != EOF){
		cout << c;
		c = fgetc(logo);
	}
	fclose(logo);
}

void startScreen(){
	system("CLS");
	set_color(10);
	drawLogo();
	set_color(2);
	cout << "\n\n\t\t";
	system("PAUSE");
	cout << "\n";
}

void firstMenu(){
	system("CLS");
	cout << "Bem-Vindo ao Yugioh!\n";
	cout << "Digite o nome dos jogador 1:\n";
	cin >> p1.nome;
	cout << "Digite o nome dos jogador 2:\n";
	cin >> p2.nome;
	}
	




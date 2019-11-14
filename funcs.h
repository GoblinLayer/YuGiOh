#include "global.h"
#include <windows.h>

using namespace std;

PLAYER p1, p2;

list<CARTA> leitorDeDeck(char *fileName){

	
	list<CARTA> deck;		
	FILE *arq = fopen(fileName, "r+");
	while(!feof(arq)){                //LER AS CARTAS DO ARQUIVO "teste.txt" E COLOCA-LAS NA LISTA
		CARTA c;
		fscanf(arq,"%s", &c.nomeDaCarta);
		fscanf(arq,"%d", &c.ATK);
		fscanf(arq,"%d", &c.DEF);
		deck.push_back(c);		
	}
	
	for(list<CARTA>::iterator it = deck.begin();it!=deck.end(); ++it){  // PRINTAR O DECK INTEIRO
		cout << "Nome: " << it->nomeDaCarta << " ATK: " << it->ATK << " DEF: " << it->DEF << endl;		
	}	
	
	fclose(arq);	
	return deck;
}

void set_color(int x){
    
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleTextAttribute(color, x);
    
}

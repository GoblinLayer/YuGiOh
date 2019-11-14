#include "title_screen.h"


using namespace std;



int main(){
		
	startScreen();
	system("CLS");	
	char arqName[100];
	cin >> arqName;
	leitorDeDeck(arqName);
	firstMenu();
	//turno()	
	
	
	return 0;
}

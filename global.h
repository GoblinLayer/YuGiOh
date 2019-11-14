#include <bits/stdc++.h>
#include <stack>

using namespace std;

typedef struct{
	char nomeDaCarta[25];
	int ATK, DEF;	
}CARTA;


typedef struct{
	int id;
	char nome[50];
	stack<CARTA> deck;
}PLAYER;

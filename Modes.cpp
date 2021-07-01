

#include <iostream>
#include<conio.h>
#include<dos.h>
#include <windows.h>
#include<time.h>

// Directories
#include "MainHeader.h"

using namespace std;


void modes() {
	
	easyClass eC;
	mediumClass mC;
	hardClass hc;
	
	setcursor(0,0);
	srand((unsigned)time(NULL));
	
	
		do {
		system("cls");
		system("color A");
		gotoxy(50,5); cout << " ------------------- ";
		gotoxy(50,6); cout << " |     CAR GAME    |";
		gotoxy(50,7); cout << " ------------------- ";
		gotoxy(50,9); cout << " 	EASY MODE    	";
		gotoxy(50,10); cout << " 	MEDIUM MODE	";
		gotoxy(50,11); cout << " 	LEGENDARY MODE (HARD)			";
		gotoxy(50,12); cout << " 	BACK			";
		gotoxy(50,14); cout << ">>> CHOICE:		";
		char op = getche();
		
		switch(op) {
			case '1':
				eC.easyPlay();
				break;
			case '2':
				mC.mediumPlay();
				break;
			case '3':
				hc.hardPlay();
				break;
			case '4':
				getMenu();
				break;
			default:
				cout << "Invalid! Try again";
				Sleep(888);
				break;
		}
		
	} while (1);


	
}

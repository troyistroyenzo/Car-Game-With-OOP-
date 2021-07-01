#include <iostream>
#include<conio.h>
#include<dos.h>
#include <windows.h>
#include<time.h>

// Directories
#include "MainHeader.h"

using namespace std;


/*
	All funcitons without a class go here

*/

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;


void getMenu() {
	setcursor(0,0);
	srand((unsigned)time(NULL));
	
	do {
		system("cls");
		system("color A");
		gotoxy(50,5); cout << " ------------------- ";
		gotoxy(50,6); cout << " |     CAR GAME    |";
		gotoxy(50,7); cout << " ------------------- ";
		gotoxy(50,9); cout << " 	PLAY      	";
		gotoxy(50,10); cout << " 	INSTRUCTIONS	";
		gotoxy(50,11); cout << " 	QUIT			";
		gotoxy(50,13); cout << ">>> CHOICE:		";
		char op = getche();
		
		switch(op) {
			case '1':
				modes();
				break;
			case '2':
				instructions();
				break;
			case '3':
				exit(0);
				break;
			default:
				cout << "Invalid! Try again";
				break;
		}
		
	} while (1);

}

void gotoxy(int x, int y) {
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}


void setcursor(bool visible, DWORD size) {
	if(size == 0)
		size = 20;
		
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo (console, &lpCursor);
}


void gameover() {
	system("cls");
	cout << "\n\n\t\t\tGAME OVER.";
	getch();
}


void instructions() {
	system("cls");
	gotoxy(50,5); cout << " ------------------- ";
		gotoxy(50,6); cout << " |     CAR GAME    |";
		gotoxy(50,7); cout << " ------------------- ";
		gotoxy(50,9); cout << "Avoid the cars by moving left (A) and right (D)" << endl;
	cout << "Press any key to continue";
	getch();
}







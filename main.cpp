#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <_mingw.h>
#include "hangGameCalc.cpp"
#include <stdlib.h>
#include <time.h> 

using namespace std;
int main(int argc, char const *argv[])
{
	cout << "=========" << endl;
	cout << "HANG-GAME" << endl;
	cout << "=========" << endl;

	cout << "Press to continue...";
	getchar();

	int election;

	cout << "==============" << endl;
	cout << "SELECTION MENU" << endl;
	cout << "==============" << endl;
	
	cout << "1. PLAYER-1 Vs Computer!" << endl;
	cout << "2. PLAYER-1 Vs PLAYER-2!" << endl;
	
	cout << "ELECTION: ";
	cin >> election;


	while (1)
	{
        if (election == 1 || election == 2)
            break;
		cout << "Enter a valid election (1 / 2): ";
		cin >> election;
	}

	switch (election)
	{
		case 1:
			hangGamePvE();
			break;

		case 2:
			break;		
	}












	return 0;
}
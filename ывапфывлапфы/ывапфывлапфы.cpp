﻿#include <vector>
#include <Windows.h>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <ctime>

using namespace std;

HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);
int x = 41;
int y = 42;

void formspace(vector < vector < char>> outerspace)
{
	SetConsoleTextAttribute(hand, 15);
	for (size_t i = 0; i < 80; i++)
	{
		vector <char> test2;
		for (size_t j = 0; j < 120; j++)
		{
			test2.push_back('.');

		}
		outerspace.push_back(test2);
	}
	SetConsoleTextAttribute(hand, 6);
	for (size_t i = 0; i < outerspace.size(); i++)
	{
		if (i == 40)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				switch (j)
				{

				case 60:
					outerspace[i][j] = '█';
				case 61:
					outerspace[i][j] = '█';
				case 62:
					outerspace[i][j] = '█';
				case 63:
					outerspace[i][j] = '█';
				case 64:
					outerspace[i][j] = '█';
				case 65:
					break;
				default:
					break;
				}
			}
		}
		else if (i == 41)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				switch (j)
				{
				case 59:
					outerspace[i][j] = '█';
				case 60:
					outerspace[i][j] = '█';
				case 61:
					outerspace[i][j] = '█';
				case 62:
					outerspace[i][j] = '█';
				case 63:
					outerspace[i][j] = '█';
				case 64:
					outerspace[i][j] = '█';
				case 65:
					outerspace[i][j] = '█';
				case 66:
					break;
				default:
					break;
				}
			}
		}
		else if (i == 42)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				switch (j)
				{
				case 58:
					outerspace[i][j] = '█';
				case 59:
					outerspace[i][j] = '█';
				case 60:
					outerspace[i][j] = '█';
				case 61:
					outerspace[i][j] = '█';
				case 62:
					outerspace[i][j] = '█';
				case 63:
					outerspace[i][j] = '█';
				case 64:
					outerspace[i][j] = '█';
				case 65:
					outerspace[i][j] = '█';
				case 66:
					outerspace[i][j] = '█';
				case 67:
					break;
				default:
					break;
				}
			}
		}
		else if (i == 43)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				switch (j)
				{
				case 58:
					outerspace[i][j] = '█';
				case 59:
					outerspace[i][j] = '█';
				case 60:
					outerspace[i][j] = '█';
				case 61:
					outerspace[i][j] = '█';
				case 62:
					outerspace[i][j] = '█';
				case 63:
					outerspace[i][j] = '█';
				case 64:
					outerspace[i][j] = '█';
				case 65:
					outerspace[i][j] = '█';
				case 66:
					outerspace[i][j] = '█';
				case 67:
					break;
				default:
					break;
				}
			}
		}
		else if (i == 44)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				switch (j)
				{
				case 59:
					outerspace[i][j] = '█';
				case 60:
					outerspace[i][j] = '█';
				case 61:
					outerspace[i][j] = '█';
				case 62:
					outerspace[i][j] = '█';
				case 63:
					outerspace[i][j] = '█';
				case 64:
					outerspace[i][j] = '█';
				case 65:
					outerspace[i][j] = '█';
				case 66:
					break;
				default:
					break;
				}
			}
		}
		else if (i == 45)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				switch (j)
				{
				case 60:
					outerspace[i][j] = '█';
				case 61:
					outerspace[i][j] = '█';
				case 62:
					outerspace[i][j] = '█';
				case 63:
					outerspace[i][j] = '█';
				case 64:
					outerspace[i][j] = '█';
				case 65:
					break;
				default:
					break;
				}
			}
		}
	}
	SetConsoleTextAttribute(hand, 3);
	for (size_t i = 0; i < outerspace.size(); i++)
	{
		for (size_t j = 0; j < outerspace[i].size(); j++)
		{
			if (i == y && j == x)
			{
				outerspace[i][j] = '█';
			}
		}
	}
	SetConsoleTextAttribute(hand, 15);
	for (size_t i = 0; i < 80; i++)
	{

		for (size_t j = 0; j < 120; j++)
		{
			cout << outerspace[i][j];
		}
	}
}

void go_around(vector < vector < char>> outerspace)
{
	while (true)
	{
		
		while (y != 38)
		{
			formspace(outerspace);
			Sleep(5000);
			system("cls");
			y -= 1;
		}
		if (y == 38)
		{
			for (size_t i = 0; i < 5; i++)
			{
				formspace(outerspace);
				Sleep(5000);
				system("cls");
				x += 1;
				y -= 1;
			}
		}
		if (y == 33)
		{
			while (x != 71)
			{
				formspace(outerspace);
				Sleep(5000);
				system("cls");
				x += 1;
			}
		}
		if (x == 71)
		{
			for (size_t i = 0; i < 5; i++)
			{
				formspace(outerspace);
				Sleep(5000);
				system("cls");
				y += 1;
				x += 1;
			}
		}
		if (x == 76)
		{
			while (y != 46)
			{
				formspace(outerspace);
				Sleep(5000);
				system("cls");
				y += 1;
			}
		}
		if (y == 46)
		{
			for (size_t i = 0; i < 5; i++)
			{
				formspace(outerspace);
				Sleep(5000);
				system("cls");
				y += 1;
				x -= 1;
			}
		}
		if (x == 71)
		{
			while(x != 46)
			formspace(outerspace);
			Sleep(5000);
			system("cls");
			x -= 1;
		}
		if (x == 46)
		{
			for (size_t i = 0; i < 5; i++)
			{
				formspace(outerspace);
				Sleep(5000);
				system("cls");
				y -= 1;
				x -= 1;
			}
		}
		while (y!=42)
		{
			formspace(outerspace);
			Sleep(5000);
			system("cls");
			y -= 1;
		}
	}

}

void main() {
	vector < vector < char>> outerspace;
	system("mode con cols=120 lines=120");
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	go_around(outerspace);
}
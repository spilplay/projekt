#include <vector>
#include <Windows.h>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <ctime>

using namespace std;


HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);

void formspace(vector < vector < char>>& outerspace, int x, int y)
{
	for (size_t i = 0; i < 120; i++)
	{
		vector <char> test2;
		for (size_t j = 0; j < 120; j++)
		{
			test2.push_back('.');

		}
		outerspace.push_back(test2);
	}
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
	for (size_t i = 0; i < outerspace.size(); i++)
	{
		if (i == y - 1)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				if (j == x)
				{
					outerspace[i][j] = '█';
				}
			}
		}

			}
		}
		if (i == y + 1)
		{
			for (size_t j = 0; j < outerspace.size(); j++)
			{
				if (j == x)
				{
					outerspace[i][j] = '█';
				}
			}
		}
	}
	for (size_t i = 0; i < 120; i++)
	{

		for (size_t j = 0; j < 120; j++)
		{
			cout << outerspace[i][j];
		}

	}
}

void go_around(int& x, int& y, vector < vector < char>>& outerspace)
{
	while (true)
	{
		formspace(outerspace, x, y);
		Sleep(10000);
		system("cls");
		y -= 1;

	}
}
void solarsys()
{

}

void main() {
	vector < vector < char>> outerspace;
	int x = 41;
	int y = 42;
	system("mode con cols=120 lines=120");
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	SetConsoleTextAttribute(hand, 15);
	go_around(x, y, outerspace);


	cout << "si";
}
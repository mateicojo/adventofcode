#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream fin("C:/Users/mok_a/source/repos/ConsoleApplication2/datein.txt");

int verificare(int b[],int x) {
	for (int i = 0; i < 25; i++) {
		for (int j = i + 1; j < 25; j++)
			if (b[i] + b[j] == x)
				return 1;
	}
	return 0;
}

int main() //[] [] [] [] []
{
	int a[1001];
	int i = 0;
	int b[25];
	int x;
	for (int j = 0; j < 25; j++)
		fin >> b[j];
	
	while (!fin.eof()) {
		fin >> x;
		if (!verificare(b, x)) {
			cout << x;
			break;
		}
		b[(i++)%25] = x;

	}
}


#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

ifstream fin("C:/Users/mok_a/source/repos/datein.txt");

void numar(char a[]) {

}

int verificare(char a[]) {

}

int main()
{
	int minim;
	int maxim;
	int nr_parole = 0;
	char a[256];
	while (!fin.eof()) {
		fin.getline(a, 256);
		nr_parole+=verificare(a);
	}
	cout << nr_parole;
}
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
	int a[1000];
	int i = 0;
	int b[25];
	int x;
	int w = 0;
	for (int j = 0; j < 25; j++) {
		fin >> b[j];
		a[j] = b[j];
	}
	int invalid;

	while (!fin.eof()) {
		fin >> a[w];
		if (!verificare(b,a[w])) {
			invalid = a[w];
			break;
		}
		b[(i++)%25] = a[w];
		w++;
	}
	int li = 0;
	int ls;
	int s = a[0];
	for (li = 0; li < w; li++) {
		ls = li;
		while (s < invalid) {
			ls++;
			s += a[ls];
		}
		if (s == invalid) {
			int minim = a[li];
			int maxim = a[li];
			for (int i = li; i <= ls; i++) {
				if (a[i] > maxim)
					maxim = a[i];
				if (a[i] < minim)
					minim = a[i];
			}
			cout << "\n";
			cout << minim + maxim;
			break;
		}
		s = a[li+1];
	}
	cout << "nu";
}

#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

ifstream fin("C:/Users/mok_a/source/repos/datein.txt");

int trees_no(char a[], int right, int cursor) {
    ifstream fin("C:/Users/mok_a/source/repos/datein.txt");
    int trees = 0;
    while (!fin.eof()) {
        fin.getline(a, 256);
            if (a[cursor] == '#')
                trees++;
            cursor = (cursor + right) % strlen(a);
    }
    cout << trees << "\n";
    return trees;
}

int main()
{
    int cursor = 0, right = 1, down = 2, trees = 0, k = 0;
    char a[256];
    char b[256];

    long long int result = 1;

    result *= trees_no(a, 1, 0);
    result *= trees_no(a, 3, 0);
    result *= trees_no(a, 5, 0);
    result *= trees_no(a, 7, 0);

    ifstream fin("C:/Users/mok_a/source/repos/datein.txt");

    while (!fin.eof()) {
        if (k % 2 != 0) {
            fin.getline(a, 256);
        }
        else{
            fin.getline(a, 256);
            if (a[cursor] == '#')
                trees++;
            cursor = (cursor + right) % strlen(a);
        }
        k++;
    }
    result *= trees;
    cout << trees << "\n";
    cout << result;
}

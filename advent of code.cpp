#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

ifstream fin("C:/Users/mok_a/source/repos/datein.txt");

int main()
{
    int cursor = 0;
    char a[256];
    int trees = 0;
    while (!fin.eof()) {
        fin.getline(a, 256);
        if (a[cursor] == '#')
            trees++;
        cursor = (cursor + 3) % strlen(a);
    }
    cout << trees;
}
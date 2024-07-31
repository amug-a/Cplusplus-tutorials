#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int x = 5, y = 10;
	int *px = &x, *py = &y;
	int **pz = &px;

	cout << "\t\t\t\t\t" << **pz << '\n';

	int ab = 0;
	int *abp = &ab;
	int **abpp = &abp;
	int ***abppp = &abpp;

	cout << "\t\t\t\t\t" << ***abppp << "\n\n\n\n\n\n";

	cout << "************************************ Pointers ************************************" << endl;
}

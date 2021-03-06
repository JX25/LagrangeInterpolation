// Lagrange.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	double wynik=0;
	double szukana = 5;
	double *tabX = new double[3];
	double *tabY = new double[3];

	tabX[0] = 2;
	tabX[1] = 3;
	tabX[2] = 10;

	tabY[0] = 0;
	tabY[1] = 2;
	tabY[2] = 1;

	for (int i = 0; i < 3; i++)
	{
		double dzialanie = 0;
		dzialanie = tabY[i];
		for (int j = 0; j < 3; j++) if (tabX[i] != tabX[j]) dzialanie *= (szukana - tabX[j]);
		for (int j = 0; j < 3; j++) if (tabX[i] != tabX[j]) dzialanie /= (tabX[i] - tabX[j]);

		wynik += dzialanie;
		cout << dzialanie << endl;
	}


	cout << "Wynik dla x="<<szukana<<" "<<"y=" << wynik << endl;
	delete tabX;
	delete tabY;
    return 0;
}


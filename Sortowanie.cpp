#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;


void funkcja(int tab[], int wielkosc)
{
	for (int i = 0; i < wielkosc; i++)
	{
		for (int j = 1; j < wielkosc - i; j++)
		{
			if (tab[j - 1] > tab[j])
			{
				swap(tab[j - 1], tab[j]);
			}
		}
	}
}



int main()
{
	int wielkosc;
	int liczby[10];
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++)
	{
		liczby[i] = rand() %100 +1;
		cout << "liczba nr. " << i + 1 << ": " << liczby[i] << endl;
	}
	
	cout << "\n\n";
	wielkosc = sizeof liczby / 4;
    funkcja(liczby, wielkosc);
	
	for (int i = 0; i < wielkosc; i++)
	{
		cout << liczby[i] << endl;
	}

}


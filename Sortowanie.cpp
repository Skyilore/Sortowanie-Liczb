#include <iostream>
#include <cstdlib>
using namespace std;



void sort(int tab[], int wielkosc)
{
    for (int i = 0; i < wielkosc; i++)
    {
        for (int j = 0; j < wielkosc - i; j++)
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
    int liczby[100];
    int wielkosc = sizeof liczby / 4;
    srand(time(NULL));

    for (int i = 0; i < wielkosc; i++)
    {
        liczby[i] = rand() % 100 + 1;
        cout << "Liczba nr." << i + 1 << ": " << liczby[i] << endl;
    }
    
    cout << "\n\n";

    sort(liczby, wielkosc);

    cout << "Liczby posortowane: " << endl;

    for (int i = 0; i < wielkosc; i++)
    {
        cout << liczby[i] << endl;
    }

}



#include<iostream>
using namespace std;

void sortowanie_przez_wstawianie(int n, int *tab)
{
     int pom, j;
     for(int i=1; i<n; i++)
     {

             pom = tab[i];
             j = i-1;


             while(j>=0 && tab[j]>pom)
             {
                        tab[j+1] = tab[j];
                        --j;
             }
             tab[j+1] = pom;
     }
}

int main()
{
    int n, *tab;
    cout<<"Podaj wielkosc zbioru: ";
    cin>>n;

    tab = new int [n];

    for(int i=0; i<n; i++)
    {
            cout<<"Podaj "<<i+1<<" element: ";
            cin>>tab[i];
    }

    cout<<"Elementy przed sortowaniem:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";

    sortowanie_przez_wstawianie(n, tab);

    cout<<"\nElementy posortowaniem:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";


    return 0;
}

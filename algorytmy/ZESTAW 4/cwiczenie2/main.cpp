#include <stack>
#include <iostream>

using namespace std;

int main()
{
     stack < int > stos;

     int liczba = 0;

     do
     {
         cout << "Podaj liczbe (0 - konczy dzialanie programu): ";
         liczba = 0;
         cin >> liczba;
         if( liczba != 0 ) stos.push( liczba );

     } while( liczba != 0 );

     cout << "Liczby, ktore zostaly zdjete ze stosu: ";
     while( stos.empty() == false )
     {
         cout << stos.top() << ", ";
         stos.pop();
     }


     return 0;
}

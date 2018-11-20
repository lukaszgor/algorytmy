#include <iostream>

using namespace std;

float a;
int main()
{
    cout << "Podaj liczbe   " << endl;
    cin>>a;
    if( a > 0){
        cout<<"liczba jest dodatnia";
    }
    if(a < 0){
            cout<<"liczba jest ujemna";
}if(a ==0){
cout<<"liczba jest rowna zeru";
}
    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

int x;

int main()
{
    priority_queue < int > kolejkaLiczb;
    kolejkaLiczb.push( 123 );
    kolejkaLiczb.push( 12 );
    kolejkaLiczb.push( 55 );

    cout << "Podaj liczbe " << endl;
    cin>>x;
    kolejkaLiczb.push( x );
    cout<<"Pierwszy element kolejki   "<<kolejkaLiczb.top()<<endl;
    kolejkaLiczb.push(kolejkaLiczb.top()+100);
    cout<<"Pierwszy element w kolejce po dodaniu 100 to "<<kolejkaLiczb.top();
    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

int x;

int main()
{


    priority_queue < int,vector < int >,less < int > >kolejkaLiczb1; //malej¹co - domyœlnie
    kolejkaLiczb1.push( 123 );
    kolejkaLiczb1.push( 12 );
    kolejkaLiczb1.push( 55 );
 cout<<"Malejaco -domyslnie  "<<endl;

     while( kolejkaLiczb1.empty() == false )
     {
         cout << kolejkaLiczb1.top() <<endl;
         kolejkaLiczb1.pop();
     }

cout<<"Rosnaco  "<<endl;

    priority_queue < int, vector < int >,greater < int > > kolejkaLiczb2; //rosn¹co
    kolejkaLiczb2.push( 123 );
    kolejkaLiczb2.push( 12 );
    kolejkaLiczb2.push( 55 );

    while( kolejkaLiczb2.empty() == false )
     {
         cout << kolejkaLiczb2.top() <<endl;
         kolejkaLiczb2.pop();
     }


    return 0;
}


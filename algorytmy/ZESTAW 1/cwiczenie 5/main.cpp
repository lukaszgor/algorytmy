#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
float a,b,res ;
int choice;
long long silnia =1;
int main()
{
 cout<<"    Co chcesz obliczyc : 1-pole kwadratu 2- pole prostokata 3-pole kola 4- objetos kuli 5- objetosc walca 6- silnia"<<endl;
 cin>>choice;
 switch(choice){
 case 1:
     cout<<"podaj a"<<endl;
     cin>>a;
     res =a*a;
     cout<<"wynik  "<<res<<endl;
     break;
case 2:
     cout<<"podaj a"<<endl;
     cin>>a;
      cout<<"podaj b"<<endl;
     cin>>b;
     res = a*b;
     cout<<"wynik  "<<res<<endl;
     break;
case 3:
     cout<<"podaj r"<<endl;
     cin>>a;
     res = a*a * M_PI ;
     cout<<"wynik  "<<res<<endl;
     break;
case 4:
     cout<<"podaj r"<<endl;
     cin>>a;
     res = (4*a*a*a * M_PI)/3 ;
     cout<<"wynik  "<<res<<endl;
     break;
case 5:
     cout<<"podaj r"<<endl;
     cin>>a;
     cout<<"podaj H"<<endl;
     cin>>b;
     res = (a*a * M_PI*2*b)/4 ;
     cout<<"wynik  "<<res<<endl;
     break;
case 6:
     cout<<"podaj a"<<endl;
     cin>>a;
     for(int i=a;i>1;i--)
		silnia*=i;
     cout<<a<<"! = "<<silnia<<endl;

     break;


 }


    return main();
}

#include <iostream>

using namespace std;
float a,b,res;
int choice;

int main()
{
    cout<<"Podaj pierwsza liczbe "<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe "<<endl;
    cin>>b;
    cout<<"wybierz dzialanie 1-dodawanie 2-odejmowanie 3-mnozenie 4-dzielenie"<<endl;
    cin>>choice;

    switch(choice){
    case 1:
        res = a + b;
        cout<<res<<endl;
        break;
     case 2:
        res = a - b;
        cout<<res;
        break;
     case 3:
         res = a*b;
        cout<<res;
        break;
     case 4:
        res = a/b;
        if((a== 0) || (b ==0)){
            cout<<"nie dziel przez 0!";
        }else{
           cout<<res;
        }

        break;

    }
    return 0;
}

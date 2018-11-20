#include <iostream>

using namespace std;
float a,b,c,x,y;
int main()
{
    cout<<"podaj  przyprostokatna a"<<endl;
    cin>>a;
    cout<<"podaj przyprostokatna  b"<<endl;
    cin>>b;
    cout<<"podaj przeciwprostokatna c "<<endl;
    cin>>c;

    x==(a*a)+(b*b);
    y==(c*c);


    if(x=y){
        cout<<"trojkat jest prostokatny"<<endl;
    }else{
    cout<<"trojkat nie jest prostokatny!"<<endl;
    }


    return 0;
}

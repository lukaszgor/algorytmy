#include <iostream>

using namespace std;
float a,b,c,x;
int main()
{
    cout<<"OBLICZAM x z rownania 2ax+3b=c"<<endl;
    cout<<"podaj a"<<endl;
    cin>>a;
    cout<<"podaj b"<<endl;
    cin>>b;
    cout<<"podaj c"<<endl;
    cin>>c;
    if(a==0){
        cout<<"    'a' nie moze rownac sie  0 !"<<endl;
    }else{

    x=(c-3*b)/(2*a);

    cout<<" x = "<<x<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;
int age;
string name,direction;

int main()
{
    cout << "podaj imie" << endl;
    cin>>name;
    cout<<"podaj wiek"<<endl;
    cin>>age;
    cout<<"podaj kierunek"<<endl;
    cin>>direction;
    cout<<"Imie : "<<name<<" wiek : "<<age<<"  witamy na kierunku : "<<direction;
    return 0;
}

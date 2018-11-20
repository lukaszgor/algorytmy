#include <cstdlib>
#include <iostream>
using namespace std;

void dec_to_bin(int liczba)
{
	if(liczba>0)
	{
		dec_to_bin(liczba/2);
		cout<<liczba%2;
	}
}

int main()
{
	int liczba;

	cout<<"Podaj liczbe: ";
	cin>>liczba;
	cout<<" binarna  "<<liczba<<": ";

	dec_to_bin(liczba);

	cout<<endl;

	system("pause");
	return 0;
}

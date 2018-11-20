#include <iostream>

using namespace std;
//int tablica[10];
//float a,b,c,d,e,f,g,h,j,k;
int main()
{

 int a[10],i,j,temp;
    int n=10;
    cout<<"PODAJ ELEMENTY DO SORTOWANIA "<<endl;

    for(i=0;i<n;++i)

        cin>>a[i];

    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }

    cout<<"ELEMENTY POSORTOWANE BABELKOWO";
    for(i=0;i<n;++i)
        cout<<" "<<a[i];



    return 0;
}

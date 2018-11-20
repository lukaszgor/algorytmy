#include <iostream>

using namespace std;

int main()
{
  cout << "Tabliczka mnozenia" << endl;

     for(int x = 1; x < 11; x++)
     {

          for(int i = 1; i < 11; i++)
          {
          cout << i * x << '\t';
          }
          cout << endl;
     }
    return 0;
}

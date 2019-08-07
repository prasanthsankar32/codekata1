#include <iostream>
using namespace std;
int main()
{
  int noOfElements, key;
  int keyFound = 0;
  
  cin >> noOfElements >> key;
  
  while(noOfElements != 0)
  {
    int num;
    cin >> num;
    if(num == key)
    {
        keyFound = 1;
        break;
    }
    noOfElements--;
  }
  cout << ( (keyFound) ? "yes" : "no" );
  return 0;
}
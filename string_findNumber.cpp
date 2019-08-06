#include <iostream> 
using namespace std; 

bool inRange(unsigned low, unsigned high, unsigned x) 
{ 
    return  ((x-low) <= (high-low)); 
} 
  
int main() 
{ 
    int n;
    cin>>n;
    inRange(0,11, n)? cout << "yes\n":  cout  <<"no\n"; 
    
} 
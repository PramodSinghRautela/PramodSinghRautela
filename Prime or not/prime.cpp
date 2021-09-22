#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,i,c;
  cout<<"Enter a number to check:";
  cin>>n;

  for(i=2;i<=sqrt(n);i++)
  {
     if(n%i==0)
     {
         c=0;
         break;
     }
  }   
  if(n==1||n==0)
  {
     cout<<"Not Prime\n";
  }
  else if(c==0)
  {
     cout<<"Not Prime\n";
  }
  else
  {
     cout<<"Prime\n";
  }
  
  return 0;
       
}

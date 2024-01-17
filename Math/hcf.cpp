// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  
  int a,b;
  int r;
  int x=a;
  int i=2;
  int count=0;
  cout<<"enter the two numbers";
  cin>>a>>b;
  r=b%a;
  while((r==0) || (x=0)){
      
    if(count%2==0){
        x=x%r;
         }
    else{
    r=r%x;    
    }
    count++;
   }
  if(r==0){
      
     cout<<x; 
     }
  else{cout<<r;}
  
  return 0;}
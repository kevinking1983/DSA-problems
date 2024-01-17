#include<iostream>
using namespace std;
int main(){
int n;
int revn=0;

cout<<"enter a no.";
cin>>n;

while(n!=0){
    
 int remainder=n%10;
 revn=revn*10+remainder;
    n=n/10;
    
}

cout<<revn;

return 0;
}
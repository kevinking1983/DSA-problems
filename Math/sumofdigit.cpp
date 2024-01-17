#include <iostream>
using namespace std;

int sum(int n){
    
    if(n<1){
        return 0 ;
    }
    
  return sum(n/10)+n%10;
   return n;

}




int main() {
    
int k=sum(253);
cout<<k;
    return 0;
}
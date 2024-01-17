#include <iostream>
using namespace std;


/*only for sorted arrays


*/


int sqroot(int x){
  
  int low=0;
  int high=x;
  int ans;
  
  
while(low<=high){
   int mid=(low+high)/2;
    
    int msq=mid*mid;
    
    if(msq==x){
        return mid;
    }
    
   else if(x>msq){
       
       low=mid+1;
   }
   else{
       
    high=mid-1;
    ans=mid;
    
   } 
}
return ans;}    


int main() {
   
 
 
 int k=sqroot(81);
 cout<<k;
 
    return 0;
}

#include <iostream>
using namespace std;


//only for sorted arrays
// iterative method


int binarysearch(int arr[],int n,int x){
  
  int low=0;
  int high=n-1;

    
while(low<=high){
    
   int mid=(low+high)/2;
    
    if(arr[mid]==x){
        return mid;
    }
    
   else if(x>arr[mid]){
       
       low=mid+1;
   }
   else{
       
       high=mid-1;
       
   } 
}
    
    
return -1;}


int main() {
   
 int arr[6]={10,20,30,40,50,60};
 
 int k=binarysearch(arr,6,30);
 cout<<k;
 
    return 0;
}
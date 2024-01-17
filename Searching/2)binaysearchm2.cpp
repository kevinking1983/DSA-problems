#include <iostream>
using namespace std;


//only for sorted arrays
//recursive method

int bsearch(int arr[],int low,int high,int x){
  

   int mid=(low+high)/2;
    
    if(arr[mid]==x){
        return mid;
    }
    
   else if(x>arr[mid]){
       
       return bsearch(arr,low,mid-1,x);
   }
   else{
       
     return bsearch(arr,mid-1,high,x);
   } 
}
    


int main() {
   
 int arr[6]={10,20,30,40,50,60};
 
 int k=bsearch(arr,0,6,30);
 cout<<k;
 
    return 0;
}
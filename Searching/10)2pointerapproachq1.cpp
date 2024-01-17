#include <iostream>
using namespace std;


/*
In sorted array

*/


bool search(int arr[],int n,int x){
  
  int left=0;
  int right=n-1;
  
  
  while(left<right){
      
      
      
if(arr[left]+arr[right] == x ) {
    
    return true;
}

     if(arr[left]+arr[right] > x){
          right--;
          
      }
      //right of mid
      else{left++;}
   
      }
      
 }
  
int main() {
   
 int arr[]={5,20,40,30,20,50,60};
 bool k;
  k=search(arr,7,45);
 cout<<k;
 
    return 0;
}
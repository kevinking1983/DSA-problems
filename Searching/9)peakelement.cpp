#include <iostream>
using namespace std;


/*

only one peak element of the array is returned even if multiple are present 

Trick: If 

arr[mid]<arr[mid-1] for sure there is a peak in left side
arr[mid]<arr[mid+1] fot sure there is a peak in right side


*/


int search(int arr[],int n){
  
  int low=0;
  int high=n-1;
  int mid;
  
  while(low<high){
      
      //binary search
       mid= (low+high)/2;
      

if((mid==0 || arr[mid]>arr[mid-1]) && (mid== n-1 || arr[mid]>arr[mid+1])){
    
    return mid;
}

      //left of mid
     if(mid>0 && (arr[mid]<arr[mid-1])){
          high=mid-1;
          
      }
      //right of mid
      else{low=mid+1;}
   
      }
      
 }
  
int main() {
   
 int arr[]={5,20,40,30,20,50,60};
 int k;
  k=search(arr,7);
 cout<<k;
 
    return 0;
}
#include <iostream>
using namespace std;


/*

Trick: In a circular sorted array always one side of the array is always sorted(maybe left or right)

to check which side is sorted if
//conditions 
arr[0]<mid left is sorted 
arr[n-1]>mid right is sorted
//nested condition
if no. is not in range of sorted list we go to other side of the arr
 
 ex: 100,500,10,20,30,40,50 here mid is 20 right side sorted but 
 key=500 so we shift the search to left side
*/


int search(int arr[],int n,int x){
  
  int low=0;
  int high=n-1;
  int mid;
  
  while(low<high){
      
      //binary search
       mid= (low+high)/2;
      

      
      if(arr[mid]==x){
          
          return mid;
      }
      
      
      
      //left side sorted
      if(arr[mid]>arr[low]){
          
          if(x>=arr[low]&&x<=arr[mid]){
              
              high=mid-1;
          }
          else{low=mid+1;}
      }
      //right side sorted
      else{
          
          if(x>=arr[mid]&&x<=arr[high]){
              
              low=mid+1;}
              else{high=mid-1;}
          }
          
      }
      
 return -1; }
  
int main() {
   
 int arr[]={100,500,10,20,30,40,50};
 int k;
  k=search(arr,7,500);
 cout<<k;
 
    return 0;
}
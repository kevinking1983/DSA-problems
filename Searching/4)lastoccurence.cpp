
#include <iostream>
using namespace std;


/*only for sorted arrays

for last occurence if thre are copies in a sorted array like(10,20,20,30) then condtion for the last occurence of numbers like 20 is

if(mid==x){
    
    Here it is checking if here 20 is last in all the repeated ones
    if(mid==0 || arr[mid]!=arr[mid+1]){
        return mid;
    }
        else{bsearch(arr,mid+1,high,x);} recursive method
        else{low=mid+1;} iterative method
}
*/


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
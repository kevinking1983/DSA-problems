#include <iostream>
using namespace std;

/* We compute the lmax and rmax at every element and 
capacity= a[i]-min(lmax,rmax)

effecient soln- We pre compute and store all lmax's and rmax's in 2 arrays and evaluate capacity at every element*/


int getwater(int arr[],int n){
 
int c=0;
int lmax,rmax;
for(int i=1;i<n-1;i++){
    

    
    for(int j=0;j<i;j++){
        
        int lmax=arr[i];
         lmax= max(lmax,arr[j]);
        
        }
        
        int rmax=arr[i];
       for(int j=i+1;j<n;j++){
           
           int rmax = max(rmax,arr[j]);
           
       }
      c=c+(min(lmax,rmax)-arr[i]);  
    }
return c;}

int main(){

int arr[5]={3,0,1,2,5};
int k=getwater(arr,5);
cout<<k;
return 0;
}
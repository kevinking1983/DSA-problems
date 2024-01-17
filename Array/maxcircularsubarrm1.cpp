#include <iostream>
#include <algorithm>
using namespace std;


int maxsum(int arr[],int n){
 
 int res=arr[0];
 
 for(int i=0;i<n;i++){
     
     int curr_max=arr[i];
     int curr_sum=arr[i];
     
     for(int j=1;j<n;j++){
         
         int index=(i+j)%n; //logic to determine all subarrays in circular manner
         curr_sum+=arr[index];
         curr_max=max(curr_max,curr_sum);
         
         
     }
     res=max(res,curr_max);
     }
 
return res;}

int main(){

int arr[6]={3,-4,5,6,-8,7};
int k=maxsum(arr,6);
cout<<k;
return 0;
}
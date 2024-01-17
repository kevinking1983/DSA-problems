#include <iostream>
#include <algorithm>
using namespace std;

//we are sliding a window length k to cover all cases and get maxsum  of subarray of length k


int sliding(int arr[],int n,int k){
 
int sum=0;
int maxsum;
//moving window forward
for(int i=0;i<k;i++){
    
    int sum=sum+arr[i];
    int maxsum=sum;}
  
   //moving window backward 
     for(int i=k;i<n;i++){
         
         sum=sum+(arr[i]-arr[i-k]);
         maxsum=(sum,maxsum);
     }
     
     
  return maxsum;  
}


int main(){

int arr[6]={1,8,30,-5,20,7};
int k =sliding(arr,6,3);
cout<<k;
return 0;
}
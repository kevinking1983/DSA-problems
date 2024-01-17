#include <iostream>
#include <algorithm>
using namespace std;



int sliding(int arr[],int n,int k){
 
int res=0;


for(int i=0;i<n-k;i++){
    
    int sum=0;
    
  
    
     for(int j=i;j<i+k;j++){
         
         sum=sum+arr[j];
         
     }
    res=max(res,sum);
}
return res;}

int main(){

int arr[6]={1,8,30,-5,20,7};
int k =sliding(arr,6,3);
cout<<k;
return 0;
}
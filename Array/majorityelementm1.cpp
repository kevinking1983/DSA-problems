#include <iostream>
#include <algorithm>
using namespace std;



int majority(int arr[],int n){
 

int i;

for(int i=0;i<n;i++){
    
    int count=1;
    for(int j=i+1;j<n;j++){
        
        if(arr[i]==arr[j]){
            
           count++;
            
        }
        
    }
 
  if(count>n/2){

           return i;}
    
}
}

int main(){

int arr[5]={8,3,4,8,8};
int k =majority(arr,5);
cout<<k;
return 0;
}
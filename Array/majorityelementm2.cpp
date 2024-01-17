#include <iostream>
#include <algorithm>
using namespace std;



int findmajority(int arr[],int n){
 
int res=0;
int count =1;
int i;

//Finding a candidate
for(int i=1;i<n;i++){
    
    if(arr[res]==arr[i]){
        count++;
    }
    else{count--;}
    if(count==0){
    
        res=i;count=1;
    }
}
//Check if the candidate is actually a majority
count=0;
for(int i=0;i<n;i++){
    
        
        if(arr[res]==arr[i]){
            
           count++;
            
        }
        
 
  if(count<n/2){

           return -1;}
    
}
return res;}

int main(){

int arr[5]={8,3,4,8,8};
int k =findmajority(arr,5);
cout<<k;
return 0;
}
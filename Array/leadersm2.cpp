#include <iostream>
using namespace std;

/*
frome back to front
Here if a[i] is great than the previous leader hence it is also a leader intalizing last element as the 1st leader*/


void leaders(int arr[],int n){
 
 int curr_leader=arr[n-1];
 
 
 for(int i=n-1;i>=0;i--){
     
     if(arr[i]>curr_leader){
          
           cout<<arr[i];
        curr_leader=arr[i];
        
              }
           
     }
     
}

int main(){

int arr[6]={1,2,3,4,5,10};
leaders(arr,6);
return 0;
}
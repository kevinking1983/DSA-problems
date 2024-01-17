#include <iostream>
using namespace std;

bool checksort(int arr[],int n){

for(int i=1;i<n;i++){
    
 if(arr[i]<arr[i-1]){
     
     return false;
 }
}
return true;} 

int main(){

int arr[6]={1,2,3,9,5,6};
bool n=checksort(arr,6);
cout<<n;
return 0;
}
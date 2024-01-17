#include <iostream>
using namespace std;

int largest(int arr[],int n){
 
int max=arr[0];
for(int i=0;i<=n;i++){
    
 if(max<arr[i]){
     max=arr[i];
    }
}
return max;
}    

int main(){

int arr[6]={1,2,3,4,5,10};
int n= largest(arr,6);
cout<<n;
return 0;
}
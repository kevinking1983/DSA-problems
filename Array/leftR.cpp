#include <iostream>
using namespace std;

void leftR(int arr[],int n){
 
 int temp;
 
for(int i=1;i<n;i++){
    
    temp=arr[0];
    arr[i-1]=arr[i];
    arr[n-1]=temp;
    
}
    
for(int i=0;i<=n;i++){
    
cout<<arr[i]<<endl;
}
}
int main(){

int arr[6]={1,2,3,4,5,10};
leftR(arr,6);
return 0;
}
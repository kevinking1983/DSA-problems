#include <iostream>
using namespace std;

int revarr(int arr[],int n){
 
 int i=0;
 int j=n-1;
 int k;
 
while(i<j){
    
    arr[i]=k;
    arr[i]=arr[j];
    arr[j]=k;
    i++;
    j--;
}
for(i=0;i<=n;i++){
    
cout<<arr[i]<<endl;
}
}
int main(){

int arr[6]={1,2,3,4,5,10};
revarr(arr,6);
return 0;
}
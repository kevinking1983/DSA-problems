#include <iostream>
using namespace std;

int secondlargest(int arr[],int n){
 
int largest=0;
int res=-1;
for(int i=0;i<=n;i++){
    
 if(arr[i]>arr[largest]){
    res=largest;
    largest=i;
    }
else if(arr[i]!=arr[largest]){
    
    if(res==-1 || arr[i]>arr[res]){
        res=i;
    }
}
}
return res;}    

int main(){

int arr[6]={5,3,1,2,6,10};
int n=secondlargest(arr,6);
cout<<arr[n];
return 0;
}
#include <iostream>
using namespace std;


void swap(int arr[],int i,int count){
    
int k;
k=arr[i];
    arr[i]=arr[count];
    arr[count]=k;
}

void end0(int arr[],int n){
 
 int i=0;
 int count;

for(i=0;i<n;i++){
    
    if(arr[i]!=0){
        swap(arr,i,count);
        count++;
    }
    
}
for(i=0;i<=n;i++){
    
cout<<arr[i]<<endl;
}
}
int main(){

int arr[6]={1,2,3,4,5,10};
end0(arr,6);
return 0;
}
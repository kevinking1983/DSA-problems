// method1: Basic method runing leftR d times
/*method2: Here we store the 1st d elements in a temp array
           and shitft the rest of the elements to those d spaces
           and later put these temp array into the n-d to n spaces*/

#include <iostream>
using namespace std;

/* reversing of
1. 1st element to dth element
2. dth element to last element
3. 1st element to last element */


void swap(int arr[],int low,int high){
    
int k;
k=arr[low];
    arr[low]=arr[high];
    arr[high]=k;
}

void reverse(int arr[],int low , int high){
    
while(low<high){
    swap(arr,low,high);
low++;
high--;
    }
}

void leftR(int arr[],int n,int d){
 
reverse(arr,0,d-1);
reverse(arr,d,n-1);
reverse(arr,0,n-1);    

    
for(int i=0;i<=n;i++){
    
cout<<arr[i]<<endl;
}
}
int main(){

int arr[6]={1,2,3,4,5,10};
leftR(arr,6,2);
return 0;
}
           

#include <iostream>
#include <algorithm>
using namespace std;

//we are sliding a window from i to each case and checking if any sum is matching to the given sum
//k given sum

int sliding(int arr[],int n,int k){
 
for(int i=0;i<n;i++){
    
    int sum=0;
    for(int j=i;j<n;j++){
        
        sum=sum+arr[j];
        
        
    }
    
  if(sum==k)  {
      return true;
  }
else{ return false;}
}

}


int main(){

int arr[6]={1,8,30,-5,20,7};
int k =sliding(arr,6,3);
cout<<k;
return 0;
}
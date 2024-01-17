#include <iostream>
using namespace std;

/* method1: checking highest of all possible cases/patterns

*/


int maxsum(int arr[],int n){
 
int res=arr[0];

for(int i=0;i<n;i++){
    
  int curr=0;
  for(int j=i;j<n;j++){
    
    curr=curr+arr[j];
    res=max(res,curr); //updation of maxes after each pattern/case                                                 checking 
    
}
}


return res;}

int main(){

int arr[5]={3,0,1,2,5};
int k=maxsum(arr,5);
cout<<k;
return 0;
}
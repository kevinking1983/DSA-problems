#include <iostream>
using namespace std;

/* method1: checking highest of all possible cases/patterns

As we get maxes of patterns at each i we use that max to compute the max at the upcoming i using 

maxending(i)=max(maxending(i-1)+arr[i],arr[i])
*/

int maxsum(int arr[],int n){
 
int res=arr[0];
int maxending=arr[0];

    for(int i=1;i<n;i++){
        
        maxending=max(maxending,maxending+arr[i]);
        res=max(res,maxending);
    }
    return res;
}

int main(){

int arr[5]={3,0,1,2,5};
int k=maxsum(arr,5);
cout<<k;
return 0;
}
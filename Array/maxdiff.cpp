#include <iostream>
using namespace std;

int maxdiff(int arr[],int n){
 
int res=arr[1]-arr[0];
int minval=arr[0];

for(int j=1;j<n;j++){
    
    res=max(res,arr[j]-minval); //max diff is updated here
    minval=min(minval,arr[j]);  //minvalue is updated as the series goes on                                                            on
    
       return res;}       
           }

int main(){

int arr[6]={1,2,3,4,5,10};
int k=maxdiff(arr,6);

cout<<k;
return 0;
}
#include <iostream>
using namespace std;

int deletion(int arr[],int n, int x){
 
 int i;
for(int i=0;i<=n;i++){
    
    if(arr[i]==x){
        break;
    }
    }
    //If elementt is not present i=n
    if(i==n){
        return n;
    }
   
    for(int j=i; j<n-1; j++){
     
     arr[j] = arr[j+1];
     return n-1; //new size of array
     }
}
     

    
int main() {


return 0;
}
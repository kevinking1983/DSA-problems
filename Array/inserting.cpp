#include <iostream>
using namespace std;

int insert(int arr[],int n, int x,int cap, int pos){
 
 // checking if the array is filled
 if(n==cap){
     return n;
     }
 int idx= pos-1;
 
 for(int i=n-1; i>=idx; i--){
     arr[i+1] = arr[i];
     arr[idx]= x;
     return n+1;
     }
}
    
int main() {

return 0;
}
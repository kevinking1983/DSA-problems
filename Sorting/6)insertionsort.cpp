#include <iostream>
using namespace std;

// O(n^2) at max ,O(n) best case
//In place and stable
//mostly used for small sized arrays

void insertionsort(int arr[],int l){
    
for(int k=1;k<l;k++)  {  
    
    int key = arr[k]; //storing kth value in the key variable
    
   int i=k-1;
    
   while(i>=0 && key<arr[i]){
       
       arr[i+1]=arr[i];//when the kth index is being evaluated to come              in the sorted part then the sorted array space
                        //must be move by 1 position which will be done here
       i--;
       
   }
arr[i+1]=key; // the kth value will be inserted at the position where
                 //while iterating its value will be less than arr[i]
} 
    
    for(int i=0;i<l;i++){
        
        cout<<arr[i]<<endl;
        
    }
    
    
}



int main() {
    
  int arr[]={2,10,8,7};
  
  insertionsort(arr,4);

    return 0;
}
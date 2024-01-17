#include <iostream>

//In this method sorting of elements is done through swapping consecutive elements by comparing the max
// and until we sort all the positions in the array


using namespace std;

void bubblesort(int arr[],int l){
    
    bool swapped = false; // defining so that it will be easy to sort to sort a almost sorted array
for(int k=0;k<l;k++)  {  
    
    int i;
    
    for(i=0;i<l-k-1;i++){  // l-k-1 because for every iteration one element is getting sorted from the end
    
    int temp;
  if(max(arr[i],arr[i+1])==arr[i]){  //or arr[i+1]>arr[i]
      
      temp=arr[i+1];
      
      arr[i+1]=arr[i];
      arr[i]=temp;
     swapped=true; 
  }
   }   
if(swapped=false){


break;

}} 
    
    for(int i=0;i<l;i++){
        
        cout<<arr[i]<<endl;
        
    }
    
    
}



int main() {
    
  int arr[]={2,10,8,7};
  
  bubblesort(arr,4);

    return 0;
}
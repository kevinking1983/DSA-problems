#include <iostream>
using namespace std;

//for every cycle of the k loop array gets sorted from one by one from the 0th index
//Here we take the least no. in the unsorted part after each cycle and place it in the kth position


//takes less memory writes compared to quick,merge and insertion
//gives basic idea for heap sort
// not stable
// in place algorithm - doesn't take extra memory when runned

void selectionsort(int arr[],int l){
    
for(int k=0;k<l;k++)  {  
    
    int i;
    
    int min=k;
    
    for(i=k;i<l;i++){
    
    
  
  if(arr[min]>arr[i]){
      
      min=i;
      
  }
   }
  int temp=arr[k];
      
      arr[k]=arr[min];
      arr[min]=temp;

} 
    
    for(int i=0;i<l;i++){
        
        cout<<arr[i]<<endl;
        
    }
    
    
}



int main() {
    
  int arr[]={2,10,8,7};
  
  selectionsort(arr,4);

    return 0;
}
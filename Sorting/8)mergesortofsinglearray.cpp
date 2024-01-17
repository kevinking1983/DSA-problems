#include <iostream>
using namespace std;

/*We are assuming a middle element and dividing the array into 2 parts
after this we are use the logic of the previous question to solve

mid value is the index where we divide a array into 2 sorted sub arrays

we also can use arr[] instead of c[] do decrease the no. of 
arrays
*/




void mergesort(int arr[],int low,int mid,int high){
    
     int c[100];
  
  int left[100];
  int right[100];
  
  int i=0,j=mid+1;
  
  for(i=0;i<=mid;i++){
      
      left[i]=arr[i];
      
      
  }
  for(j=mid+1;j<=high;j++){
      
      right[j-mid-1]=arr[j];
      
      
  }
  
  i=0;
  j=0;
  
while(i<=mid && j<=high-mid){
    
    if(left[i]>right[j]){        // if we run through an example we                      can understand the logic
        
      c[i+j]=right[j];   
    j++;
    }
    else if(left[i]<right[j]){
        
     
        c[i+j]=left[i];
        i++;
    }
   
}
       while(i<=mid){
           
           
           c[i+j]=left[i];
           i++;
       }
       while(j<=high-mid){
           
           
           c[i+j]=right[j];
           j++;
       }
    
    for(int i=0;i<=high;i++){
        
        cout<<c[i]<<endl;
        
    }
    
    
    
}


int main() {
    
 int arr[]={10,15,20,40,8,11,55};   
    
    mergesort(arr,0,3,6);
    
    
    return 0;
}
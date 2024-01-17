#include <iostream>
using namespace std;

// an element is choose and is sorted with all elments lesser than it to the left and all
// elements greater than it to the right


void partition(int arr[],int l,int s){

int count =0;
 
int c[100]; 
    
for(int i=0;i<l;i++) {
    
    if(arr[s]>arr[i]){
        
        count++;
        
    }
  
}

int i=0;
int k=0;
c[count]=arr[s];

while(i<l){
   
   if(arr[i]<arr[s]){
       
       c[k]=arr[i];
       k++;
   } 
  if(arr[i]>arr[s]) { 
    
    ++count;
    c[count]=arr[i];
    
      
  }
i++;}

 for(int i=0;i<l;i++){
        
        cout<<c[i]<<endl;
        
    }



}





int main() {
    
 int arr[]={10,15,20,40,8,11,55};   
    
    partition(arr,7,1);
    
    
    return 0;
}
#include <iostream>
using namespace std;

void leaders(int arr[],int n){
 
  for(int i=0;i<n;i++){
      
      bool l=false;
      
      for(int j=i;j<n;j++){
          
          if(arr[i]>arr[j]){
              
               l=true;
              }
              
              else{
                  
                  break;
                  }
                   }
        if(l==true){
            
            cout<<arr[i];
            }  
          
      }
      }
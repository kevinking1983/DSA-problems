#include <iostream>
using namespace std;


int maxsum(int arr[],int n){
 
 int flagg;
 int flag[100];
int res=0;
int l=0;
int maxending=arr[0];

    for(int i=0;i<n;i++){
        
        if(arr[i]%2 == 0){
            
            flag[i]=0;
        }
        else{
            
            flag[i]=1;
        }
    
    }
      
      for(int i=1;i<n;i++){
          
          if(flag[i]==flag[i-1]){
              
            l=0; 
              
              }
          else if(flag[i]!=flag[i-1]){
              
              if(l==0){
                  l=2;
              }
              else{++l;}
               }
      res=max(res,l);
          
      }
      return res;
}

int main(){

int arr[5]={10,12,14,7,8};
int k=maxsum(arr,5);
cout<<k;
return 0;
}
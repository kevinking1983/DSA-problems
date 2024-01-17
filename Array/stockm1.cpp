#include <iostream>
using namespace std;

int stock(int arr[],int start,int end){
 
int profit=0;

 if(end<=start){
        
        return 0;
    }

for(int i=start;i<end;i++){
    
   
    
    
    for(int j=i+1;j<=end;j++){
        
        if(arr[i]<arr[j]){
            
       int curr_profit=arr[j]-arr[i]+
       stock(arr,start,i-1);+stock(arr,j+1,end);
           profit=max(profit,curr_profit); //checks each and every high low case and sees if there is loss or profit and updates 
            
        }
        
    }
    
    
       }       
        return profit;   }

int main(){

int arr[6]={1,5,3,1,2,8};
int k=stock(arr,0,6);
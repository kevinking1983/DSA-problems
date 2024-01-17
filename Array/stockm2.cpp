//Here we add every continous low point and high point and sum up the profits


#include <iostream>
using namespace std;

int stock(int arr[],int n){
 
int profit=0;

for(int i=1;i<n;i++){
    
    //continous and greater
    if(arr[i]>arr[i-1]){
    
    profit=profit+(arr[i]-arr[i-1]);
    
}
}
        return profit;   }

int main(){

int arr[6]={1,5,3,1,2,8};
int k=stock(arr,6);
cout<<k;
return 0;
}
#include <iostream>
using namespace std;

/*A logic to write effecient solution is for getting all the circular cases as of in om method is:

1. invert the sign all elements in the array
2.determine the sum of the array before inverting(arr_sum)
3.After that pass the inverted array into maxsumsubarrm2.cpp code(kadane method)[normalmaxsum(invertedarr,n)]
4.them the maxsum of sub array in circular cases is equal to 
[max_circular= arr_sum+normalmaxsum(invertedarr,n)]
5. max(max_circular,max_normal)
*/



int maxsum(int arr[],int n){
 
 
int res1=0;
int res2=0;
int sum=0;
int suma=0;

//normal max subarray
for(int i=0;i<n;i++){
    
    int curr=0;
  for(int j=i;j<n;j++){
    
    curr=curr+arr[j];
    res1=max(res1,curr); //updation of maxes after each pattern/case                                                 checking 
    }

//circular cases
    int suma=0;
for(int j=i+1;j<n;j++){
        
        suma=suma+arr[j];
        
    }
 
  int sum=0;
  for(int j=0;j<i;j++) {
      
      sum=sum+arr[j];
     int totalsum=sum+suma;
      res2=max(res2,totalsum);
      
  } 
}
  int res=max(res1,res2);
return res;}

int main(){

int arr[6]={3,-4,5,6,-8,7};
int k=maxsum(arr,6);
cout<<k;
return 0;
}
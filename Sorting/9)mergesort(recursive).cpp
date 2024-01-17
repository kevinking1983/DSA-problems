#include <iostream>
using namespace std;

//when a fully unsorted array is given

/* here the the whole array is divided into two parts then on the left and the right 

 The left and the right arrays are divided recursively until only sub array of each element remains

As merge sort needs 2 sub arrays which are sorted to merge and sort we divide both sides until we get single
element subarrays of each index(single element arrays are sorted so merge sort condition is satisfied )
 then we start merging from bottom to top recursively
 
 division takes place by cutting arrays in halves recursively
 


*/
void mergesort(int arr[],int low,int high){

if(high>low){
int m= low+(high-low)/2; // updation for mid element

mergesort(arr,low,m);     // cutting all the left pieces
mergesort(arr,m+1,high); // cutting all the right pieces
merge(arr,low,m,high);   //merging all the left and right pieces starting from the bottom

}
}

int main() {
    
 int arr[]={10,15,20,40,8,11,55};   
    
    mergesort(arr,0,6);
    
    
    return 0;
}
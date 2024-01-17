#include <iostream>
#include <algorithm>

using namespace std;

int main() {

int arr[]={10,20,5,7};

sort(arr,arr+4); // sorting in  Increasing order

for(int x: arr){
    
    cout<<x<<" ";
    
}
                //(a type of sorting)
 sort(arr,arr+4, greater<int>());//sorting in decreasing order

cout<<endl;

//loop for array
for(int x: arr){
    
    cout<<x<<" ";
    
}
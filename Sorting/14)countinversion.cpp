//Here we count all the pairs where the following condition is satisfied
// a[i]>a[j] j>i
// check method2 later it uses the merging function but res=res+(l-i) at the end res is the result


#include <iostream>
using namespace std;

void countinversion(int arr[],int l){
    
for(int i=0;i<l;i++){
    
    for(int j=i+1;j<l;j++){
        
        if(arr[i]>arr[j]){
            
            cout<<arr[i]<<","<<arr[j]<<endl;
            
        }
        
    }
    
}    

    
}

int main() {
    
 int arr[]={10,15,20,40,8,11,55};   
    
    countinversion(arr,7);
    
    
    return 0;
}
#include <iostream>
using namespace std;

/*

both are sorted arrays

*/




void commonelements(int a[],int b[],int l,int m){
    
    
    
int i=0,j=0;
    
    while(i<l || j<m){
    
    if(i>0 && a[i]==a[i-1]){
        
        i++;
        continue;
        
    }
    
    
    if(a[i]>b[j]){        // if we run through an example we can understand the logic
        
    j++;
    }
    else if(a[i]<b[j]){
        
        i++;
    }
   else{
       
       cout<<a[i]<<endl;
       
       i++;
       j++;
       
   }
    
}
} 


int main() {
    
  int a[]={10,20,35};
  int b[]={35,50,70,90};
  
  commonelements(a,b,3,4);

    return 0;
}
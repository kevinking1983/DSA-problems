#include <iostream>
using namespace std;

//a and b are sorted arrays

void mergesort(int a[],int b[],int l,int m){
    
    int c[100];
  
  int i=0,j=0;
  
while(i<l || j<m){
    
    if(a[i]>b[j]){        // if we run through an example we can understand the logic
        
      c[i+j]=b[j];   
    j++;
    }
    else if(a[i]<b[j]){
        
     
        c[i+j]=a[i];
        i++;
    }
   
}
       while(i<l){
           
           ++i;
           c[i+j]=a[i];
           
       }
       while(j<m){
           
           ++j;
           c[i+j]=b[j];
           
       }
    
    for(int i=0;i<l+m;i++){
        
        cout<<c[i]<<endl;
        
    }
    
    
}



int main() {
    
  int a[]={10,20,35};
  int b[]={5,50,70,90};
  
  mergesort(a,b,3,4);

    return 0;
}
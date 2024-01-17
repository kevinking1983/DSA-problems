#include <iostream>
using namespace std;

/*

both are sorted arrays

*/




void unionofarray(int a[],int b[],int l,int m){
    
    int c[100];
   int count=0;

int i=0,j=0;
    
    while(i<l || j<m){
    
    if(i>0 && a[i]==a[i-1]){
       
       count++; 
        i++;
        continue;
        
    }  
    if(j>0 && b[j]==b[j-1]){
        
        count++;
        j++;
        continue;
        
    }
    
    
   if(a[i]>b[j]){        // if we run through an example we can understand the logic
        
      c[i+j-count]=b[j];   
    j++;
    }
    else if(a[i]<b[j]){
        
     
        c[i+j-count]=a[i];
        i++;
    }
   else{
       
       
       c[i+j-count]=a[i];
       count++;
       i++;
       j++;
       
   }
    
}
while(i<l){
           
           ++i;
           c[i+j-count]=a[i];
           
       }
       while(j<m){
           
           ++j;
           c[i+j-count]=b[j];
           
       }
    
    for(int i=0;i<l+m-count;i++){
        
        cout<<c[i]<<endl;
        
    }
    
} 


int main() {
    
  int a[]={10,20,35};
  int b[]={35,50,70,90};
  
  unionofarray(a,b,3,4);

    return 0;
}
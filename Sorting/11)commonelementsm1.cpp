#include <iostream>
using namespace std;

/*

both are sorted arrays

*/




void commonelements(int a[],int b[],int l,int m){
    
    int c[100];
    int count=0;
    
    for(int i=0;i<l;i++){
        
        
        for(int j=0;j<m;j++){
            
            
           if(a[i]==a[i-1]){
               
               break;
           }
           if(b[j]==b[j-1]){
               
               continue;
               
           }
            if(a[i]==b[j]){
                
                cout<<a[i];
            }
            
            
        }
        
        
        
    }
    
    

    
    
   
    
}
    


int main() {
    
  int a[]={10,20,35};
  int b[]={35,50,70,90};
  
  commonelements(a,b,3,4);

    return 0;
}
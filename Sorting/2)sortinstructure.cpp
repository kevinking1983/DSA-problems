#include <iostream>
#include <algorithm>

using namespace std;

 struct point{
     
     int x,y;
 };
 bool mycmp(point p1,point p2){
     
     return (p1.x<p2.x);
 }

int main() {


 //custom sort(here custom sort is decreasing order of x)
 
 point arr[]={{3,10},{2,8},{5,4}};
 
 sort(arr,arr+4, mycmp);//sorting in custom sort mycmp


//loop for array
for(auto i: arr){
    
    cout<<i.x<<" "<<i.y;
    
}



    return 0;
}
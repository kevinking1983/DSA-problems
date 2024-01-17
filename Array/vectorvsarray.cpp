#include <iostream>
using namespace std;
int main() {
  
  /*  Advantages of vector
  
  1. Dynamic Size (Auto resizing)
  2.Rich library function
  3. Easy to know size
  4. No need to pass size
  5. Can be returned from a function
  6. By default intialized with by default values
  7. We can copy a vector(v1 = v2)
  */
  
  /*
  =>for size in an array
  int n = sizeof(arr)/sizeof(arr[0])
    
  =>for size in a vector
   int n = v.size()
   */

   /*
   
  => while passing parameter to a function 
  
  In array
  func(int arr, int n){} -- [n is size ], size needs to passed
  
In Vector
func(vector<int>v){} -- no size needs to be passed

=> while returning

return arr -- not possible
(int *arr = new int[100] here return arr is possible)
return v -- possible  */

    return 0;
}
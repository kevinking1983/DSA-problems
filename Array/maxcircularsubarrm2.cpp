/*A logic to write effecient solution is for getting all the circular cases as of in om method is:

1. invert the sign all elements in the array
2.determine the sum of the array before inverting(arr_sum)
3.After that pass the inverted array into maxsumsubarrm2.cpp code(kadane method)[normalmaxsum(invertedarr,n)]
4.them the maxsum of sub array in circular cases is equal to 
[max_circular= arr_sum+normalmaxsum(invertedarr,n)]
5. max(max_circular,max_normal)
*/
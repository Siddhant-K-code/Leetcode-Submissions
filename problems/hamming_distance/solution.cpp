class Solution {
public:
    int hammingDistance(int n1, int n2){
    int x = n1 ^ n2; 
    int bits = 0; 
  
    while (x > 0) { 
       x=x&(x-1);
        bits++;
    } 
  
    return bits; 

}
};
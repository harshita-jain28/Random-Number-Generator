#include <bits/stdc++.h>  
using namespace std;  
void LCM_method(int Xo, int m, int a, int c, vector<int>& nums,int noOfnums){ 
    nums[0] = Xo;  
    for (int i = 1; i < noOfnums; i++) {  
        nums[i] = ((nums[i - 1] * a) + c) % m;  
    }  
}  
int main()  
{  
    int Xo = 17;  
    int m = 21;
    int a = 11;   
    int c = 11;   
    int noOfnums = 8;    
    vector<int> nums(noOfnums);  
    LCM_method( Xo, m, a, c,nums,noOfnums); 
    for (int i = 0; i < noOfnums; i++) {  
        cout << nums[i] << " ";  
    }  
  
    return 0;  
}  

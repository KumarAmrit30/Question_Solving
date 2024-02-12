#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        if(n%2!=0){
            return false;
        }
        return isPowerOfTwo(n/2);
    }
};
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A;
        cin >> A;
        Solution ob;
       	cout <<  ob.isPowerOfTwo(A) << "\n";
    }
    return 0;
}
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        while(n%2==0) {
			n /= 2;
		}
		while(n%3==0) {
			n /= 3;
		}
		while(n%5==0) {
			n /= 5;
		}
		
		return (n==1);  
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isUgly(N) << endl;
    }
    return 0; 
}
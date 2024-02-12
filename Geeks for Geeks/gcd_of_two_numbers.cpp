#include <bits/stdc++.h>
using namespace std;
class Solution
{
	public:
    int gcd(int A, int B){
        int n,g;
        if(A>B) n=B;
        else n=A;
        for(int i=1;i<=n;i++){
            if(A%i==0 && B%i==0){
                g=i;
            }
        }
        return g;
    }
};
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
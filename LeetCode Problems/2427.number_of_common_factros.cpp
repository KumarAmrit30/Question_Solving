#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int commonFactors(int a, int b) {
        int small;
        if(a>b) small=b;
        else small=a;
        int cnt=0;
        for(int i=1;i<=small;i++){
            if(b%i==0){
                if(a%i==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        Solution ob;
        cout << ob.commonFactors(a,b) << endl;
    }
    return 0; 
}
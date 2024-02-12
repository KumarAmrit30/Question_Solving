#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int sumOfDigits(int N){
        int sum=0;
        while(N!=0){
            sum+=N%10;
            N/=10;
        }
        cout<<sum;
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
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
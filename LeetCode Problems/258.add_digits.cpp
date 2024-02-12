#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        if(num>=0 && num<=9){
        return num;
        }
        int sum=0;
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
        return addDigits(sum);
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
        cout << ob.addDigits(N) << endl;
    }
    return 0; 
}
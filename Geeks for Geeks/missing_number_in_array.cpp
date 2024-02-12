//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // int missing_num=0;
        // sort(array.begin(),array.end());
        // for(int i=0;i<=n;i++){
        //     bool flag=false;
        //     for(int j : array){
        //         if(j==i){
        //             flag=true;
        //             break;
        //         }
        //     }
        //     if(!flag){
        //         missing_num=i;
        //         break;
        //     }
        // }
        // return missing_num;
        int expected_sum=(n*(n+1))/2;
        int actual_sum=0;
        for(int i : array){
            actual_sum+=i;
        }
        return (int) (expected_sum-actual_sum);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
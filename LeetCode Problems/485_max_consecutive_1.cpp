#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int n=nums.size();
            int cur=0;
            int max_occ=0;
            for(int i : nums){ //Time complexity will be o(n)
                if(i==1){
                    cur++;
                    if(cur>max_occ) max_occ=cur;
                }
                if (i==0) cur=0;
            }
            return max(cur,max_occ);
        }
};
int main(){
    vector <int> arr={1,1,0,1,1,1};
    Solution s1;
    cout<<s1.findMaxConsecutiveOnes(arr)<<endl;
    return 0;
}
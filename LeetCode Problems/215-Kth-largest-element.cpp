#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int len=nums.size();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i]>nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        return nums[k-1];
    }
};
int main(){
    Solution s1;
    s1.findKthLargest();
    return 0;
}
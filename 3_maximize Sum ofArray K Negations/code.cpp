#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        for(int i=0;i<k;i++){
            sort(nums.begin(),nums.end());
            nums[0]=-nums[0];
        }
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        return sum;
    }
        
};
int main() {
    Solution sol;
    vector<int> nums = {4, 2, 3};
    int k = 1;
    cout << sol.largestSumAfterKNegations(nums, k) << endl; // Output: 5
    return 0;
}
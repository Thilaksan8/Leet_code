#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>preproduct(n),subproduct(n);
        preproduct[0]=1;
        for(int i=1;i<n;i++){
            preproduct[i]=nums[i-1]*preproduct[i-1];
            
        }
        subproduct[n-1]=1;
        for(int i=n-2;i>=0;i--){
            subproduct[i]=nums[i+1]*subproduct[i+1];
        }
        for(int i=0;i<n;i++){
            nums[i]=subproduct[i]*preproduct[i];
        }
        return nums;
    }
};
int main() {
    Solution s;
    vector<int>nums={1,2,3,4};
    vector<int>ans=s.productExceptSelf(nums);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
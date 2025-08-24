#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>arr;
        int n=nums.size();
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end(),[](auto &a, auto &b){
            if(a.first==b.first) return a.second<b.second;
            return a.first>b.first;
        });
        vector<pair<int,int>> chosen(arr.begin(),arr.begin()+k);
        sort(chosen.begin(),chosen.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });
        vector<int>final;
        for(auto i: chosen){
            final.push_back(i.first);
        }

        
    
        return final;
        
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,5,2,6};
    int k = 2;
    vector<int> result = sol.maxSubsequence(nums, k);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl; // Example usage
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bitcount(int n){
        int count=0;
        while(n>0){
            n=n&(n-1);
            count++;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>>nums;
        for(int i=0;i<n;i++){
            int count=bitcount(arr[i]);
            nums.push_back({arr[i],count});
        }
        sort(nums.begin(),nums.end(),[](auto &a,auto &b){
            if(a.second==b.second) return a.first<b.first;
            return a.second<b.second;
        });
        vector<int>final;
        for(auto i:nums){
            final.push_back(i.first);
        }
        return final;
        
    }
};
int main() {
    Solution sol;
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    vector<int> sortedArr = sol.sortByBits(arr);
    for (int num : sortedArr) {
        cout << num << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumDifference(vector<int>& nums) {
        int m=nums.size();
        int n=m/3;
        long long sum=0;
        vector<long long> left(m,0),right(m,0);
        priority_queue<int>maxheap;
        for(int i=0;i<2*n;i++){
            sum+=nums[i];
            maxheap.push(nums[i]);
            if(maxheap.size()>n){
                sum-=maxheap.top();
                maxheap.pop();
            }
            if(maxheap.size()==n) left[i]=sum;
        }
        sum=0;
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(int i=m-1;i>n-1;i--){
            sum+=nums[i];
            minheap.push(nums[i]);
            if(minheap.size()>n){
                sum-=minheap.top();
                minheap.pop();
            }
            if(minheap.size()==n) right[i]=sum;
            
        }
        long long final=LLONG_MAX;
        for(int i=n-1;i<2*n;i++){
            final=min(final,left[i]-right[i+1]);
        }
        return final;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,3,5,2,4,6};
    cout << sol.minimumDifference(nums) << endl; // Example usage
    return 0;
}
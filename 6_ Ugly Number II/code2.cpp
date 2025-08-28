#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>arr(n);
        arr[0]=1;
        int p1=0;
        int p2=0;
        int p3=0;
        for(int i=1;i<n;i++){
            int second=arr[p1]*2;
            int third=arr[p2]*3;
            int fifth=arr[p3]*5;

            arr[i]=min(second,min(third,fifth));
            if(arr[i]==second) p1++;
            if(arr[i]==third) p2++;
            if(arr[i]==fifth) p3++;
        }
        return arr[n-1];
        
    }
};
int main(){
    Solution s;
    int b;
    cout<<"Enter number:";
    cin>>b;
    cout<<s.nthUglyNumber(b);
    return 0;
}   
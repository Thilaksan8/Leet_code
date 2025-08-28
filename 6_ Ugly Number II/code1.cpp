#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:
    int maxdivision(int a,int b){
        while(a%b==0)
            a=a/b;
        return a;
    }
    int isugly(int val){
        val=maxdivision(val,2);
        val=maxdivision(val,3);
        val=maxdivision(val,5);
        return (val==1) ? 1:0;
    }
    int nthUglyNumber(int n) {
        int i=1;
        int count=1;
        while(n>count){
            i++;
            if (isugly(i)){
                count++;
            }
        }
        return i;
        
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.nthUglyNumber(n);
    return 0;
}

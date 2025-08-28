class Solution(object):
    def isUgly(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if(n<1):
            return False
        for i in [2,3,5]:
            while(n%i==0):
                n/=i
        return n==1
if __name__=="__main__":
    n=int(input("Enter numner:"))
    Solution_obj=Solution()
    print(Solution_obj.isUgly(n))
class Solution(object):
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        arr=[0]*n
        arr[0]=1
        p1=p2=p3=0
        for i in range(1,n):
            second=arr[p1]*2
            third=arr[p2]*3
            fifth=arr[p3]*5
            arr[i]=min(second,min(third,fifth))
            if(arr[i]==second):
                p1+=1
            if(arr[i]==third):
                p2+=1
            if(arr[i]==fifth):
                p3+=1
        return arr[n-1]            
if __name__=="__main__":
    n=int(input("Enter number:"))       
    Solution_obj=Solution()
    print(Solution_obj.nthUglyNumber(n))
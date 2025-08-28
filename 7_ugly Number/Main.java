class Solution {
    public boolean isUgly(int n) {
        if (n<=0)
            return false;
        while(n!=1){
            if(n%2==0) n/=2;
            else if(n%3==0) n/=3;
            else if(n%5==0) n/=5;
            else return false;;
        }
        return n==1;

    }
}
public class Main{
    public static void mian(String args[]){
        Solution s= new Solution();
        java.util.Scanner sc= new java.util.Scanner(System.in);
        System.out.println("Enter number:");
        int n=sc.nextInt();
        System.out.println(s.isUgly(n));
        sc.close();


    }
}
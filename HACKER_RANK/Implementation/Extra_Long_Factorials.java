import java.util.*;
import java.math.*;
public class Solution {

    public static void main(String[] args) {
        Scanner surya = new Scanner(System.in);
        BigInteger ans = BigInteger.valueOf(1);
        int n = surya.nextInt();
        for(int i=1;i<=n;i++){
        	BigInteger j = BigInteger.valueOf(i);
        	ans=ans.multiply(j);
        }
        surya.close();
        System.out.println(ans);
    }
}

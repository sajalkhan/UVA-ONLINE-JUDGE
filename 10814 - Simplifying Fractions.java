
import java.util.*;
import java.math.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
       while(n-->0)
       {
           String c;
           BigInteger a,b,gcd;
          a=in.nextBigInteger();
          c=in.next();
          b=in.nextBigInteger();
          gcd=a.gcd(b);
          System.out.println(a.divide(gcd)+" / "+b.divide(gcd));
       }
    }
}

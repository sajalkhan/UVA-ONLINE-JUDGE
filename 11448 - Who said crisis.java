/*--------------------------------------
	AUTHOR  : SAJAL KHAN
	PROBLEM : 11448 - Who said crisis?
---------------------------------------*/
import java.util.*;
import java.math.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
       long n=in.nextInt();
       BigInteger a,b;
       for(long i=0;i<n;i++)
       {
           a=in.nextBigInteger();
           b=in.nextBigInteger();
           System.out.println(a.subtract(b));
       }
    }
}

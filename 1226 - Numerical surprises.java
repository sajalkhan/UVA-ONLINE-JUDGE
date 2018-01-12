
import java.util.*;
import java.math.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while(n-->0)
        {
            BigInteger a,b;
            a=in.nextBigInteger();
            b=in.nextBigInteger();
            System.out.println(b.mod(a));
        }
    }
}

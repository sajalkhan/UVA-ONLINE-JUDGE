
import java.util.*;
import java.math.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        while(in.hasNext())
        {
            int a,b;
            BigInteger ans,value,p;
            ans = new BigInteger("0");
            a=in.nextInt();
            b=in.nextInt();
            for(int i=1;i<=a;i++)
            {      value = BigInteger.valueOf(i);
                    p = value.multiply(BigInteger.valueOf(b).pow(i));
                   ans = ans.add(p);
            }
            System.out.println(ans);
        }
    }
}

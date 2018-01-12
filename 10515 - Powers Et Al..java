/*-------------------------------------
	AUTHOR : SAJAL KHAN
	PROBLEM: UVA 10515 - Powers Et Al.
--------------------------------------*/
import java.util.*;
import java.math.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        BigInteger a,b,c;
        while(true){
            c = new BigInteger("0");
            a=in.nextBigInteger();
            b=in.nextBigInteger();
            int cmp1=a.compareTo(c);
            int cmp2=b.compareTo(c);
            if(cmp1==0 && cmp2==0)break;
          System.out.println(a.modPow(b, new BigInteger("10")));
        }
    }
}

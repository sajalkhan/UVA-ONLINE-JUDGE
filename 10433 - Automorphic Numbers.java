
import java.util.*;
import java.math.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        BigInteger z=new BigInteger("0");
        BigInteger o=new BigInteger("1");
        while(in.hasNext())
        {
            String s1,s2;
            BigInteger num;
            s1=in.next();
            num=new BigInteger(s1);
            num=num.pow(2);
            s2=num.toString();
            int ln=s1.length();
            if(s2.endsWith(s1) && num.compareTo(o)!=0 && num.compareTo(z)!=0)System.out.println("Automorphic number of "+ln+"-digit.");
            else System.out.println("Not an Automorphic number.");
        }
    }
}

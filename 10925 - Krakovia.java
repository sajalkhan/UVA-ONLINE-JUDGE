import java.util.*;
import java.math.*;
import java.io.*;

public class Main{

    public static void main(String[] args ) throws IOException{
        Scanner in = new Scanner(System.in);
        BigInteger a, b, y;
        int test = 1;
        while (true) {
            b = new BigInteger("0");
            int x = in.nextInt();
            y = in.nextBigInteger();
            int cmp = y.compareTo(b);
            if (cmp == 0 && x == 0) {
                break;
            }
            for (int i = 0; i < x; i++) {
                a = in.nextBigInteger();
                b = b.add(a);
            }
            System.out.printf("Bill #%d costs ", test++);
            System.out.print(b + ": each friend should pay ");
            System.out.println(b.divide(y));
            System.out.println();
        }
    }
}

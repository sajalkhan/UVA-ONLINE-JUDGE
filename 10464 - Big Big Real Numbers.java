/*-------------------------------------------
	AUTHOR  : SAJAL KHAN
	PROBLEM : 10464 - Big Big Real Numbers
--------------------------------------------*/
import java.util.*;
import java.math.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        BigDecimal a, b, c;
        int t = in.nextInt();
        while (t-- > 0) {
            a = in.nextBigDecimal();
            b = in.nextBigDecimal();
            c = a.add(b);
            String s = c.toString();
            int ln = s.length(), count = 0, zero = 0;
            for (int i = 0; i < ln; i++) {
                if (s.charAt(i) != '.') {
                    System.out.print(s.charAt(i));
                } else {
                    zero = i;
                    System.out.print(".");
                    break;
                }
            }
            int z = 0, one = 0;
            for (int i = zero + 1; i < ln; i++) {
                if (s.charAt(i) == '0' && z == 0) {
                    z = i;
                }
                if (s.charAt(i) != '0') {
                    z = 0;
                    one = i;
                }
            }
            if (z == zero + 1 && one == 0) {
                System.out.print("0");
            } else if (z == 0 && one == ln - 1) {
                for (int i = zero + 1; i <= one; i++) {
                    System.out.print(s.charAt(i));
                }
            } else {
                for (int i = zero + 1; i < z; i++) {
                    System.out.print(s.charAt(i));
                }
            }
            System.out.println("");
        }
    }
}

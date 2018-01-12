
import java.util.*;
import java.math.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int num;
        String result;
        BigDecimal n;
        while(in.hasNext())
        {
               n = in.nextBigDecimal();
               num=in.nextInt();
               n=n.pow(num).stripTrailingZeros();
               result=n.toPlainString();
               int index;
               for(index=0;;index++)if(result.charAt(index)!='0')break;
               System.out.println(result.substring(index));
        }
    }
}

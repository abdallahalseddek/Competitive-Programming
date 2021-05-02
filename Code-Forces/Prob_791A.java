import java.util.Scanner;
 
public class Prob_791A {
 
    public static void main(String[] args) {
        Scanner input =  new Scanner(System.in);
        int a =input.nextInt();
        int b = input.nextInt();
        int c=0;
        int w1=0;
        int w2=0;
        w1 = 3*a;
        w2 = 2*b;
        c++;
        while (w1<=w2){
           w1=3 * w1;
           w2 = 2*w2;
           c++;
        }
        System.out.println(c);
    }
}
 
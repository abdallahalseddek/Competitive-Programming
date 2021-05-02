import java.util.Scanner;
 
public class Prob_677A {
 
    public static void main(String[] args) {
        Scanner input =  new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int c=0;
        for (int i=0; i<n; i++){
            int l =input.nextInt();
            if (l<=k){c++;}
            else {c+=2;}
        }
        System.out.println(c);
    }
}
 
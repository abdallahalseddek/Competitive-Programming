import java.util.Scanner;

public class Prob_231A {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            if (a + b + c >= 2) {
                count++;
            }

        }
        System.out.println(count);
    }
}
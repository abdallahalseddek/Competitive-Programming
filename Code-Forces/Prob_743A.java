import java.util.Scanner;

public class Prob_743A {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
        int a = 0;
        int d = 0;
        char arr[] = s.toCharArray();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 'A') {
                a++;
            } else {
                d++;
            }
        }
        if (a > d) {
            System.out.println("Anton");
        } else if (a < d) {
            System.out.println("Danik");
        } else if (a == d) {
            System.out.println("Friendship");
        }
    }
}
 
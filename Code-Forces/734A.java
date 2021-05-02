

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long an = 0;
        long da = 0;
        String s = input.next();
        char[] sc = s.toCharArray();
        for (int i = 0; i < n; i++) {
            if (sc[i] == 'A') {
                an++;
            } else {
                da++;
            }
        }
        if (an > da)
            System.out.println("Anton");
        else if (da > an)
            System.out.println("Danik");
        else if (da == an)
            System.out.println("Friendship");
    }
}


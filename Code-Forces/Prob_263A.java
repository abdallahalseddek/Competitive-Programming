import java.util.Scanner;
public class Prob_263A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x;
        for (int i = 1; i <=5; i++)
        {
            for (int j = 1 ; j<=5; j++)
            {
                x =input.nextInt();
                if(x==1)
                {
                    System.out.println(Math.abs(i - 3) + Math.abs(j - 3));
                    break;
                }
            }
 
        }
        return;
    }
}
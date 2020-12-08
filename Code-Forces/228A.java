import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count=0 ;
        int num = input.nextInt();
        String stone = input.next();
        char[] st = stone.toCharArray();
        for(int i =0 ; i<num-1; i++){
            if (st[i]==st[i+1]) count++;
            }
        System.out.println(count);
        }
}
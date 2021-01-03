import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int small=0, index=0;
        int arr [] = new int[n];
        for (int i=0; i<n;i++){
            arr[i] = input.nextInt();
            if (arr[i]<small){
                small = arr[i];index=i;}
        }
        System.out.println("Menor valor: " + small);
        System.out.println("Posicao: " + index);
    }
}


import java.util.Scanner;

public class Main {
    public static void main(String [] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for (int i = 0; i < t; ++i) {
            int n, m;
            n = s.nextInt();
            m = s.nextInt();
            System.out.println((n/3)*(m/3));
        }
    }
}

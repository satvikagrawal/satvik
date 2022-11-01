import java.util.*;

public class fuk {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size of array");
        int size = sc.nextInt();
        int num[] = new int[size];
        System.out.println("enter the numbers");
        for (int i = 0; i < size; i++) {
            num[i] = sc.nextInt();
        }
        System.out.println("numberr to be found");
        int x = sc.nextInt();
        System.out.println("index is");
        for (int i = 0; i < num.length; i++) {
            if (num[i] == x)
                System.out.println("number found at index" + i);

        }

    }
}

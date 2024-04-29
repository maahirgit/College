import java.util.Arrays;
import java.util.Scanner;

public class TestApp18 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        char[] charArray = input.toCharArray();
        Arrays.sort(charArray);

        String sortedString = new String(charArray);

        System.out.println("String in alphabetical order: " + sortedString);
        
        
    }
}

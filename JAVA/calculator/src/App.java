import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("___________Welcome To My Calculator___________\n\n");

            System.out.println("Enter the operation (/,*,-,+): ");
            String operation = scanner.next();

            System.out.println("Enter the first number: ");
            double num1 = scanner.nextDouble();

            System.out.println("Enter the second number: ");
            double num2 = scanner.nextDouble();

            System.out.println("The requested action is: "+ num1+operation+num2+"\n"
            +"Press y to confirm");

            String confirm = scanner.next();

            double result;

            if (confirm.equals("y")) {
                switch (operation) {
                    case "/":
                        result = num1/num2;
                        break;
                    case "*":
                        result = num1*num2;
                        break; 
                    case "-":
                        result = num1-num2;
                        break; 
                    case "+":
                        result = num1+num2;
                        break;      
                
                    default:
                        result = 0;
                        break;
                }

                System.out.println("The result of: "+ num1+operation+num2+ " is "+ result);
                System.out.println("Bye...................");
            }else{
                System.out.println("see you again later");
                System.exit(-1);
            }
        }
    }
}

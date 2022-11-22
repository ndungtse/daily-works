
public class Switch {
    public static void main(String[] args) {
        String speech ;
        // char grade = 'A';
        // if(grade == 'A') {
        //     speech = "Excellent";
        // } else if(grade == 'B') {
        //     speech = "Good";
        // } else if(grade == 'C') {
        //     speech = "Just so so";
        // } else {
        //     speech = "You need to work hard";
        // }
        System.out.println("Ener a speech: ");
        Scanner scanner = new Scanner(System.in);
        speech = scanner.nextLine();
        switch (speech) {
            case "RCA":
                System.out.println("RCA");
                break;
            case "RCA2":
                System.out.println("RCA2");
                break;
            default:
                System.out.println("default");
                break;
        }
    }
   String choice;
    public String saySometing() {
        switch (choice) {
            case "RCA":
                return "RCA";
            case "NCA":
                return "NCA";
            case "NCC":
                return "NCC";
            default:
                return "default";
        }
    } 
}

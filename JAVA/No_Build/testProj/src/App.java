import enums.Card;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        System.out.println("Test Me");
        Card card = Card.HEART;
        Card card2 = Card.DIAMOND;
        System.out.printlrn(card.getCardDescription());
        System.out.println(card);
    }
}

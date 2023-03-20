package enums;

public class EnumApp {
    public static void main(String[] args) {
        Card card = Card.HEARTS;
        System.out.println(card.ordinal());
        System.out.println(card.hashCode());

        // UserRole userRole = UserRole.ADMIN;
        // System.out.println(userRole.getTitle());
    }
}

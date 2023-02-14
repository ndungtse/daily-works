package enums;

public enum Card {
    HEART("Heart"), DIAMOND("Diamond"), CLUB("Club"), SPADE("Spade");

    private String cardDescription;
    Card(String cardDescription) {
        this.cardDescription = cardDescription;
    }

    public String getCardDescription() {
        return cardDescription;
    }
}

package collections;

public class HashCodeApp {
    String str;

    public HashCodeApp(String str) {
        this.str = str;
    }

    public int hashCode() {
        return str.hashCode();
    }

    public int calculateHashCode(){
        int hash = 0;
        for (int i = 0; i < str.length(); i++) {
            hash += str.charAt(i);
        }
        return hash;
    }

    public static void main(String[] args) {
        HashCodeApp h1 = new HashCodeApp("Hello");
        HashCodeApp h2 = new HashCodeApp("Hello");
        System.out.println(h1.hashCode());
        System.out.println(h2.calculateHashCode());
    }
}

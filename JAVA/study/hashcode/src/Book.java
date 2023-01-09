public class Book {
    private String title;
    private String author;

    public Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    public boolean equals(Object obj) {

        final Book other = (Book) obj;
        return this.title.equals(other.title) && this.author.equals(other.author);
    }

    public int hashCode() {
        return this.title.hashCode() + this.author.hashCode();
    }

    public String toString() {
        return this.title + " by " + this.author;
    }
}

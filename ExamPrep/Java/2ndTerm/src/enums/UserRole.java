package enums;

public enum UserRole {
    ADMIN("Admin"), USER("User"), GUEST("Guest");

    private String title;
    private String description;

    UserRole(String title) {
        this.title = title;
    }

    UserRole(String title, String description) {
        this.title = title;
        this.description = description;
    }

    public String getTitle() {
        return title;
    }

    public String getDescription() {
        return description;
    }

    public String toString() {
        return title;
    }
   
    public static void main(String[] args) {
        // make userole with title "Admin" and description "Admins can do everything"
        // UserRole userRole = new UserRole("Admin", "Admins can do everything");
    }
}

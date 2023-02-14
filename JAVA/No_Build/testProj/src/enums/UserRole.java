package enums;

public enum UserRole {
    ADMINISTRATOR("Administrator"), EMPLOYEE("Employee"), 
    PROCUREMENT("Procurement officer"),
    NONE("");
    private String roleDescription;
    UserRole(String roleDescription) {
    this.roleDescription = roleDescription; }
    public String getRoleDescription() {
    return roleDescription; } }

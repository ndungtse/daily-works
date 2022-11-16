package rw.database;
import java.sql.*;

public class Employee {
    public static void main(String[] args) throws Exception {
        try {
            String url = "jdbc:mysql://localhost:3306/study";
            String username = "root";
            String password = "chazard10.3";

            String query = "insert into worker(WorkId, Fname, Lname, Salary, Department, Joining_date) values(6, 'John', 'Doe', 5000, 'IT', '2022-09-22')";    
            Class.forName("com.mysql.jdbc.Driver");
            Connection conn = DriverManager.getConnection(url, username, password);

            System.out.println("Connection established");

            Statement st = conn.createStatement();
            st.execute(query);
            System.out.println("Insert Successfully");
            st.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

package rw.database;

import java.sql.*;

public class DatabaseConnecting {
    public static void main(String[] args) throws Exception {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            String url = "jdbc:mysql://localhost:3306/rwanda";
            String username = "root";
            String password = "chazard10.3";
            String query = "select * from villages";
            Connection conn = DriverManager.getConnection(url, username, password);

            System.out.println("Connection established");

            Statement st = conn.createStatement();
            ResultSet rs = st.executeQuery(query);

            String name = rs.getString("villageName");

            System.out.println(name);
            st.close();
            conn.close();
            System.out.println("Connection Claosed...");
        } catch (

        Exception ex) {
            System.out.println(ex);
        }

    }
}

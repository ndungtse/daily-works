package rw.database;

import java.sql.*;

public class DatabaseConnecting {
    public static void main(String[] args) throws Exception {
        try {
            String url = "jdbc:mysql://localhost:3306/rwanda";
            String username = "root";
            String password = "";

            String query = "select * from cells";
            Class.forName("com.mysql.jdbc.Driver");
            Connection conn = DriverManager.getConnection(url, username, password);

            System.out.println("Connection established");

            Statement st = conn.createStatement();
            ResultSet rs = st.executeQuery(query);
//            Array myArray = rs.
            while (rs.next()){
                String name = rs.getString("cellName");
                System.out.println(name);
            }


            st.close();
            conn.close();
            System.out.println("Connection Closed...");
        } catch (

        Exception ex) {
            System.out.println(ex);
        }

    }
}

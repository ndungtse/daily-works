package rw;
import java.text.SimpleDateFormat;
import java.time.Instant;
import java.time.LocalDateTime;
import java.time.ZoneOffset;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) {
        String dateString = "2023-06-06T00:00:00.000Z";
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        
        LocalDateTime dateTime = LocalDateTime.parse(dateString, formatter);
        Instant instant = dateTime.toInstant(ZoneOffset.UTC);
        Date date = Date.from(instant);
        
        System.out.println(date);
    }
}

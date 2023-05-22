package regex.exercise;

import java.util.regex.*;

public class IpRegex {
    public static void main(String[] args) {
        String ip = "192.168.1.10";
        String ip1 = "23.324.234-234";
        // my way
        // String regexPatern = "[0-9]{1,3}[\\.][0-9]{1,3}[\\.][0-9]{1,3}[\\.][0-9]{1,3}";
        // copilot way
        String regexPatern = "^(?:[0-9]{1,3}\\.){3}[0-9]{1,3}$";
        Pattern pattern = Pattern.compile(regexPatern);
        Matcher matcher = pattern.matcher("123.232.3322.232");
        boolean isMatch = matcher.matches();
        System.out.println(isMatch);
    }
}

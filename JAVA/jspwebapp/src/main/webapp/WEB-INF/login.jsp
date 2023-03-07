<%@ page contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
    <title>JSP - Hello World</title>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <script src="https://cdn.tailwindcss.com"></script>
</head>
<body>
<form action="login.php" method="post">
    <table>
        <tr>
            <td align="right"><b>Username</b></td>
            <td align="left"><input type="text" size="25" maxlength="50"
                                    name="username" id="username" /></td>
        </tr>
        <tr>
            <td align="right">Password</td>
            <td align="left"><input type="password" size="25"
                                    maxlength="50" name="password" id="password" /></td>
        </tr>
        <tr>
            <td></td>
            <td></td>
        </tr>
        <tr bgcolor="gray">
            <td align="right">&nbsp;</td>
            <td align="left"><input type="submit" value="Login" /></td>
        </tr>
    </table>
</form>
</body>
</html>
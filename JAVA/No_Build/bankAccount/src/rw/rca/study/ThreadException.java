package rw.rca.study;

public class ThreadException extends Exception {
    public ThreadException(String message) {
        super(message);
    }

    public ThreadException(String message, Throwable cause) {
        super(message, cause);
    }

    @Override
    public String toString() {
        return "ThreadException [getMessage()=" + getMessage() + ", getCause()=" + getCause() + "]";
    }

    @Override
    public String getMessage() {
        return "ThreadException [getMessage()=" + super.getMessage() + ", getCause()=" + getCause() + "]";
    }

    @Override
    public synchronized Throwable getCause() {
        return super.getCause();
    }

    @Override
    public void printStackTrace() {
        super.printStackTrace();
    }
}

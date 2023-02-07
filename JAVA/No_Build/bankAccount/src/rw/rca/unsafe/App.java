package rw.rca.unsafe;


public class App {
    public static void main(String[] args) throws Exception {
        // bank account
        BankAccount account = new BankAccount();
        // deposit runnable
        DepositRunnable d = new DepositRunnable(account, 100, 100);
        // withdraw runnable
        WithDrawRunnable w = new WithDrawRunnable(account, 100, 100);

        // deposit thread
        Thread dt = new Thread(d);
        // withdraw thread
        Thread wt = new Thread(w);

        // start threads
        dt.start();
        wt.start();

        // wait for threads to finish
        dt.join();
        wt.join();

        // print balance
        System.out.println("Balance: " + account.getBalance());
    }
}

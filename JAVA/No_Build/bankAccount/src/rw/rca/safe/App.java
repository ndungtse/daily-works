package rw.rca.safe;

import rw.rca.study.Worker;

public class App {
    public static void main(String[] args) throws Exception {
        // bank account
        BankAccount account = new BankAccount();
        // deposit runnable
        DepositRunnable d = new DepositRunnable(account, 100, 100);
        // withdraw runnable
        WithDrawRunnable w = new WithDrawRunnable(account, 100, 100);
        // worker
        Worker worker = new Worker(account, 100, 100);

        // deposit thread
        Thread dt = new Thread(d);
        // withdraw thread
        Thread wt = new Thread(w);
        // worker thread
        Thread workerThread = new Thread(worker);

        // start threads
        dt.start();
        wt.start();
        // workerThread.start();

        // wait for threads to finish
        dt.join();
        wt.join();

        // print balance
        System.out.println("Balance: " + account.getBalance());
    }

    synchronized void foo() {
        System.out.println("foo");
    }
}

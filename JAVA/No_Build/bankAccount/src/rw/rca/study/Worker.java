package rw.rca.study;

import rw.rca.safe.BankAccount;

public class Worker implements Runnable {
    private BankAccount account;
    private double amount;
    private int count;

    public Worker(BankAccount account, double amount, int count) {
        this.account = account;
        this.amount = amount;
        this.count = count;
    }

    @Override
    public void run() {
        for (int i = 0; i < count; i++) {
            account.deposit(amount);
            try {
                account.withdraw(amount);
            } catch (InterruptedException e) {
                System.out.println("Interrupted"+e.getMessage());
                e.printStackTrace();
            }
            // if (account.getBalance() != 0) {
            //     System.out.println("Balance is not zero: " + account.getBalance());
            // }
        }
    }
}

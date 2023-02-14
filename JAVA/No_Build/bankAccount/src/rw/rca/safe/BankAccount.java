package rw.rca.safe;

import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class BankAccount {
    private double balance;
    private Lock balanceChangeLock;
    private Condition sufficientFundsCondition;

    public BankAccount(){
        balance=0;
        balanceChangeLock = new ReentrantLock();
        sufficientFundsCondition=balanceChangeLock.newCondition();
    }
    
    public void deposit(double amount) {
        balanceChangeLock.lock();
        try {
            System.out.println("Depositing " + amount);
            double newBalance = balance + amount;
            System.out.println("New balance is " + newBalance);
            balance = newBalance;
            sufficientFundsCondition.signalAll();
        } finally {
            balanceChangeLock.unlock();
        }
    }

    public void withdraw(double amount) throws InterruptedException {
        try {
            while (balance < amount) {
                sufficientFundsCondition.await();
            }
            System.out.println("Withdrawing " + amount);
            double newBalance = balance - amount;
            System.out.println("New balance is " + newBalance);
            balance = newBalance;
            sufficientFundsCondition.signalAll();
       } finally {
            balanceChangeLock.unlock();
       }
    }
    public double getBalance(){
        return balance;
    }
}
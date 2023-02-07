package rw.rca.unsafe;

public class BankAccount {
   private double balance;
    /**
     Constructs a bank account with a zero balance
     */
    
    public BankAccount(){
        balance=0;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    /**
     Deposits money into the bank account
     @param amount the amount to deposit
     */

    public void deposit(double amount){
        double newBalance=balance+amount;
        System.out.println("Depositing "+amount);
        try{
            Thread.sleep(10);
        }catch (InterruptedException exception){

        }
        balance=newBalance;
    }

    /**
     Withdraws money from the bank account
     @param amount the amount to withdraw
     */

    public void withdraw(double amount){
        double newBalance=balance-amount;
        System.out.println("Withdrawing "+amount);
        try{
            Thread.sleep(10);
        }catch (InterruptedException exception){

        }
        balance=newBalance;
    }
}

package rw.rca;
import java.io.*;
import java.util.*;

public class Invoice {
    private Customer customer;
    private long meter_number;
    private Date purchase_date;
    private double purchased_unit;
    private double last_purchased_cost;

    public Invoice() {}

    public Invoice(Customer customer, Date purchase_date, double purchased_unit, double last_purchased_cost) {
        this.customer = customer;
        this.meter_number = Customer.getMeter_number();
        this.purchase_date = purchase_date;
        this.purchased_unit = purchased_unit;
        this.last_purchased_cost = last_purchased_cost;
    }

    public double getLast_purchased_cost() {
        return last_purchased_cost;
    };

    public long getMeter_number() {
        return meter_number;
    }

    public Customer getcustomer() {
        return customer;
    }

    public Date getPurchase_date() {
        return purchase_date;
    }

    public double getPurchased_unit() {
        return purchased_unit;
    }

    public void setLast_purchased_cost(double last_purchased_cost) {
        this.last_purchased_cost = last_purchased_cost;
    }

    public void setMeter_number(long meter_number) {
        this.meter_number = meter_number;
    }

    public void setcustomer(Customer customer) {
        this.customer = customer;
    }

    public void setPurchase_date(Date purchase_date) {
        this.purchase_date = purchase_date;
    }

    public void setPurchased_unit(double purchased_unit) {
        this.purchased_unit = purchased_unit;
    }

    void createInvoice(String name){
        try {
            File file = new File(name);
            // if (file.createNewFile()) {
                System.out.println("File created: " + file.getName());
                FileWriter writer = new FileWriter(file);
                writer.append(this.meter_number + " , " + this.last_purchased_cost + " , " + this.purchased_unit + " , " + this.purchase_date);
                System.out.println("Sucessfully created an invoice");
                writer.close();
            // } else {
            //     System.out.println("File already exists.");
            // }
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}

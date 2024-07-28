package rw.rca;

public class Customer {
    private String names;
    private static long meter_number;
    private String category;

    public Customer(){}

    public Customer(String names,long meter_number, String category){
        this.names = names;
        Customer.meter_number = meter_number;
        this.category = category;
    }

    public static long getMeter_number() {
        return meter_number;
    }

    public String getNames() {
        return names;
    }

    public void setMeter_number(long meter_number) {
        Customer.meter_number = meter_number;
    }

    public void setNames(String names) {
        this.names = names;
    }
}

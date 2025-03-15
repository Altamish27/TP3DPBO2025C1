public class PowerSupply extends Komponen {
    private int watt;

    public PowerSupply() {}

    public PowerSupply(int watt, String merk, String nama) {
        super(merk, nama);
        this.watt = watt;
    }

    public void setWattage(int watt) {
        this.watt = watt;
    }

    public int getWattage() {
        return watt;
    }
}

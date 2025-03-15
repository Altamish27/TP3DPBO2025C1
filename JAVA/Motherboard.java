public class Motherboard extends Komponen {
    private String chipset;
    private String soket;

    public Motherboard() {}

    public Motherboard(String chipset, String soket, String merk, String nama) {
        super(merk, nama);
        this.chipset = chipset;
        this.soket = soket;
    }

    public void setChipset(String chipset) {
        this.chipset = chipset;
    }

    public void setSoket(String soket) {
        this.soket = soket;
    }

    public String getChipset() {
        return chipset;
    }

    public String getSoket() {
        return soket;
    }
}
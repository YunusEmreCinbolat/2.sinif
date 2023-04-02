public class musteri_hesabi {
    private int bakiye;
    private int giris;
    private String kullaniciAdi;
    private int sifre;
    private int krediLimiti;
    private int krediPuani;
    private int krediKartNo;
    private int krediKartSifre;
    private int krediKartSonKullanmaTarihi;
    private int krediKartCvc;
    private int krediKartTaksitSayisi;
    private int krediKartTaksitTutari;
    private int krediKartTaksitTutariToplam;
    private int krediKartTaksitTutariKdv;
    private int krediKartTaksitTutariKdvToplam;

    public String getKullaniciAdi() {
        return kullaniciAdi;
    }

    public void setKullaniciAdi(String kullaniciAdi) {
        this.kullaniciAdi = kullaniciAdi;
    }

    public int getSifre() {
        return sifre;
    }

    public void setSifre(int sifre) {
        this.sifre = sifre;
    }

    public int getKrediLimiti() {
        return krediLimiti;
    }

    public void setKrediLimiti(int krediLimiti) {
        this.krediLimiti = krediLimiti;
    }

    public int getKrediPuani() {
        return krediPuani;
    }

    public void setKrediPuani(int krediPuani) {
        this.krediPuani = krediPuani;
    }

    public int getKrediKartNo() {
        return krediKartNo;
    }

    public void setKrediKartNo(int krediKartNo) {
        this.krediKartNo = krediKartNo;
    }

    public int getKrediKartSifre() {
        return krediKartSifre;
    }

    public void setKrediKartSifre(int krediKartSifre) {
        this.krediKartSifre = krediKartSifre;
    }

    public int getKrediKartSonKullanmaTarihi() {
        return krediKartSonKullanmaTarihi;
    }

    public void setKrediKartSonKullanmaTarihi(int krediKartSonKullanmaTarihi) {
        this.krediKartSonKullanmaTarihi = krediKartSonKullanmaTarihi;
    }

    public int getKrediKartCvc() {
        return krediKartCvc;
    }

    public void setKrediKartCvc(int krediKartCvc) {
        this.krediKartCvc = krediKartCvc;
    }

    public int getKrediKartTaksitSayisi() {
        return krediKartTaksitSayisi;
    }

    public void setKrediKartTaksitSayisi(int krediKartTaksitSayisi) {
        this.krediKartTaksitSayisi = krediKartTaksitSayisi;
    }

    public int getKrediKartTaksitTutari() {
        return krediKartTaksitTutari;
    }

    public void setKrediKartTaksitTutari(int krediKartTaksitTutari) {
        this.krediKartTaksitTutari = krediKartTaksitTutari;
    }

    public int getKrediKartTaksitTutariToplam() {
        return krediKartTaksitTutariToplam;
    }

    public void setKrediKartTaksitTutariToplam(int krediKartTaksitTutariToplam) {
        this.krediKartTaksitTutariToplam = krediKartTaksitTutariToplam;
    }

    public int getKrediKartTaksitTutariKdv() {
        return krediKartTaksitTutariKdv;
    }

    public void setKrediKartTaksitTutariKdv(int krediKartTaksitTutariKdv) {
        this.krediKartTaksitTutariKdv = krediKartTaksitTutariKdv;
    }

    public int getKrediKartTaksitTutariKdvToplam() {
        return krediKartTaksitTutariKdvToplam;
    }

    public void setKrediKartTaksitTutariKdvToplam(int krediKartTaksitTutariKdvToplam) {
        this.krediKartTaksitTutariKdvToplam = krediKartTaksitTutariKdvToplam;
    }


    public void setGiris(String giris, int sifre) {
        if(this.kullaniciAdi==kullaniciAdi && this.sifre==sifre){
            this.giris=1;
        }
        else{
            this.giris=0;
        }
    }

    public int getBakiye() {
        return bakiye;
    }

    public void setBakiye(int bakiye) {
        this.bakiye = bakiye;
    }
}

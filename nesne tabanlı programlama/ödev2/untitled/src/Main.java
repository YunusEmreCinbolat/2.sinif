import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        musteri_hesabi musteri = new musteri_hesabi();
        musteri musteri1 = new musteri();
        musteri1.setAdSoyad("Yunus Emre Cinbolat");
        musteri1.setBakiye(4000);
        musteri1.setTcNo(123456789);
        musteri1.setAdres("Kahramanmaraş");
        musteri1.setTelNo(123456789);
        musteri1.setAnneAdi("Ayşe");
        musteri1.setBabaAdi("Mehmet");
        musteri1.setDogumTarihi(02042001);
        musteri1.setDogumYeri("Kayseri");
        musteri1.setKullaniciAdi("yunusemrecinbolat");
        musteri1.setSifre(123456789);
        musteri1.setKrediLimiti(10000);
        musteri1.setKrediPuani(100);
        musteri1.setKrediKartNo(123456789);
        musteri1.setKrediKartSifre(123);
        musteri1.setKrediKartSonKullanmaTarihi(1228);
        musteri1.setKrediKartCvc(123);
        Scanner scan = new Scanner(System.in);
        System.out.println("Kullanıcı Adı:");
        String kullaniciAdi = scan.nextLine();
        System.out.println("Şifre:");
        int sifre = scan.nextInt();
        if (kullaniciAdi.equals(musteri1.getKullaniciAdi()) && sifre == musteri1.getSifre()) {
            System.out.println("Giriş Başarılı");

            boolean devam = true;
            while (devam) {
                System.out.println("1-Para cekme\n2-Para yatirma\n3-Bakiye Sorgulama\n4-Çıkış");
                int secim = scan.nextInt();
                switch (secim) {
                    case 1:
                        paracek(musteri1);
                        break;
                    case 2:
                        parayatirma(musteri1);
                        break;
                    case 3:
                        System.out.println("Bakiyeniz: " + musteri1.getBakiye());
                        break;
                    case 4:
                        System.out.println("Çıkış Yapılıyor...");
                        break;
                    default:
                        System.out.println("Hatalı Seçim");
                        break;
                }
              }
            }
        else{
                System.out.println("Giriş Başarısız");
            }
          }



    public static void paracek(musteri musteri1){
        Scanner scan = new Scanner(System.in);
        System.out.println("Çekmek istediğiniz tutar:");
        int tutar = scan.nextInt();
        if(tutar > musteri1.getBakiye()){
            System.out.println("Bakiye Yetersiz");
        }
        else{
            musteri1.setBakiye(musteri1.getBakiye()-tutar);
            System.out.println("Yeni Bakiyeniz:"+musteri1.getBakiye());
        }

    }
    public static void parayatirma(musteri musteri1){
        Scanner scan = new Scanner(System.in);
        System.out.println("Yatırmak istediğiniz tutar:");
        int tutar = scan.nextInt();
            musteri1.setBakiye(musteri1.getBakiye()+tutar);
            System.out.println("Yeni Bakiyeniz:"+musteri1.getBakiye());


    }

}

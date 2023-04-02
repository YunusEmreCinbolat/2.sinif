/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ciftyonlu;

import java.util.Scanner;

/**
 *
 * @author Fatih
 */
public class CiftYonlu {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        CiftYonluBagliLİst list = new CiftYonluBagliLİst();
        
        list.OneEkle(5);
        list.OneEkle(6);
        list.OneEkle(10);
        list.OneEkle(8);
        list.OneEkle(12);
        
        
        list.SonaEkle(20);
        
        list.SonaEkle(44);
        
        list.SonaEkle(55);
        
        Dugum arananDugum = list.Bul(5);
        
        list.SonraEkle(arananDugum, 100);
        list.OnceEkle(arananDugum, 86);
        
        list.Gezinme();
        
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Adınızı Girin:");
        
        String ad = sc.nextLine();
        
        System.out.println("Soyadınızı Girin:");
        
        String soyad = sc.nextLine();
        
    }
    
}

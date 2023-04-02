/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package daireselbagliliste;

import java.util.Scanner;

/**
 *
 * @author Fatih
 */
public class DaireselBagliListe {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        DBagliListe daireselBagli = new DBagliListe();
        System.out.println("Kac adet girilecek");
        Scanner scan=new  Scanner(System.in);
        int adet=scan.nextInt();
        for(int i=0;i<adet;i++){
            System.out.println("sayi giriniz");
            daireselBagli.Ekle(scan.nextInt());

        }
        while(daireselBagli.hane()>2){
            daireselBagli.Sil();
        }
        daireselBagli.yazdir();
     
    }
    
}

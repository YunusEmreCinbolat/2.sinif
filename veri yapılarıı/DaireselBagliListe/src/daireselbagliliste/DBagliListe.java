/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package daireselbagliliste;

/**
 *
 * @author Fatih
 */
public class DBagliListe {
    public Dugum ilk = null;
    public Dugum son = null;
    
    public void Ekle(int deger)
    {
        Dugum yeniDugum = new Dugum(deger);
        
        if(ilk == null)
        {
            ilk = yeniDugum;
            son=yeniDugum;
            ilk.sonraki=son;
            son.sonraki=ilk;
        }
        else
        {
            son.sonraki = yeniDugum;
        }
        
        yeniDugum.sonraki = ilk;
        son = yeniDugum;
        
    }
    
    public boolean DugumBul(int arananDeger)
    {
        Dugum mevcutDugum = ilk;
        
        if(ilk == null)
            return false;
        else
        {
            do{
                
                if(mevcutDugum.deger == arananDeger)
                    return true;
                
                mevcutDugum = mevcutDugum.sonraki;
            }
            while(mevcutDugum != ilk);
            
            return false;
        }
    }
    Dugum silinecekDeger=ilk;
    public void Sil()
    {
        int sayac=0;
        while(sayac<1){
            silinecekDeger=silinecekDeger.sonraki;
            sayac++;
        }
        if(silinecekDeger.sonraki==son){
            silinecekDeger.sonraki=ilk;
        }
        else if(silinecekDeger.sonraki==ilk){
            silinecekDeger.sonraki.sonraki=ilk;
                    
        }
        else{
        
        
        silinecekDeger.sonraki=silinecekDeger.sonraki.sonraki;
        sayac=0;
        while(sayac<2) {
            silinecekDeger=silinecekDeger.sonraki;
            sayac++;
        }
        
        }
                          
            }     
            
           
    int hane(){
        Dugum temp=ilk;
        int hane=0;
        while(temp!=son){
            hane++;
    }
        hane++;
    return hane;
    }
    
    void yazdir(){
       int  sayac=0;
      Dugum temp=ilk;
      while(sayac<2){ 
          System.out.print(temp.deger+  "->");
          temp=temp.sonraki;
      }
    }
    
}
 
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ciftyonlu;

/**
 *
 * @author Fatih
 */
public class CiftYonluBagliLİst {
    
    public Dugum ilk;
    
    
    public void OneEkle(int deger)
    {
        Dugum yeniDugum = new Dugum(deger);
        yeniDugum.onceki = null;
        yeniDugum.sonraki = ilk;
        
        if(ilk!= null)
        {
            ilk.onceki = yeniDugum;
        }
        
        ilk = yeniDugum;
    }
    
    public void SonraEkle(Dugum oncekiDugum, int deger)
    {
        if(oncekiDugum == null)
        {
            System.out.print("Önceki düğüm null olamaz");
            return;
        }
        
        Dugum yeniDugum = new Dugum(deger);
        yeniDugum.sonraki = oncekiDugum.sonraki;
        oncekiDugum.sonraki = yeniDugum;
        yeniDugum.onceki = oncekiDugum;
        
        if(yeniDugum.sonraki != null)
            yeniDugum.sonraki.onceki = yeniDugum;
    }
    
    public void SonaEkle(int deger)
    {
        Dugum yeniDugum = new Dugum(deger);
        
        yeniDugum.sonraki = null;
        
        Dugum son = ilk;
        
        if(ilk == null)
        {
            yeniDugum.onceki = null;
            ilk = yeniDugum;
            return;
        }
        
        while(son.sonraki!= null)
        {
            son = son.sonraki;
        }
        
        son.sonraki = yeniDugum;
        yeniDugum.onceki = son;
        
    }
    
    public void OnceEkle(Dugum sonrakiDugum, int deger)
    {
        if(sonrakiDugum == null)
        {
            System.out.println("Sonraki Düğüm null olamaz");
        }
        
        Dugum yeniDugum = new Dugum(deger);
        
        yeniDugum.onceki = sonrakiDugum.onceki;
        sonrakiDugum.onceki = yeniDugum;
        yeniDugum.sonraki = sonrakiDugum;
        if(yeniDugum.onceki != null)
            yeniDugum.onceki.sonraki = yeniDugum;
        else
            ilk = yeniDugum;
                   
    }
    
    public void Gezinme()
    {
        Dugum son = ilk;
        
        while(son.sonraki != null)
        {
            System.out.println(son.deger);
            son = son.sonraki;
        }
        
        System.out.println(son.deger);
    }
    
    public Dugum Bul(int arananDeger)
    {
        Dugum son = ilk;
        
        while(son.sonraki != null)
        {
            if(son.deger == arananDeger)
                return son;
            
            son = son.sonraki;
        }
        
        if(son.deger == arananDeger)
                return son;
        
        return null;
    }
    
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package splaytrees.avltrees;

/**
 *
 * @author Fatih
 */
public class mainPage {
    public static void main(String[] args) {
        // TODO code application logic here
        AVLTrees tree = new AVLTrees();
        tree.Insert(5);
        tree.Insert(10);
        tree.Insert(15);
        tree.Insert(11);
        tree.Insert(6);
        tree.Insert(4);
        tree.Insert(3);
        
        tree.inorder();
        tree.Delete(15);
        tree.inorder();
        
    }
}

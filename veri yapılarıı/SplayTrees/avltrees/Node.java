/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package avltrees;

/**
 *
 * @author Fatih
 */
public class Node {
    public int value;
    public Node left;
    public Node right;
    public int level;
    
    public Node(int val)
    {
        value = val;
    }
    
}

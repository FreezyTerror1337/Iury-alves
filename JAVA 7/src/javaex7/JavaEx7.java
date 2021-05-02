/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaex7;

/**
 *
 * @author gcarv
 */
public class JavaEx7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args){
        int x = 13, y = 0;
        while(y != 1){
            if(x%2 == 0){
                y = x/2;
            } else {
                y = 3 * x + 1;
            }
            System.out.print(y+", ");
            x = y;
        }
    }
}
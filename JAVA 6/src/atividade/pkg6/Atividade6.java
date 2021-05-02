/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividade.pkg6;

/**
 *
 * @author alexa
 */
public class Atividade6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
   long cont, x = 0, y = 1, z = 0, cont2;
   
   		System.out.println("Valor 1 Fibonacci: \n0 \n");
   System.out.println("Valor 2 Fibonacci: \n1 \n");
for(cont=3; cont<= 100; cont = cont+1){
    cont2 = cont;
    cont2 = cont2 -1;
	System.out.println("Valor "+cont2+ " Fibonacci: \n");
	z = x+y;
	System.out.println(z+" \n");
	x = y;
	y = z;
    }
    }
}

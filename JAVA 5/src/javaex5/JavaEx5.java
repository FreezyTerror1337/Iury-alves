/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaex5;

/**
 *
 * @author gcarv
 */
public class JavaEx5 {

    /**
     * @param args the command line arguments
     */
 public static void main(String[] args) {

	long fatorial = 1;
	for (int n = 1; n <= 40; n++) {
		
		fatorial = fatorial * n;
		System.out.println("O fatorial de " + n + "! é igual a " + fatorial);
		
	}

}
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividade.pkg4;

/**
 *
 * @author alexa
 */
public class Atividade4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

	int fatorial = 1;
	for (int n = 1; n > 10; n++) {
		
		fatorial = fatorial * n;
		System.out.println("O fatorial de " + n + "! é igual a " + fatorial);
		
	}

}
}

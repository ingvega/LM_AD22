Algoritmo ComunDivisorSolucion1
	//Obtener el común divisor de 2 números
	//asumiendo que solamente podríamos tener
	//como posibles dividores a los números
	//del 2 al 7, si no hay ninguno imprimir 1
	Definir n1,n2 Como Entero
	Escribir "Ingresa un numero: "
	Leer n1
	Escribir "Ingresa otro numero: "
	Leer n2
	Si (n1 mod 7)=0 y (n2 mod 7)=0 Entonces
		Escribir "El comun divisor es 7"
	SiNo 
		Si (n1 mod 6)=0 y (n2 mod 6)=0 Entonces
			Escribir "El comun divisor es 6"
		SiNo
			Si (n1 mod 5)=0 y (n2 mod 5)=0 Entonces
				Escribir "El comun divisor es 5"
			SiNo
				Si (n1 mod 4)=0 y (n2 mod 4)=0 Entonces
					Escribir "El comun divisor es 4"
				SiNo
					Si (n1 mod 3)=0 y (n2 mod 3)=0 Entonces
						Escribir "El comun divisor es 3"
					SiNo 
						Si (n1 mod 2)=0 y (n2 mod 2)=0 Entonces
							Escribir "El comun divisor es 2"
						SiNo
							Escribir "El comun divisor es 1"
							
						FinSi
						
					FinSi
					
				FinSi
				
			FinSi
		FinSi
	FinSi
FinAlgoritmo

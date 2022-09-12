Algoritmo ComunDivisorSolucion2
	//Obtener el común divisor de 2 números
	//asumiendo que solamente podríamos tener
	//como posibles dividores a los números
	//del 2 al 7, si no hay ninguno imprimir 1
	Definir n1,n2,d Como Entero
	Escribir "Ingresa un numero: "
	Leer n1
	Escribir "Ingresa otro numero: "
	Leer n2
	d<-1
	Si (n1 mod 2)=0 y (n2 mod 2)=0 Entonces
		d<-2
	FinSi 
	Si (n1 mod 3)=0 y (n2 mod 3)=0 Entonces
		d<-3
	FinSi
	Si (n1 mod 4)=0 y (n2 mod 4)=0 Entonces
		d<-4
	FinSi
	Si (n1 mod 5)=0 y (n2 mod 5)=0 Entonces
		d<-5
	FinSi
	Si (n1 mod 6)=0 y (n2 mod 6)=0 Entonces
		d<-6
	FinSi
	Si (n1 mod 7)=0 y (n2 mod 7)=0 Entonces
		d<-7
	FinSi
	Escribir "El comun divisor es ",d
FinAlgoritmo

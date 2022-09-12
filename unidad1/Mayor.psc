//4,5,6       10,10,8       1,1,1
Algoritmo Ejercicio1
	Leer n1,n2,n3
	Si n1=n2 Y n2=n3 Entonces
		Escribir 'Ninguno'
	SiNo
		Si n1>n2 Y n1>n3 Entonces
			Escribir n1
		SiNo
			Si n2>n1 Y n2>n3 Entonces
				Escribir n2
			SiNo
				Escribir n3
			FinSi
		FinSi
	FinSi
FinAlgoritmo

Algoritmo CalificacionConExtra
	Definir nombre Como Caracter
	Definir calif Como entero
	//preguntar quién es y su calificacion
	Escribir "Ingresa tu nombre"
	Leer  nombre
	Escribir "Ingresa tu calificacion"
	leer calif
	//Identificar si hay puntos adicionales
	si nombre="A" O nombre="B" O nombre="C" Entonces
		calif<-calif+5
	SiNo
		si nombre="D" O nombre="E" O nombre="F" Entonces
			calif<-calif+2
		FinSi
	FinSi
	
	Si calif>=100 Entonces
		Escribir 100
	SiNo
		Escribir calif
	FinSi
	
	
	
	
	
	
	
	
	
FinAlgoritmo

Algoritmo saludar
	//Entradas: Nombre y A�o de nacimiento
	//Resultado: Mensaje "Hola nombre tienes
	//x a�os"
	//Proceso 
	Definir nombre Como Caracter
	Definir anioNacimiento,edad Como Entero
	//	Pedir datos
	Escribir "Escribe tu nombre"
	Leer nombre
	Escribir "Indica tu a�o de nacimiento"
	Leer AnioNacimiento
	//	Calcular la edad
	edad<-2022-anioNacimiento
	//	Generar el mensaje
	Si edad<=17 Entonces
		Escribir "Hola peque�in tienes ",edad," a�os"
	SiNo
		Si edad<0 Entonces
				Escribir "No has nacido"
		FinSi
		Escribir "Hola ",nombre, "tienes ",edad," a�os"
	Fin Si
	
FinAlgoritmo

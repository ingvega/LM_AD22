Algoritmo saludar
	//Entradas: Nombre y Año de nacimiento
	//Resultado: Mensaje "Hola nombre tienes
	//x años"
	//Proceso 
	Definir nombre Como Caracter
	Definir anioNacimiento,edad Como Entero
	//	Pedir datos
	Escribir "Escribe tu nombre"
	Leer nombre
	Escribir "Indica tu año de nacimiento"
	Leer AnioNacimiento
	//	Calcular la edad
	edad<-2022-anioNacimiento
	//	Generar el mensaje
	Si edad<=17 Entonces
		Escribir "Hola pequeñin tienes ",edad," años"
	SiNo
		Si edad<0 Entonces
				Escribir "No has nacido"
		FinSi
		Escribir "Hola ",nombre, "tienes ",edad," años"
	Fin Si
	
FinAlgoritmo

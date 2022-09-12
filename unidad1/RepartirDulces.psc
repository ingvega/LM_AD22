Algoritmo sin_titulo
	//Juanito requiere repartir una bolsa de dulces 
	//entre diferentes familiares que están distribuidos 
	//en diferentes mesas en una fiesta.
	//Juanito tiene bolsas de dulces de diferentes 
	//tamaños y cada que llega a una mesa debe revisar 
	//cuantos dulces tiene la bolsa y cuantos familiares 
	//están en esa mesa, de manera que debe asegurarse de 
	//repartir a cada familiar la misma cantidad de 
	//dulces, ayuda a Juanito a calcular cuantos dulces 
	//va a repartir a cada familiar y si le sobran algunos
	Definir dulces,personas,resto,repartir Como Entero
	Escribir "Cuantos dulces?"
	leer dulces
	Escribir "Cuantas personas?"
	leer personas
	//Identificar cuantos sobran (resto)
	//A los dulces totales quitarles el resto
	//Dividir los dulces restantes entre las personas
	//Opción 1
	resto<-dulces mod personas
	repartir<-(dulces-resto)/personas
	
	//Opción 2
	//repartir<-trunc(dulces/personas)//11
	//resto<-repartir*personas//99
	//resto<-dulces-resto
	
	Escribir "Les toca de ",repartir, " dulces"
	Escribir "Y sobran ",resto
	
	
	
	
FinAlgoritmo

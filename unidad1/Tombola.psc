Algoritmo Tombola
	Definir Sueldo,n1,n2,n3,porcBono,bono Como Real
	Leer Sueldo,n1,n2,n3
	porcBono<-n1+n2-n3
	Si porcBono>0 Entonces
		//Si hay bono	
		bono<-Sueldo*porcBono/10
		Sueldo<-Sueldo+bono
	FinSi
	Escribir Sueldo
FinAlgoritmo

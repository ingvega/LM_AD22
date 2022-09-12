Algoritmo sin_titulo //14 15 11 15 10 15          //15 15 15 7 2 5
	Definir a1,a2,a3,b1,b2,b3,a,b como entero
    Leer a1,a2,a3,b1,b2,b3
	a<-0
	b<-0
    Si(a1=15) Entonces
		a<-a+1
	SiNo
		b<-b+1
	FinSi
    Si(a2=15) Entonces
		a<-a+1
	SiNo
		b<-b+1
	FinSi
	Si(a3=15) Entonces
		a<-a+1
	SiNo
		b<-b+1
	FinSi
    
    Si a>b Entonces
		Escribir "A ",a," a ",b
    SiNo
		Escribir "B ",b," a ",a
	FinSi
FinAlgoritmo

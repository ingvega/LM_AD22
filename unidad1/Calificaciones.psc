Algoritmo sin_titulo
	//100 90 0 95 100 =385
	//100+90+0+95+100/5
	//100+90+95+100/4
	Definir c1,c2,c3,c4,c5,puntaje Como Entero
	Definir promedio Como Real
	Escribir "Ingresa 5 calificaciones"
	Leer c1,c2,c3,c4,c5
	puntaje<-c1+c2+c3+c4+c5
	promedio<-(c1+c2+c3+c4+c5)/5
	Escribir "Puntaje ", puntaje
	Escribir "Promedio ", promedio
	Definir totalCalif Como Entero
	totalCalif<-5
	Si c1=0 Entonces
		totalCalif<-totalCalif-1
	FinSi
	Si c2=0 Entonces
		totalCalif<-totalCalif-1
	FinSi
	Si c3=0 Entonces
		totalCalif<-totalCalif-1
	FinSi
	Si c4=0 Entonces
		totalCalif<-totalCalif-1
	FinSi
	Si c5=0 Entonces
		totalCalif<-totalCalif-1
	FinSi
	
	Si totalCalif=0 Entonces
		Escribir "No entregaste ninguna actividad"
	SiNo
		promedio<-puntaje/totalCalif
		Escribir "Promedio (sin actividades no entregadas)", promedio
	FinSi
	
	
FinAlgoritmo

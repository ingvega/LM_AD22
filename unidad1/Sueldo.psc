Algoritmo sin_titulo
	Definir edad, sueldoMensual,sueldoAnual Como Entero
	Definir impuestos Como Real
	
	Si edad>16 Y sueldoMensual>=1000 Entonces
		sueldoAnual<-sueldoMensual*12
		Si sueldoAnual<10000 Entonces
			impuestos<-sueldoAnual*.05
		SiNo
			Si sueldoAnual<20000 Entonces
				impuestos<-sueldoAnual*.15
			SiNo
				Si sueldoAnual<35000 Entonces
					impuestos<-sueldoAnual*.2
				SiNo
					Si sueldoAnual<60000 Entonces
						impuestos<-sueldoAnual*.3
					SiNo
						impuestos<-sueldoAnual*.45
					FinSi
				FinSi
			FinSi
		FinSi
		
		Escribir "Pagará ",impuestos
	SiNo
		Escribir "No declara impuestos"
	FinSi
FinAlgoritmo

Algoritmo FraccioMixta
	Definir numerador,denominador,parteEntera Como Entero
	Leer numerador,denominador
	//46/9
	//5
	parteEntera<-trunc(numerador/denominador)
	
	//1
	numerador<-numerador MOD denominador
	Si numerador/denominador<0 Entonces
		Escribir Sin Saltar "-"
	FinSi
	Si parteEntera<>0 Entonces
		Escribir Sin Saltar abs(parteEntera)
	FinSi
	
	Si numerador <> 0 Entonces
		Escribir " ",abs(numerador),"/",abs(denominador)
	Fin Si
	
	//Si numerador <> 0 Entonces
	//	Escribir parteEntera, " ", numerador,"/",denominador
	//SiNo
	//	Escribir parteEntera
	//Fin Si
FinAlgoritmo

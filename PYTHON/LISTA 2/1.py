#Faça um Programa que peça dois números e imprima o maior deles
numero1 = float(input("Informe o primeiro numero: "))
numero2 = float(input("Informe o segundo numero: "))

if numero1 > numero2:
    print("{} é maior que {}".format(numero1,numero2))
    
if numero1 < numero2:
    print("{} é maior que {}".format(numero2,numero1))
    
if numero1 == numero2:
    print("Os numeros são iguais")  

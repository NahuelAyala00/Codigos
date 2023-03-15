#Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
try:
    num = float(input("Informe um numero: "))

    if num > 0:
        print("{} é positivo".format(num))
        
    elif num < 0:
        print("{} é negativo".format(num))
        
    elif num == 0:
        print("{} é neutro".format(num))

except ValueError:
    print("Por favor, digite um número válido.")
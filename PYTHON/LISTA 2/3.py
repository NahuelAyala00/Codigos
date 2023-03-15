#Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letraescrever: F - Feminino, M - Masculino, Sexo Inválido
try:
    sexo = input("Digite F para feminino ou M para masculino: ")

    if sexo == "F" or sexo == "f":
        print("Sexo feminino.")
    elif sexo == "M" or sexo == "m":
        print("Sexo masculino.")
    else:
        print("Sexo inválido.")
except ValueError:
    print("Por favor, digite um valor válido.")
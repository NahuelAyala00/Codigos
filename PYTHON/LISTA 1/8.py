#  Salario = GanhoPorHora * NumeroDeHoras
GanhoPorHora = float(input("Informe o seu ganho por hora: "))
NumeroDeHoras = float(input("Informe suas horas trabalhadas: "))

Salario = GanhoPorHora * NumeroDeHoras

print("Seu salario é de R${:.2f}".format(Salario))
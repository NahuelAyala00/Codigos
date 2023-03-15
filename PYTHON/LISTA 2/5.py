#Faça um programa para a leitura de duas notas parciais de um aluno. O programa devecalcular a média alcançada por aluno e apresentar:
#A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
#A mensagem "Reprovado", se a média for menor do que sete;
#A mensagem "Aprovado com Distinção", se a média for igual a dez


nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

media = (nota1 + nota2) / 2

print("A média do aluno é:", media)

if media < 0 or media > 10:
    print("Nota inválida")
elif media == 10:
    print("Parabéns, você foi aprovado com nota máxima!")
elif media >= 7:
    print("Aprovado")
else:
    print("Reprovado")

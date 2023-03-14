notas = []  # cria uma lista vazia para armazenar as notas

for i in range(1, 5):  # executa o loop 4 vezes para solicitar as notas
    nota = float(input(f"Digite a {i}ª nota: "))  # solicita ao usuário uma nota e converte para float
    notas.append(nota)  # adiciona a nota na lista de notas

media = sum(notas) / len(notas)  # calcula a média das notas usando a função 'sum()' e 'len()'

print("A média das notas é:", media)  # exibe a mensagem com a média das notas

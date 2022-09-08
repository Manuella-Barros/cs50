def main():
    valorString = input("Qual o troco? ")
    valor = float(valorString)
    moeda = round(valor * 100)
    contas(valor, moeda)

def contas(valor, moeda):
    resto = moeda
    valores = []

    if moeda >= 25:
        vinteCinco = int(resto / 25)
        resto = resto % 25
        valores.append(vinteCinco)

    if moeda >= 10:
        dez = int(resto / 10)
        resto = resto % 10
        valores.append(dez)

    if moeda >= 5:
        cinco = int(resto / 5)
        resto = resto % 5
        valores.append(cinco)

    if moeda >= 1:
        um = int(resto / 1)
        resto = resto % 1
        valores.append(um)

    print("Você receberá " + str(sum(valores)) + " moedas")

main()
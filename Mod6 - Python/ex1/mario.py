def main():
    inputAltura = input("Escolha uma altura: ")
    altura = int(inputAltura)
    piramide(altura)

def piramide(altura):

    if altura <= 8 and altura >= 1:

        for c in reversed(range(altura)):

            for n in reversed(range(1, c + 1)):
                print("", end = " ")

            a = altura - c

            for i in range(1, a + 1):
                print("#", end = "")
            print("")
    else:
        main()

main()
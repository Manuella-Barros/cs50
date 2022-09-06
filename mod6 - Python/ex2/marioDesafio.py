
def main():
    alturaString = input("Escolha uma altura: ")
    altura = int(alturaString)
    piramide(altura)

def piramide(altura):

    if altura <= 8 and altura >= 1:
        for i in reversed(range(altura)):
            for j in range(1, i + 1):
                print("", end=" ")

            k = altura - i

            for l in range(1, k + 1):
                print("#", end="")

            print(" ", end ="")

            for m in reversed(range(k)):
                print("#", end="")

            print("")

    else:
        main()

main()
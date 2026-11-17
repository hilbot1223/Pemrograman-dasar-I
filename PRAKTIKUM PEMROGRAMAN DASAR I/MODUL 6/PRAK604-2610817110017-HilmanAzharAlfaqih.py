code = input()
message = input()

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    result = ""
    stars = 0
    hashes = 0

    for i in range(len(code)):
        if code[i] == message[i]:
            if code[i] == " ":
                result += " "
            else:
                result += "*"
                stars += 1
        else:
            result += "#"
            hashes += 1

    print(result)
    print("* =", stars)
    print("# =", hashes)

    if stars >= hashes:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
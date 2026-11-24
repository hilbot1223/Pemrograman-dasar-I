sentence = input("Kalimat : ")

vowels = 0
consonants = 0

for char in sentence.lower():
    if char in "aiueo":
        vowels += 1
    elif char.isalpha():
        consonants += 1

print("Jumlah Vokal :", vowels)
print("Jumlah Konsonan :", consonants)
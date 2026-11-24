word = input()
lower_word = word.lower()

if lower_word == lower_word[::-1]:
    print("Kata '" + word + "' adalah palindrom")
else:
    print("Kata '" + word + "' bukan palindrom")
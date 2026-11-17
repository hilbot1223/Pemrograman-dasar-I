word = input().lower()

if word == word[::-1]:
    print("Kata '" + word + "' adalah palindrom")
else:
    print("Kata '" + word + "' bukan palindrom")
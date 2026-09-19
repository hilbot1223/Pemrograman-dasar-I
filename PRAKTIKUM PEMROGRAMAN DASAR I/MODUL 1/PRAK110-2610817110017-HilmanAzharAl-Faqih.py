import math

base = 5
height = 12
hypotenuse = math.sqrt((base * base) + (height * height))
perimeter = base + height + hypotenuse
area = (base * height) / 2

print("Diketahui :")
print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm")
print("\nJawab :")
print(f"Sisi A = {height} cm")
print(f"Sisi B = {int(hypotenuse)} cm")
print(f"Sisi C = {base} cm")
print(f"Keliling = {int(perimeter)} cm")
print(f"Luas = {int(area)} cm")
import math

data = input().split()

if len(data) == 2:
    A, B = map(float, data)
else:
    A = float(data[0])
    B = float(input())

height = A
hypotenuse = B

C = B * B - A * A
base_triangle = math.sqrt(C)

wide = (base_triangle * height) / 2
perimeter = base_triangle + height + hypotenuse

print("Alas =", int(base_triangle))
print("Tinggi =", int(height))
print("Keliling =", int(perimeter))
print("Luas =", int(wide), "cm^2")
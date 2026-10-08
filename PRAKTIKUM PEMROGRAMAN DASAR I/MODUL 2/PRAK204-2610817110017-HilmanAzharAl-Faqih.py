data = input().split()

if len(data) == 2:
    radius, height = map(float, data)
else:
    radius = float(data[0])
    height = float(input())

volume = (22 / 7) * radius * radius * height
surface_area = 2 * (22 / 7) * radius * (radius + height)
circumference = 2 * (22 / 7) * radius

print(f"Volume = {volume:.2f}")
print(f"Luas = {surface_area:.2f}")
print(f"Keliling = {circumference:.2f}")
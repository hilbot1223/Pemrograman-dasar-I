data = input()

if len(data.split()) == 6:
    a, b, i, j, x, y = map(float, data.split())
else:
    a, b = map(float, data.split())
    i, j = map(float, input().split())
    x, y = map(float, input().split())

result = ((a - b) * i) / j - (x + y)

print(f"{result:.3f}")
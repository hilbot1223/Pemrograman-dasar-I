a, b = map(int, input().split())

if a < b:
    step = 1
else:
    step = -1

for i in range(a, b + step, step):
    print(i, a + b - i, end="")

    if i != b:
        print(" - ", end="")
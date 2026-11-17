n, multiple = map(int, input().split())

total = 0

for i in range(1, n + 1):
    row = 0

    for j in range(i, 0, -1):
        if j != i:
            print(" + ", end="")

        print(f"({j} * {multiple})", end="")
        row += j * multiple

    print(f" = {row}")
    total += row

print(total)
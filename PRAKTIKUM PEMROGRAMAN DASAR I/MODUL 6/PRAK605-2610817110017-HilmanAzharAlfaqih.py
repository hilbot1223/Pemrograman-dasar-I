n = int(input())

A = []
B = []

for i in range(n):
    row = list(map(int, input().split()))
    A.append(row)

for i in range(n):
    row = list(map(int, input().split()))
    B.append(row)

result = []

for i in range(n):
    row = []
    for j in range(n):
        total = 0
        for k in range(n):
            total += A[i][k] * B[k][j]
        row.append(total)
    result.append(row)

print("Matriks AXB")
for i in range(n):
    for j in range(n):
        print(result[i][j], end=" ")
    print()
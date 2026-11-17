
rows, cols = map(int, input().split())
numbers = list(map(int, input().split()))

matrix = []
index = 0

for i in range(rows):
    row = []
    for j in range(cols):
        row.append(numbers[index])
        index += 1
    matrix.append(row)

for i in range(rows):
    for j in range(cols):
        print(matrix[i][j], end=" ")
    print()
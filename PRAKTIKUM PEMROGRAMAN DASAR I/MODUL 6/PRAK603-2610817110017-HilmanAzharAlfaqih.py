n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    first_row = list(map(int, input().split()))
    second_row = list(map(int, input().split()))

    for i in range(n1):
        result = first_row[i] * second_row[i]
        print(result, end=" ")
n = int(input())

for i in range(1, n + 1, 2):
    print(i, end=" ")

print()

if n % 2 == 0:
    start = n
else:
    start = n - 1

for i in range(start, 1, -2):
    print(i, end=" ")
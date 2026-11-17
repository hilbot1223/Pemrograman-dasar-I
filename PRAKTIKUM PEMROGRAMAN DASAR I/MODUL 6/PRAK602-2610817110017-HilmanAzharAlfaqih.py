rooms = int(input())

numbers = list(map(int, input().split()))

for i in range(rooms):
    result = numbers[i] * (i + 1)
    print(result, end=" ")
def maksimal(a, b):
    if a > b:
        return a
    return b

def minimal(a, b):
    if a < b:
        return a
    return b

bilangan = int(input())

maks = -100000
minim = 100000

nilai_list = list(map(int, input().split()))

for nilai in nilai_list:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(maks, minim)
description = input()

if len(description) > 20:
    print(description[:20] + "...")
else:
    print(description)
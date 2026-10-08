total_seconds = int(input())

if total_seconds >= 86400:
    days = total_seconds // 86400
    total_seconds = total_seconds % 86400
else:
    days = 0

hours = total_seconds // 3600
total_seconds = total_seconds % 3600

minutes = total_seconds // 60
seconds = total_seconds % 60

print(f"{days} hari {hours:02d}:{minutes:02d}:{seconds:02d}")
first_name = input("Nama Depan : ").strip()
last_name = input("Nama Belakang : ").strip()

full_name = first_name + " " + last_name
length = len(full_name.replace(" ", ""))

print("Nama Lengkap :", full_name)
print("Panjang Nama (tanpa spasi) :", length)
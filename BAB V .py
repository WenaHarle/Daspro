arr=[]
n = int(input("Masukan panjang array : "))

for i in range(0, n):
    print("Masukkan elemn ke-",i)
    ele = int(input())
    arr.append(ele)
print(arr)

bs = input("Apakah array sudah benar? y/n")
if bs=='y':
    arr.sort()
    print("Angka dari urutan terkecil\t:", arr)

    total = 0
    for i in arr:
        total += i
    print("Jumlah nilai total array\t:", total)
    print("Rata-rata \t\t\t\t\t:", (total/n))

else:
    exit()

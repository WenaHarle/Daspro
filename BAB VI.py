import numpy as np

def input_matriks(rows, cols): #fungsi untuk mengimput isi matriks
    matriks_temp = np.empty((rows, cols))
    for i in range(rows):
        for j in range(cols):
            element = float(input(f"Masukkan elemen matriks pada baris {i+1} dan kolom {j+1}: "))
            matriks_temp[i, j] = element
    
    return matriks_temp

def perkalian_matriks(matriks_1, matriks_2, rows1, cols2, cols1): #fungsi perkalian
    result = np.zeros((rows1, cols2))
    for i in range(rows1):
        for j in range(cols2):
            for k in range(cols1):
                result[i][j] += matriks_1[i][k] * matriks_2[k][j]
    return result

def lainnya(pilihan,matrix1,matrix2): #fungsi penjumlahan dan pengurangan matriks
    if(pilihan == 1):
        print(np.add(matrix1, matrix2))
    elif(pilihan==2):
        print(np.subtract(matrix1, matrix2))

#program utama disini ya
pilihan = int(input("Silahkan masukkan pilihan operasi matriks :\n1. Penjumlahan matriks\n2. Pengurangan matriks\n3. Perkalian\nPilihan anda :"))
baris_1=int(input("Silahkan masukkan panjang baris matriks pertama: "))
kolom_1=int(input("Silahkan masukkan panjang kolom matriks pertama: "))
baris_2=int(input("Silahkan masukkan panjang baris matriks kedua: "))
kolom_2=int(input("Silahkan masukkan panjang kolom matriks kedua: "))

print("input matriks pertama")
matriks_1 = input_matriks(baris_1,kolom_1)
print("input matriks kedua")
matriks_2 = input_matriks(baris_2,kolom_2)

#ini seleksi kondisi untuk operasinya
if (pilihan == 3 and kolom_1==baris_2):
    hasil = perkalian_matriks(matriks_1,matriks_2,baris_1,kolom_2,kolom_1)
    print("Hasil perkalian adalah\n", hasil)

elif ((pilihan == 1 or 2) and baris_1==kolom_1 and baris_2==kolom_2):
    lainnya(pilihan,matriks_1,matriks_2)

else:
    print("tolong masukkan panjang dan baris yang sesaui dengan operasi")    
exit


    



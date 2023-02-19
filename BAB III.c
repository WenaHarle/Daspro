#include <stdio.h>
#include <string.h>


struct jadwal {
    char hari[7];
    char matkul[500];
    char note[50];

};

int main() {
    int fix;
    struct jadwal j1 = {"Senin", "Libur cuy", "Latihan Phyton"};
    struct jadwal j2 = {"Selasa", "1.PD (07:00) 2.4 | 2.REDC (10:00) 2.7 | 3. Metode Transformasi (14:00) 1.4", "cie yang di kampus ampek sore"};
    struct jadwal j3 = {"Rabu", "Libur cuy", "Latihan PHP dan HTML"};
    struct jadwal j4 = {"Kamis", "1.Fisika Lanjut (07:00) 2.4 | 2.REDC (10:00) 1.6", "Latihan Phyton"};
    struct jadwal j5 = {"Jumat", "1.Kalkulus II (08:45) 2.2 | 2.Agama (11:30) 1.6", "Praktikum Daspro (18:30)"};
    struct jadwal j6 = {"Sabtu", "Lobur cuy", "Bersihin kamar dan nyuci baju"};
    struct jadwal j7 = {"Minggu", "Lobur cuy", "Latihan C"};

    struct jadwal j[7]={j1, j2, j3,j4,j5,j6,j7};

    while (fix!=7){
        printf("\n\nList hari :\n");
        for (int i = 0; i < 7 ; ++i) {
            printf(" %d. %s\n",i,j[i].hari);
        }
        printf(" 7. Akhiri Program\n");
        printf("Nomor hari pilihan : \n");
        scanf("%d",&fix);
        printf(" Hari\t\t\t: %s\n jadwal Matakuliah\t: %s\n Note\t\t\t: %s\n", j[fix].hari,j[fix].matkul,j[fix].note);

        printf("\nMelihat jadawla lain?\n 0.Iya\n 7.Tidak\n");
        scanf("%d",&fix);
    }

    return 0;
}

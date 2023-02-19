#include <stdio.h>

int main (){
    int fix, list, tempP, tempJ, mon20=1200000, mon24=1500000,   pc1=300000, pc2=10000000, mon , pc, total;
    while (fix!=2) {
        total = mon + pc;
        printf("\nTotal belanja anda saat ini  : Rp%d\n", total);
        printf("List barang yang ada di toko kami\n 1. Monitor\n 2. PC Rakitan\nSilahkan pilih untuk membeli barang ");
        scanf("%d", &list);

        switch (list) {
            case 1:
                printf("\nList Harga Monitor\n 1. Monitor 20inc : Rp1.200.000 \n 2. Monitor 24inc Rp1.500.000\n\n Janis monitor yang anda pilih : ");
                scanf("%d", &tempP);
                printf("\nJumlah yang ingin anda beli : ");
                scanf("%d", &tempJ);
                if (tempP==1){
                    mon = mon + (mon20*tempJ);
                }
                else if (tempP==2){
                    mon = mon + (mon24*tempJ);
                }
                else{
                    printf("\nTolong pilih dengan benar");
                }
                printf("\npakah anda masih ingin berbelanja? (1.iya/2.tidak) ");
                scanf("%d", &fix);
                break;

            case 2:
                printf("List Harga PC rakitan\n 1. Asal nyala : Rp300.000 \n 2. PC geming : Rp10.000.000\n\n Jenis pc yang anda pilih : ");
                scanf("%d", &tempP);
                printf("\nJumlah yang ingin anda beli : ");
                scanf("%d", &tempJ);
                if (tempP==1){
                    pc = pc + (pc1*tempJ);
                }
                else if (tempP==2){
                    pc = pc + (pc2*tempJ);
                }
                else{
                    printf("\nTolong pilih dengan benar");
                }
                printf("\npakah anda masih ingin berbelanja? (1.iya/2.tidak) ");
                scanf("%d", &fix);
                break;

            default:
                printf("\nTolong pilih dengan benar");

        }

    }
    total = mon + pc;
    printf("\nTotal harga belanja anda adalah RP%d",total);
}

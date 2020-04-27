#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,elemanSayisi=0,KombinasyonSayisi=1,sayac=0,atlama_degeri;
    static int matris[100000][24];

    printf("Lutfen eleman sayisini cok buyuk girmeyiniz.\n eleman sayisini giriniz.");
    scanf("%d",&elemanSayisi);
    printf("    kumeniz %d elemanli olacak",elemanSayisi);

    /*Elemanlarý ekrana yazdýrdýk.*/
    printf("\n Elemanlar :");
        for(i=0;i<elemanSayisi;i++){
            printf("  %c ",65+i);
            KombinasyonSayisi=KombinasyonSayisi*2;//kombinasyon sayýsýný belirledik.
        }
     printf("\n Olusacak kombinasyon sayisii :%d",KombinasyonSayisi);
     printf("\n \n");

     /*Matrisi bütün kombinasyonlar olacak þekilde 1 ve 0 lar ile doldurduk*/
    atlama_degeri=KombinasyonSayisi/2;
     for(i=0;i<elemanSayisi;i++){
        j=atlama_degeri;
            while(matris[KombinasyonSayisi-1][i]!=1){
                matris[j][i]=1;
                j++;
                sayac++;
                    if(sayac==atlama_degeri){
                        j=j+atlama_degeri;
                        sayac=0;
                    }
            }
        atlama_degeri=atlama_degeri/2;
     }

    for(i=0;i<KombinasyonSayisi;i++){
        for(j=0;j<elemanSayisi;j++){
            printf("%d    ",matris[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<elemanSayisi;i++){
        for(j=0;j<KombinasyonSayisi;j++){
            if(matris[j][i]==1){
            matris[j][i]=65+i;
            }
        }
    }

    printf("\n \n");
    printf("bos kume");
        for(i=0;i<KombinasyonSayisi;i++){
            for(j=0;j<elemanSayisi;j++){
                printf("%c",matris[i][j]);
            }
            printf("\n");
        }

return 0;
}

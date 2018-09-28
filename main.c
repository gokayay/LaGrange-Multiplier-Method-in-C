#include <stdio.h>


// sml2 ||| Gökay AY ||| 1306160093

float xDegerler[30],yDegerler[30],deger;
float xupper=1, xlower=1, sonuc=0;
int terimSayisi;
int i,j,devam=1; //sayaclar

// duzenli durmasi icin deger dondurmeyen fonksiyonlar olusturduk

void degerlerim();
void laGrange();

int main()
{
        degerlerim();
        laGrange();

}



void degerlerim(){



   printf("Lutfen girmek istediginiz deger sayisini giriniz:\n");
   scanf("%d",&terimSayisi);

   printf("Lutfen x degerlerini ve buna karsilik gelen f(x) degerlerini birer bosluk birakarak giriniz:\n");

   for(i=0;i<terimSayisi;i++){

        scanf("%f",&xDegerler[i]);
        scanf("%f",&yDegerler[i]);
   }

   printf("Girdiginiz degerler asagida tablolanmistir...\n");

    for(i=0; i<terimSayisi; i++)
    {
        printf("||| %0.3f |||||| %0.5f |||\n",xDegerler[i],yDegerler[i]);
    }


}

void laGrange(){


       while(devam==1)
    {
        sonuc=0;
        printf("\nSonucuna ulasmak istediginiz x degerini giriniz:");
        scanf("%f",&deger);
        for(i=0; i<terimSayisi; i++)
        {
            xupper=1;
            xlower=1;
            for(j=0; j<terimSayisi; j++)
            {
                if(j!=i)
              {
                    xupper=xupper*(deger-xDegerler[j]);
                    xlower=xlower*(xDegerler[i]-xDegerler[j]);
                }
            }
            sonuc=sonuc+((xupper/xlower)*yDegerler[i]);
        }
        printf("\n\ny'nin degeri budur: %f",sonuc);

        printf("\n\nDevam etmek ve yeni bir x degeri vermek icin 1'e basiniz, Cikmak icin herhangi bir tusa basiniz!");
        scanf("%d",&devam);

    }



}

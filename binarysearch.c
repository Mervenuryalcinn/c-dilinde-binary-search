#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int a,b,c;
	int dizi[]={4,8,3,84,47,76,9,24,68};
	//  Birinci for döngüsü dizinin tüm elemanlarýný gezinirken,
	// ikinci for döngüsü her elemandan sonraki elemanlarý kaydýrarak karþýlaþtýrýr.
	//döngü tamamladýktan sonra küçükten büyüge sýralanmýþ olur
	for(a=0;a<8;a++){
	
		for(c=0;c<7;c++){
			if(dizi[c]>dizi[c+1]){
				b=dizi[c+1];
				dizi[c+1]=dizi[c];
				dizi[c]=b;
			}
		}
		
		}
	// dizin 0 ile baþlayýp dizin 7 ile biten 8 kez yinelenir yani 1 eleman 0.indexe yerleþir 
	for(a=0;a<8;a++){
	
	printf("%d,",dizi[a]);
}
//kullanýcýlarý tanýmladýk
		int dusuk=0;
		int yuksek=7;
		int d=0;
		int e;
	//kullanýcýdan aranacak elemaný istedik
	printf("\ndizideki aranacak elemani giriniz:");
	scanf("%d",&e);
	
while(dusuk<=yuksek){
	//ortayý tanýmladýk
	int orta=dusuk+(yuksek-dusuk)/2;
	//aranacak eleman ortancaya eþitse
	if(dizi[orta]==e){
		d=1;
		printf("aradiginiz eleman:%d.sirada bulundu\n",orta);
		break;
		
	}
	//aranacak eleman ortancadan büyükse
	else if(dizi[orta]<e){
		//dizi üst yarýsýna geçmek için düþük degiþkenini günceller
		dusuk=orta+1;
	}
	//aracanak eleman ortancadan küçükse 
	else {	
		//dizinin al yarýsýna geçmek için yüksek degiþkenini günceller
		yuksek=orta-1;
		
	}
}
	if(d==0){
		//kullanýcýdan aranan elemanýn dizide olmadýgýný yazdýrdýk
		printf("aradiginiz eleman dizide bulunamadi.\n");
	}
	return 0;
}


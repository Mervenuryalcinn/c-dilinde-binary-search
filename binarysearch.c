#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int a,b,c;
	int dizi[]={4,8,3,84,47,76,9,24,68};
	//  Birinci for d�ng�s� dizinin t�m elemanlar�n� gezinirken,
	// ikinci for d�ng�s� her elemandan sonraki elemanlar� kayd�rarak kar��la�t�r�r.
	//d�ng� tamamlad�ktan sonra k���kten b�y�ge s�ralanm�� olur
	for(a=0;a<8;a++){
	
		for(c=0;c<7;c++){
			if(dizi[c]>dizi[c+1]){
				b=dizi[c+1];
				dizi[c+1]=dizi[c];
				dizi[c]=b;
			}
		}
		
		}
	// dizin 0 ile ba�lay�p dizin 7 ile biten 8 kez yinelenir yani 1 eleman 0.indexe yerle�ir 
	for(a=0;a<8;a++){
	
	printf("%d,",dizi[a]);
}
//kullan�c�lar� tan�mlad�k
		int dusuk=0;
		int yuksek=7;
		int d=0;
		int e;
	//kullan�c�dan aranacak eleman� istedik
	printf("\ndizideki aranacak elemani giriniz:");
	scanf("%d",&e);
	
while(dusuk<=yuksek){
	//ortay� tan�mlad�k
	int orta=dusuk+(yuksek-dusuk)/2;
	//aranacak eleman ortancaya e�itse
	if(dizi[orta]==e){
		d=1;
		printf("aradiginiz eleman:%d.sirada bulundu\n",orta);
		break;
		
	}
	//aranacak eleman ortancadan b�y�kse
	else if(dizi[orta]<e){
		//dizi �st yar�s�na ge�mek i�in d���k degi�kenini g�nceller
		dusuk=orta+1;
	}
	//aracanak eleman ortancadan k���kse 
	else {	
		//dizinin al yar�s�na ge�mek i�in y�ksek degi�kenini g�nceller
		yuksek=orta-1;
		
	}
}
	if(d==0){
		//kullan�c�dan aranan eleman�n dizide olmad�g�n� yazd�rd�k
		printf("aradiginiz eleman dizide bulunamadi.\n");
	}
	return 0;
}


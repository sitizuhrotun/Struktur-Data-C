#include<stdio.h>
#include<conio.h>

struct pola{
    int jumlah,npm;
	char nama[50]; 
} pola;

int bintang_atas(int i){
    int j=0;

    for(j;j<i;j++){
		printf("*");
	}
	printf("\n");

    if(i<pola.jumlah){
    	return bintang_atas(i+1);
	}
    else 
		return 0;
}

int bintang_bawah(int i) {
    int j=i;
    
	for(i;i>0;--i){
    	printf("*");	
	} 
    
	if(j>0){
        printf("\n");
        return bintang_bawah(j-1);
    }
    
	if(j == 0){
    	return bintang_atas(j+2);
	}	
    
	else 
		return 0;
}

int main() {
	printf ("\t\tPROGRAM POLA SEGITIGA\n\n\n");
	printf ("masukkan nama:");
	gets (pola.nama);						
	printf ("masukkan npm:");
	scanf ("%d",&pola.npm);
	printf ("\n");
	
	if (pola.npm%2==1){
		pola.jumlah=9;
		printf ("panjang pola segitiga adalah : %d",pola.jumlah);
	}
	
	else{
		pola.jumlah=8;
		printf ("panjang pola segitiga adalah : %d",pola.jumlah);
	}
	
	printf("\n\n");
    bintang_bawah(pola.jumlah); 
}

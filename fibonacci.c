#include <stdio.h>
#include <stdlib.h>

int fibonacci(int angka) {
    if ((angka == 0) || (angka == 1)) {
        return 1;  
    } 
	else {
        return fibonacci(angka-1) + fibonacci(angka-2);
    }
}

int main() {
	int i,n;
	
	printf ("Nama \t: Siti Zuhrotun Nafi'atur Rohmah");
	printf ("\nNPM \t: 19081010067");
	printf ("\n\n\t\t\tPROGRAM DERET FIBONACCI\n");

    printf("\nMasukkan jumlah Bilangan : ");
    scanf("%d",&n);
    printf ("\nDeret fibonacci sampai batas %d: \n",n);
	for (i=0;i<n;i++){
        printf(" %d ",fibonacci(i));
    }  
    
	return 0;
}

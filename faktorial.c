#include <stdio.h>
#include <stdlib.h>

int faktorial(int angka) {
  if(angka <= 1){
  	return 1;
  }
  return angka*faktorial(angka-1);
}

int main(){
  int n, hasil;
  
  printf ("Nama \t: Siti Zuhrotun Nafi'atur Rohmah");
  printf ("\nNPM \t: 19081010067");
  printf ("\n\n\t\t\tPROGRAM MENGHITUNG NILAI FAKTORIAL\n");
  
  printf("\nMasukkan nilai yang ingin dihitung: ");
  scanf("%d",&n);
  
  hasil = faktorial(n);
  printf("\nHasil faktorial dari %d adalah %d",n,hasil);
  
  return 0;
}

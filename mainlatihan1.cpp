#include <stdio.h>

int main(void){
  int n, i, data, N_min,N_max;

  printf("\nJumlah data (n): ");
  scanf("%d", &n);

  i=1;
  while(i<=n){
    printf("Data ke-%d : ", i);
    scanf("%d", &data);

    //Deklrasi nilai awal minimum
    if(i == 1){ N_min = data; }

    //Eksekusi nilai maksimum
    N_max = (N_max<data) ? data : N_max;

    //Eksekusi nilai minimum
    N_min = (N_min>data) ? data : N_min;

    i++;
 }

 //Menampilkan ouput dari hasil eksekusi
 printf("\nNilai maksimum : %d\n", N_max);
 printf("Nilai minimum  : %d\n\n", N_min);

 return 0;
}

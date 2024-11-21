#include <stdio.h>

  int main () {
  	float canh, chieucao, chuvi, dientich;
	  printf("nhap do dai canh tam  giac:");
	  printf("nhap chieu cao cua tam giac:"); 
	  scanf("%f",&canh);
	  scanf("%f",&chieucao); 
	    chuvi = 3 * canh;
	    dientich = 0.5 * canh * chieucao;
	  printf("chu vi hình tam giac la: %.2f\n",chuvi);
	  printf("dien tich cua tam giac la: %.2f\n",dientich);
	  return 0; 
  } 

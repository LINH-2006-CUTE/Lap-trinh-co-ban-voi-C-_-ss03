#include <stdio.h> 

  int main() {
  	float diemtoan , diemvan , diemanh , tongdiem , diemtrungbinh;
	  printf("nhap diem toan :");
      printf("nhap diem van :");
      printf("nhap diem anh :");
      scanf("%f",&diemtoan); 
      scanf("%f",&diemvan); 
      scanf("%f",&diemanh); 
       tongdiem = diemtoan + diemvan + diemanh;
	   diemtrungbinh = (diemtoan + diemvan + diemanh) / 3;
	  printf("tong diem la: %.2f\n",tongdiem);
	  printf("diem trung binh la ;%.2f",diemtrungbinh);
	  
	  return 0; 
  }

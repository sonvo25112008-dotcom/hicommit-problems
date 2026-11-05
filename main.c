#include <stdio.h>
int main() {
  int dtb, drl;
  scanf("%f%f", dtb, &drl);
  if (dtb >= 9.0){
    printf ("XUAT_SAC",&dtb);
  }
  else if (8.0<=dtb && dtb<9.0){
    printf ("GIOI", &dtb);
  }
  else if (7.0<=dtb && dtb<8.0){
    printf ("KHA", &dtb);
  }
  else (dtb<7.0){
    printf ("KHONG_DAT", &dtb);
  }
  return 0;
}
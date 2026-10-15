#include <stdio.h>

int main() {
int a,b,c;
	scanf ("%d%d%d", &a, &b, &c);
	if (a>b && a>c){
		printf ("so lon nhat la: %d", a);}
	if (b>a && b>c){
		printf ("so lon nhat la: %d", b);}		
	else{
		printf ("so lon nhat la: %d", c);
	}
  return 0;
}
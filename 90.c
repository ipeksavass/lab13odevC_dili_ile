#include<stdio.h>
int kareAl(int);

int main(){
	int a;
	printf("bir a degeri giriniz:");
	scanf("%d",&a);
	printf("sonuc=%d",kareAl(a));
	
}
int kareAl(int a){
	int x;
	x=a*a;
	return x;
}



#include <stdio.h>
void asalKontrol(int);
void polindromKontrol(int);

int main(){
	int n;
	printf("bu fonksiyon sayinin asal mi polindrom mu yoksa her ikisi de mi oldugunu anlamaya yariyor\n");
	printf("bir n sayisi giriniz:");
	scanf("%d",&n);
	asalKontrol(n);
	polindromKontrol(n);
	
}

void asalKontrol(int n){
	if(n%2==0)	printf("asal degil.\n");
	else if (n%3==0)		printf("asal degil.\n");
	else if(n%5==0)		printf("asal degil.\n");
	else if(n%7==0)		printf("asal degil.\n");
	else		printf("asaldir.\n");
}

void polindromKontrol(int n){
	int i,sum=0,a,b;
	b=n;
	for(i=0;n>0;i++){
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	if (sum==b)	printf("polindrom sayidir.");
}

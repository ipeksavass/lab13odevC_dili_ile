#include <stdio.h>
void TekCift(int);

int main(){
	int n;
	printf("Bu fonksiyon girilen sayinin teklik ciftligini kontrol eder.\n");
	printf("bir n sayisi giriniz :");
	scanf("%d",&n);
	TekCift(n);
	return 0;	
}

void TekCift(int n){
	if(n%2==0){
		printf("%d sayisi cifttir.",n);
	}
	else
		printf("%d sayisi tektir",n);
	
}

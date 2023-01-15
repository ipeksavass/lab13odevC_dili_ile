#include<stdio.h>
float ortAL(int,int,int,int,int);

int main(){
	int n1,n2,n3,n4,n5;
	printf("Lutfen bes deger giriniz:");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	printf("ort=%.1f",ortAL(n1,n2,n3,n4,n5));
	return 0;
}

float ortAL(int n1,int n2,int n3,int n4,int n5){
	float x;
	x=(n1+n2+n3+n4+n5)/5;
	return x;
	
}

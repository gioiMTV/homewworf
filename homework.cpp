#include <stdio.h>
#include <math.h>


int b5( int n){
	int m = n;
	long long rev = 0;
	while( n != 0){
		rev = rev * 10 + n%10;
		n/= 10;
	}
	if( rev == m) return 1;
	return 0;
}

int b6( int n){
	long long rev =0;
	while( n != 0){
		rev = rev * 10 + n%10;
		n/=10;
	}
	return rev;
}

int b8( int n, int sdn){
	if( n == 0) return sdn;
	else {
		sdn = sdn*10 + n%10;
		return b8( n/10, sdn);
	}
}	

int b9( float a, float n){
	double m = pow(a,n);
	printf("%fl", m);
}

double b9c2( float a, float n){
	if( n == 0) return 1;
	else return a * b9c2( a, n-1);
}
//	float a,n;
//	printf("nhap a : ");
//	scanf("%f", &a);
//	
//	do{
//		printf("nhap n > 0 : ");
//		scanf("%f", &n);	
//	}
//	while( n<0);
//	double y = b9c2(a,n);	printf("%f", y);             bai 9


int main() {


}






	


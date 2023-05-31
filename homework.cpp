#include <stdio.h>

void bubbleSort( int a[], int n){
	for( int i = 0 ; i < n -1 ; i++){
		for( int j = 0; j < n - i -1; j++){
			if( a[j] > a[j+1]){
				int tmp =  a[j];
				a[j ] = a[j +1];
				a[j + 1] = tmp;
			}
		}
	}
}
void bubbleSort2( int a[], int n){
	for( int i = 0 ; i < n -1 ; i++){
		for( int j = 0; j < n - i -1; j++){
			if( a[j] < a[j+1]){
				int tmp =  a[j];
				a[j ] = a[j +1];
				a[j + 1] = tmp;
			}
		}
	}
	for( int  i = 0 ; i < n ; i++) printf("%d ", a[i]);
}

int cnt[10000]= {0};
void nhap( int a[], int n){
	for( int i = 0 ; i < n ; i++) scanf("%d", &a[i]);
}
void xuat( int a[], int n){
	for( int i = 0 ; i<n ; i++) printf("%d ", a[i]);
}

void cauB(int a[], int n){
	for( int  i=0 ; i < n ; i++){
		cnt[a[i]]++;
	}
	for( int i = 0 ; i <n ; i++){
		if( cnt[a[i]] != 0){
			printf("%d %d \n", a[i], cnt[a[i]]);
			cnt[a[i]] = 0;
		}
	}
}

void cauC( int a[], int n){
	int nn = -999, it = 999, res, bes;
	for( int  i=0 ; i < n ; i++){
		cnt[a[i]]++;
		if( cnt[a[i]]  > nn){
			res = a[i];
			nn = cnt[a[i]];
		}
		else if( cnt[a[i]] < it){
			bes = a[i];
			it = cnt[a[i]];
		}
	}
	printf("%d %d \n%d %d", res , nn, bes, it);
} 

void cauD( int a[], int n){
	bubbleSort2(a,n);
}

void cauE( int a[], int n){
	bubbleSort( a,n);
	int x; scanf("%d", &x);
	for( int i = n ; i >=  0; i--){
		if( a[i] == x){
			printf("%d", i + 1);
			break;
		}
	}	
}

void cauF( int a[], int n){
	bubbleSort( a,n);
	int x; scanf("%d", &x);
	for( int i = 0 ; i < n ; i++){
		if( a[i] == x){
			printf("%d", i + 1);
			break;
		}
	}	
}

void cauG( int a[], int n){
	bubbleSort(a,n);
	printf("%d", a[0]);
}

void cauH( int a[], int n){
	int min = -1, max = -1;
	for( int i = 0 ; i < n ; i++){
		if( a[i] > 0 && ( max = -1 || a[i] < max)) max = a[i];
		if( a[i] < 0 && ( min = -1 || a[i] > min)) min = a[i];
	}
	printf("%d\n%d", max, min);
}

void cauI( int a[], int n){
	int k; scanf("%d", &k);
	for( int i = 0 ; i < n ; i++){
		if( a[i] == k){
			for( int j = i ; j < n -1 ; j++){
				a[j] = a[j + 1];
			}
			--i;
			--n;
		}
	}
	xuat(a,n);
}

void cauK( int a[], int n){
	int sum =0;
	for( int  i = 0 ; i < n ; i++){
		if( a[i] % 2 == 0) sum+= a[i];
	}
	printf("%d", sum);
}

void cauL( int a[], int n){
	int sum = 0;
	for( int i = 0 ; i < n ;i++){
		if( a[i] > 0 && a[i] % 2 != 0) sum += a[i];
	}
	printf("%d", sum);
}

void cauM( int a[], int n){
	int sum = 0;
	for( int i = 0 ; i < n ;i++){
		if( a[i] > 0 && a[i] % 2 == 0) sum += a[i];
	}
	printf("%d", sum);
}

void cauN( int a[], int n){
	int sum = 0;
	for( int i = 0 ; i < n ;i++){
		if( a[i] < 0 && a[i] % 2 != 0) sum += a[i];
	}
	printf("%d", sum);
}

void cauO( int a[], int n){
	int sum = 0;
	for( int i = 0 ; i < n ;i++){
		if( a[i] < 0 && a[i] % 2 == 0) sum += a[i];
	}
	printf("%d", sum);
}

void cauP( int a[], int n){
	int m, k;
	scanf("%d%d", &m, &k);
	int cnt = 0;
	for( int  i = 0 ; i < n ; i++){
		if( a[i] % m == 0 && a[i] % k != 0) cnt++;
	}
	printf("%d", cnt);
}

void cauQ( int a[], int n){
	int m, k;
	scanf("%d%d", &m, &k);
	int cnt = 0;
	for( int  i = 0 ; i < n ; i++){
		if( a[i] % m == 0 && a[i] % k != 0) cnt+= a[i];
	}
	printf("%d", cnt);
}

void cauR( int a[], int n){
	int m, sum = 0;
	scanf("%d", &m);
	for( int  i= 0 ; i < n ; i++){
		if( a[i] % m == 0 && a[i] % 4 != 0) sum += a[i];
	}
	printf("%d", sum);
}

void cauS( int a[], int n){
	int sum = 0 , cnt = 0;
	for( int  i= 0 ; i < n ; i++){
		if( a[i] < 0 && a[i] % 2 == 0){
			cnt++;
			sum += a[i];
		}
	}
	int tb = sum / cnt;
	printf("%d", tb);
}
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	nhap( a, n);
	cauS(a,n);
}


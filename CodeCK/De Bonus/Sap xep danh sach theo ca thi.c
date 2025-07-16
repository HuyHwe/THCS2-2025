#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct TS{
	char ma[20];
	char ten[20];
	char dob[20];
};

typedef struct TS TS;

int comp(const void* p1, const void* p2) {
	TS* a = (TS*)p1;
	TS* b = (TS*)p2;
	return (atoll(a->ma) > atoll(b->ma));
}

int main(){
	long long n;
	int i;
	scanf("%lld",&n);
	scanf("\n");
	TS ts[n+1];
	for(i=0;i<n;i++){
		gets(ts[i].ma);
		gets(ts[i].ten);
		gets(ts[i].dob);
	}
	qsort(ts,n,sizeof(ts[0]),comp);
	for(i=0;i<n;i++){
		printf("TIN%s, %s, %s\n",ts[i].ma,ts[i].ten,ts[i].dob);
	}
	return 0;
}
/* 
3
002
Nguyen Van A
12/12/1994
002
Nguyen Van B
01/09/1994
002
Nguyen Van C
06/07/1994
 */
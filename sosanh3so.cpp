#include<stdio.h>
int main(){
	int a,b,c;
	printf("moi ban nhap so thu nhat: ");
	scanf("%d",&a);
		printf("moi ban nhap so thu hai: ");
	scanf("%d",&b);
		printf("moi ban nhap so thu ba: ");
	scanf("%d",&c);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	if(a>c){
	 int temp=a;
	 a=c;
	 c=temp;
	}
	if(b>c){
	int	temp=b;
		b=c;
		c=temp;
	}
	printf("so theo thu tu tu nho den lon ban nhap la: %d %d %d",a,b,c);
	return 0;
}

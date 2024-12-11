#include <stdio.h>

int main() {
    int tiendien,sodien,thangtruoc,thangnay,giadien;
    printf("nhap so dien thang truoc: ");
    scanf ("%d",&thangtruoc);
    printf("nhap so dien thang nay: ");
    scanf ("%d",&thangnay);
    
    sodien = thangnay - thangtruoc;
    
    if ( 0<sodien && sodien<50){
    	giadien=10000;
	}
	else if(50<=sodien && sodien<100){
		giadien=15000;
	}
	else if (100<=sodien && sodien<150){
		giadien=20000;
	}
	else if(150<=sodien && sodien<200){
		giadien=25000;
	}
	else if(200<=sodien){
		giadien=30000;
	}
	else{
		printf("so dien khong hop le, xin moi nhap lai");
		return 1;
	}
	
	tiendien = sodien * giadien;
	
	printf("tien dien thang nay cua ban la: %d\n",tiendien);
	
	return 0;
    

    
    return 0;
}


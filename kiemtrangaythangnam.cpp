#include <stdio.h>

	int  main() {
		
		int ngay, thang,nam;
		
		printf("nhap ngay ban muon kiem tra: ");
		scanf("%d",&ngay); 
		 printf("nhap thang ban muon kiem tra: ");
		scanf("%d",&thang); 
		printf("nhap nam ban muon kiem tra: ");
		scanf("%d",&nam);
		
			if (thang > 12 || thang < 1){
			printf("ngay thang nam khong hop le");
			return 1;
			}
			else if( thang = 2){
				if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
					if ( ngay >=1 && ngay <= 29){
						printf("ngay:%d thang:%d nam:%d hop le",ngay,thang,nam);
					}
				}
				else{
					if ( ngay >=1 && ngay <= 28){
						printf("ngay:%d thang:%d nam:%d hop le",ngay,thang,nam);
				}
			}
		}
			else if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12){
				if ( ngay >=1 && ngay <= 31){
						printf("ngay:%d thang:%d nam:%d hop le",ngay,thang,nam);
					}
				else{
				printf("ngay thang nam khong hop le");
						}
					
			}
		
			else if(thang==4||thang==6|| thang==9||thang==11){
				if ( ngay >=1 && ngay <= 30){
						printf("ngay:%d thang:%d nam:%d hop le",ngay,thang,nam);
						}
				else{
				printf("ngay thang nam khong hop le");
						}				
					}
			else{
				printf("ngay thang nam khong hop le");
			}
			return 0;
		}
				
			
		
	

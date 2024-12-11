#include <stdio.h>
using namespace std;

	int main(){
		int so;
		printf ("nhap so ban muon kiem tra: ");
		scanf("%d",&so);
		
		if (so % 2 == 0){
			printf("so nay la so chan");
		}
		else {
			printf("so nay la so le");
		}
		return 0;
	} 

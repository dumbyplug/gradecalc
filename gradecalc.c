#include <stdio.h>


void ayar_dosyası_yarat(char **dərs_adları, int **dəyərlər, int dərs_sayı){
}

/*
void ayar_dosyası_yarat_arayüz(){
	int sıra0, sıra1, dərs_sayı, sınaq_sayı, dəyər;
	char dərsin_adı[64], yığışma[128];
	FILE *dosya_göstərən;

	dosya_göstərən = fopen("dəyərlər.byd", "w");

	printf("Dərslərin sayı: ");
	scanf("%d", &dərs_sayı);

	sıra0 = 0;
	while(sıra0 < dərs_sayı){
		printf("Dərs %d adı: ", sıra0);
		scanf("%s", &dərsin_adı);
			
		sprintf(yığışma, ">%s\n", dərsin_adı);
		fputs(yığışma, dosya_göstərən);

		printf("---\nDərs %d dəyəri: ", sıra0);
		scanf("%d", &dəyər);
		
		sprintf(yığışma, "%d\n", dəyər);
		fputs(yığışma, dosya_göstərən);

		printf("---\nSınaqların sayı: ");
		scanf("%d", &sınaq_sayı);

		sprintf(yığışma, "%d\n", sınaq_sayı);
		fputs(yığışma, dosya_göstərən);

		printf("---------------------\n");
		sıra1 = 0;
		while(sıra1 < sınaq_sayı){
			printf("Sınaq %d dəyəri: ", sıra1);
			scanf("%d", &dəyər);

			sprintf(yığışma, "%d\n", dəyər);
			fputs(yığışma, dosya_göstərən);
			
			sıra1++;
		}
		fputs("<\n", dosya_göstərən);
		sıra0++;
		printf("\n>==========================<\n");
	}
	fclose(dosya_göstərən);
}
*/

void balı_hesabla(){
	FILE *dosya_göstərən;
	dosya_göstərən = fopen("dəyərlər.byd", "r");

	char yığışma[128];
	while(fgets(yığışma, 128, dosya_göstərən)){
		printf("%c", yığışma[0]);
	}
	fclose(dosya_göstərən);
}

int main(void){
	int    dərs_sayı;
	char **dərs_adları;
	int  **dəyərlər;
	return 0;
}

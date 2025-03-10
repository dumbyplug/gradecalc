#include <stdio.h>

void bir_işarə_qoş(char *yazı, char işarə){
	int sıra;
	for(sıra = 0; yazı[sıra] != 0; sıra++);
	yazı[sıra] = işarə;
	yazı[sıra + 1] = 0; 

}

void ayar_dosyası_yarat(){
	int sıra, dərs_sayı;
	char yığışma[128];
	FILE *dosya_göstərən;

	dosya_göstərən = fopen("dəyərlər.bad", "w");


	printf("Dərslərin sayı: ");
	scanf("%d", &dərs_sayı);

	sıra = 0;
	while(sıra < dərs_sayı){
		printf("Dərs %d adı: ", sıra);
		scanf("%s", &yığışma);
		bir_işarə_qoş(yığışma, '\n');
		fputs(yığışma, dosya_göstərən);

		yığışma[0] = 0;
		sıra++;
	}
	fclose(dosya_göstərən);
}

int main(void){
	ayar_dosyası_yarat();
	return 0;
}

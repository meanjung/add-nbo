#include<stdint.h>
#include<stdio.h>
#include<netinet/in.h>

int main(){
	char name[] = "홍민정";
	char mobile[] = "6347";
	printf("[bob11]add-nbo[%s%s]\n", name, mobile);
	/*****************/
	FILE *fp1 = fopen("thousand.bin","r");
	char buffer1[5]={0, };
	
	FILE *fp2 = fopen("five-hundred.bin","r");
	char buffer2[5] = {0, };

	if(fp1 && fp2){
		fread(buffer1, 5, 1, fp1);
		fclose(fp1);

		fread(buffer2, 5, 1, fp2);
		fclose(fp2);

		uint32_t value1 = ntohl(*(uint32_t*)buffer1);
		uint32_t value2 = ntohl(*(uint32_t*)buffer2);
		uint32_t value3 = value1 + value2;
		printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", value1, value1, value2, value2, value3, value3);
	}
	return 0;
}

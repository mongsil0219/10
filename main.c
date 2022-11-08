#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE*fp = NULL;
	
	fp = fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("파일을 못 열음\n");
		return;
	}
	
	fputc('a',fp);
	fputc('b',fp);
	fputc('c',fp);
	
	fclose(fp);
	
	return 0;
}

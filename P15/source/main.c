#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	fptr1 = fopen("E://106360220_���K��/welcome.txt", "r");
	fptr2 = fopen("E://106360220_���K��/output.txt", "w");
	if ((fptr1!= NULL) && (fptr2!= NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
		system("pause");
		return 0;
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}
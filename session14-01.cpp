#include <stdio.h>

int main(){
	char str[100];
	printf("Moi ban nhap chuoi: ");
	fgets(str, 100, stdin);
	int length=0;
	for(int i=0; str[i]!='\0'; i++){
		length++;
	}
	printf("Chuoi ban nhap la: %s\n", str);
	printf("Chuoi co do dai la: %d", length);
	return 0;
}
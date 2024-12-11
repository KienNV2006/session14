#include <stdio.h>
#include <string.h>

int main(){
	char str[16]="Nguyen Van Kien";
	int length=strlen(str);
	int count=0;
	char letter;
	printf("Moi ban nhap mot ky tu: ");
	scanf("%c", &letter);
	for(int i=0; str[i]!='\0'; i++){
		if(letter==str[i]){
			count++;
		}
	}
	printf("Co %d ky tu %c trong chuoi\n", count, letter);
	return 0;
}
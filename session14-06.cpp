#include <stdio.h>

int main(){
	char str[]="1 con meo an 2 con chuot";
	int count=0;
	for(int i=0; str[i]!='0'; i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			count++;
		}
	}
	printf("%s\n", str);
	printf("Chuoi tren co %d ky tu chu cai", count);
	return 0;
}
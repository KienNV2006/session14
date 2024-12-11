#include <stdio.h>

int main(){
	char str[16]="Nguyen Van Kien";
	int count=0;
	int flag=0;  //kiem tra moi tu chi duoc dem 1 lan khi gap phai ky tu dau tien cua tu
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]!=' '){
			if(flag==0){
				count++;
				flag=1;
			}
		}else{
			flag=0;
		}
	}
	printf("Chuoi tren co %d tu", count);
	return 0;
}
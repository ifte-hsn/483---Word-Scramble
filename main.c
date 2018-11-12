#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char str[1000];
	int i, j, len, lim;

	while(gets(str)) {
		len = strlen(str);
		lim = 0;
		for(i = 0; i <= len; i++) {
			if(str[i] == ' ') {
				for(j = i-1; j >= lim; j--) {
					printf("%c", str[j]);
				}
				printf(" ");
				lim = i+1;
			}

			if(i==len) {
                for(j=i-1; j>=lim; j--){
                    printf("%c", str[j]);
                }
                printf("\n");
			}
		}
	}
	return 0;
}

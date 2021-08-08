#include <stdio.h>

int main(){
	int c = 0;
	while((c = getchar()) != EOF){
		if(c == ' '){
			while((c = getchar()) == ' ');
			putchar(' ');
			putchar(c);
		} else {
			putchar(c);
		}
	}
}

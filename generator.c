#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// function to replace s with th
char* esses() {
	char t = 't';
    char h = 'h';
    putchar(t);
    putchar(h);
}

int work() {
	char more = 'Y';
	char sentence[100];
	
	// continue getting sentencs(s) from user until N is entered

	do {
		// get current sentence from user
		printf("\nEnter a sentence: \n");
		scanf (" %[^\n]%*c", sentence);
		
		int str_leng = strlen(sentence);
		
		
		for(int i = 0; i < str_leng; i++) {
			int next_char = i + 1;
			if(sentence[i] == 's' || sentence[i] == 'S') {
				if(sentence[next_char] == 's' || sentence[next_char] == 'S') {
					continue;
				} else {
					esses();
				}
			} else {
				printf("%c", sentence[i]);
			}
		}
		
		// ask for another go
		printf("\nWant another sentence? Y/N: ");
		scanf(" %c", &more);
		
	} while(more == 'Y' || more == 'y');
	
}

int main() {
	work();
}

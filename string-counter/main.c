#include <ctype.h>
#include <stdio.h>
#include <string.h>

void vowels(char sentence[]) {
  int count = 0;
  for (int i = 0; i < strlen(sentence); i++) {
    char c = sentence[i];
    if (c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u') {
      count++;
    }
  }
  printf("%d vowels exist\n", count);
}

void constants(char sentence[]) {
  int count = 0;
  for (int i = 0; i < strlen(sentence); i++) {
    char c = sentence[i];
    if (c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u') {
      continue;
    }
    count++;
  }
  printf("%d constants exist\n", count);
}

void digits(char sentence[]){
int count = 0;
  for (int i = 0; i < strlen(sentence); i++) {
    char c = sentence[i];
		if (isdigit(c)) {
			count++;
		}
  }
  printf("%d digits exist\n", count);
}

void space(char sentence[]){
int count = 0;
  for (int i = 0; i < strlen(sentence); i++) {
    char c = sentence[i];
		if (c == ' ') {
			count++;
		}
  }
  printf("%d white space exist\n", count);
}


int main(int argc, char *argv[]) {
  // count no. of vowels, constants, digits and spaces in a string
	char sentence[150];
	printf("enter a sentence: ");
	scanf("%[^\n]s", sentence);
	vowels(sentence);
	constants(sentence);
	digits(sentence);
	space(sentence);
  return 0;
}

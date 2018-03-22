#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

const unsigned int LENGTH = 1024; // The maximum length of the string.

char PrintMenu(char[]); // Prints a menu and returns the modified string.

void FixCapitalization(char[]); // Fixes the capitalization.
void ReplaceExclamation(char[]); // Replaces '!' with '.'
void ShortenSpace(char[]); // Replaces double and triple spaces with a single
                           // space.
void Sterilize(char[]); // Replaces the first '\n' with a '\0'.

int GetNumOfNonWSCharacters(char[]); // Gets the number of non-whitepace
                                     // characters.

int GetNumOfWords(char[]); // Gets the number of words.

int main () {
	char op;

	char str[LENGTH];

	printf("Enter a sample text:\n");
	fgets(str, LENGTH, stdin);

	Sterilize(str);

	printf("\n");

	printf("You entered: %s\n", str);

	printf("\n");

	do {

		op = PrintMenu(str);

		switch(op) {

			case 'c':
			printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(str));
			break;

			case 'w':
			printf("Number of words: %d\n", GetNumOfWords(str));
			break;

			case 'f':
			FixCapitalization(str);
			printf("Edited text: %s\n", str);
			break;

			case 'r':
			ReplaceExclamation(str);
			printf("Edited text: %s\n", str);
			break;

			case 's':
			ShortenSpace(str);
			printf("Edited text: %s\n", str);
			break;

			case 'q':
			break;

			default:
			break;
		}
		printf("\n");

	} while (op != 'q');

	return 0;
}

char PrintMenu(char in[]) {

	char op[LENGTH];

	printf("MENU\n");
	printf("c - Number of non-whitespace characters\n");
	printf("w - Number of words\n");
	printf("f - Fix capitalization\n");
	printf("r - Replace all !'s\n");
	printf("s - Shorten spaces\n");
	printf("q - Quit\n");

	printf("\n");

	printf("Choose an option:");

	scanf("\n%s", op);

	return op[0];
}

void Sterilize(char str[]) {                               // This is a more in-depth
	for (int i = 0; i < LENGTH; i++) {                 // description of what this
		str[i] = (str[i] == '\n') ? '\0' : str[i]; // function does. we just
	}                                                  // loop through until we
	return;                                            // find a '\n' and replaces
}                                                          // it with a '\0'

void FixCapitalization(char str[]) {

	bool sentenceFlag = true;

	for (int i = 0; i < strlen(str); i++) {

		if (str[i] == '.' || str[i] == '!') {
			sentenceFlag = true;
		}

		if (sentenceFlag && isalpha(str[i])) {
			sentenceFlag = false;
			str[i] = toupper(str[i]);
		}
	}
	return;
}

void ReplaceExclamation(char str[]) {

	for (int i = 0; i < strlen(str); i++) {
		str[i] = (str[i] == '!') ? '.' : str[i];
	}

	return;
}

void ShortenSpace(char str[]) {

	int offset = 0;

	bool spaceFlag = true;

	for (int i = 0; i < strlen(str); i++) {

		if (isspace(str[i + offset]) && !spaceFlag) {
			spaceFlag = true;
		} else if (isspace(str[i + offset]) && spaceFlag) {
			while (isspace(str[i + offset])) {
				offset++;
			}
		} else {
			spaceFlag = false;
		}

		if (str[i + offset] == '\t') str[i + offset] = ' ';

		str[i] = str[i + offset];
	}

	return;
}

int GetNumOfNonWSCharacters (char str[]) {
	unsigned int chars = 0;

	for (int i = 0; i < strlen(str); i++) {
		chars += (int)(isspace(str[i])) ? 0 : 1;
	}

	return chars;
}

int GetNumOfWords (char str[]) {
	int words = 0;

	bool isInWord = false;

	for (int i = 0; i < strlen(str); i++) {
		if (isalpha(str[i]) && !isInWord) {
			isInWord = true;
			words++;
		} else if (isspace(str[i])) {
			isInWord = false;
		}
	}

	return words;
}

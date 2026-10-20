#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "launge.h"

int main() {
	system("chcp 65001 > nul");
	char user_local[50];

	printf("==============================\n");
	printf("--hello ! this 1 pre-realese--\n");
	printf("==============================\n");
	printf("word :");
	scanf("%s", &user_local);


	for (int i = 0; i <ded; i++)
	{
		if (strcmp(dictannytre[i].english, user_local) == 0) {
			printf("you message : %s\n", user_local);
			printf("my message: %s -> %s\n", dictannytre[i].english, dictannytre[i].russian);
		};
	}
}
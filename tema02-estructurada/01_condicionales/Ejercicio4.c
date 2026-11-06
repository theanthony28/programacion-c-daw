#include <stdio.h>
#include <stdlib.h>

int main() {
	int altura = 0;
	printf("Introduce tu altura: ");
	scanf_s("%d", &altura);

	if (altura <= 150) {
		printf("Eres un minion\n");
	}
	else if (altura <= 180) {
		printf("Congratulations, you are an average human being\n");
	}

	else {
		printf("chewbacca");
	}

	return 0;
	}
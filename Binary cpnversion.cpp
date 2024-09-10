#include <stdio.h>
// function to convert binary to decimal
int binaryToDecimal (char binary[]) {
	int decimal = 0, base = 1, i = 0;
	while (binary[i] != '\0') {
		if (binary[i] == '1') {
			decimal += base;
		}
		base *= 2;
		i++;
	}
	
	return decimal;
}
// '' '' '' decimal to binary
void decimalToBinary(int decimal) {
	if (decimal == 0) {
		printf("0");
		return;
	}
	
	int binary[32]; // assuming 32 bit integer
	int i = 0;
	
	while (decimal > 0) {
		binary[i++] = decimal % 2;
		decimal /= 2;
	}
	// printing binary in reverse order
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
}

int main(){
	int choice, decimal;
	char binary[32];
	
	do{
		printf("Select conversion type:\n");
		printf("1. Binary to Decimal\n");
		printf("2. Decimal to Binary\n");
		printf("3. Exit\n");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				printf("Enter Binary Number: ");
				scanf("%s", &binary);
				printf("Decimal Equivalent: %d\n", binaryToDecimal(binary));
				break;
			case 2:
				printf("Enter Decimal Number: ");
				scanf("%d", &decimal);
				printf("Binary Equivalent: ");
				decimalToBinary(decimal);
				printf("\n");
				break;
			case 3:
				printf("Existing Program na Walang Error....\n");
				break;
			default:
				printf("Wrong Choice HAHAHAHA. Please Try Again\n");
		}
		
		printf("KAYAT MO PAY AGCONVERT ULIT? (1/0): ");
		scanf("%d", &choice);
	}while (choice == 1);
	
	return 0;
}

#include<stdio.h>
int main() {
	int pass;
	int attempts =0;
	
	while(attempts <3) {
		printf("Enter Password");
		scanf("%d",pass);
		
		if(pass== 1234){
			printf("Acess Granted");
			break;
			
		} else {
			printf("Wrong password")
		}
		attempts++;
	}
	
	if(attempts ==3) {
		printf("Account bolcked \n");
		
	}
	return 0;
}

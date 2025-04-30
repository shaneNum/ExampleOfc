#include <stdio.h>
#include <stdlib.h>

int main() {
		
	printf("___________.__             ___________                             .__          \n");
	printf("\\__    ___/|  |__   ____   \\_   _____/__  ________    _____ ______ |  |   ____  \n");
	printf("  |    |   |  |  \\_/ __ \\   |    __)_\\  \\/  /\\__  \\  /     \\\\____ \\|  | _/ __ \\ \n");
	printf("  |    |   |   Y  \\  ___/   |        \\>    <  / __ \\|  Y Y  \\  |_> >  |_\\  ___/ \n");
	printf("  |____|   |___|  /\\___  > /_______  /__/\\_ \\(____  /__|_|  /   __/|____/\\___  >\n");
	printf("                \\/     \\/          \\/      \\/     \\/      \\/|__|             \\/ \n");
	
	for(int k = 0; k < 2; k++ ){
		printf("\n\n                                  \\O/\n");
		for(int i = 0; i < 5; i++ ){
			
			for(int j = 0; j < 5; j++ ){
				printf("      ");
			}
			
			for(int j = 0; j < 5; j++ ){
				if(i != 2 || j != 2){
					if(i != 2 || j != 3){
						printf(" ");
					}
						printf("#");
				}else{
					printf("BRO");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

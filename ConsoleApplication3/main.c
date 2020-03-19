#include "Search.h"
#include "IntStack.h"
#include <stdio.h>
#include <stdlib.h>



int main(void) {

	// search key , return key's count 
	int nx, i, ky;
	int* x;
	int* idx;
	int count_result;
	puts("   \x1b[32m Search Math ");
		printf("enter search number (maxcount) : ");
		scanf_s("%d", &nx);
		x = calloc(nx, sizeof(int));
		idx = calloc(nx, sizeof(int));

		for (i = 0; i < nx; i++) {
			
			
			if (i == 0) {
				printf("%dst number : ", i + 1);
				scanf_s("%d", &x[i]);
			}
				
			
			else {
				printf("%dth number : ", i + 1);
				if (x != NULL)
					scanf_s("%d", &x[i]);
			}

		}
		printf("Enter search word : ");
		scanf_s("%d", &ky);

		count_result = search_idx(x, nx, ky, idx);

		if (count_result > 0)
			printf("we can search keys! key exist %d . \n", count_result);
		else
			printf("we can`t search the keys. here is not exist.\n");

		//Create Stack , Termination .  
		//You first have to Init Stack .
		printf("\x1b[0m");
		IntStack a; 
		int max;

		printf("Enter your Stack Capacity : ");
			scanf_s("%d", &max);

			if ((Init(&a, max)) == -1) {
				printf("You cant Init Stack.");
					return 1;
			}



		while (1) {
			int x, num, ky;
			printf("---------------------------------------------------------\n");
			printf("Stack status : %d / %d\n", Size(&a), Capacity(&a));
			printf(" 1. Push 2. Pop 3. Peek 4. Search 5. Print Stack data  6. EXE ");
				scanf_s("%d", &num);

				if (num == 6) break;
				switch (num) {

				case 1:
					printf("Enter Push data ( INTEGER ONLY) : ");
					scanf_s("%d", &x);

					if (Push(&a, x) == -1)
						printf("You cant push . ");
					break;
				case 2:
					if (Pop(&a, &x) == -1)
						printf("You cant POP . we guess Stack is empty. plz check Stack status .  \n");
					break;
				case 3:
					if (Peek(&a, &x) == -1)
						printf("you cant PEEK. we guess Stack is empty. you can check this choose plz check Stack status. \n");
					printf("we can Peek data ! data is %d ", x);
					break;

				case 4:
					printf("Enter Search data(INTEGER ONLY) :  ");
					scanf_s("%d", &ky);
					if (Search(&a, ky) == -1)
						printf("we cant Search data.");
					else
						printf("we can catch data ");
					break;

				case 5:

					Print(&a);
					break;
				}
					
				

					
				}

				
		Terminater(&a);

				
				
					
				
		}
		

		



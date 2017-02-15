#include <stdio.h>

int main()
{

    int money, days;
    
    printf("Insert money:");
    scanf("%d",&money);

    printf("Insert days:");
    scanf("%d",&days);

    if (days>365) {
	printf("Days must be <365");
	return 1;
    }
    if (money<10000) {
	printf("Money must be >10000");
	return 1;
    }
    



printf("Result: %d \n",money	);

return 0;
}
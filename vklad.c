#include <stdio.h>

int main()
{

    int money, days;
    
    printf("Insert money:");
    scanf("%d",&money);

    printf("Insert days:");
    scanf("%d",&days);

    if ((days>365)||(days<0)) {
	printf("Days must be between 0-365");
	return 1;
    }
    if (money<10000) {
	printf("Money must be >10000");
	return 1;
    }
    if (money<100000) {
	if (days<=30) money=money-(money*0.1);
	if ((days>=31)&&(days<=120)) money=money+(money*0.02);
	if ((days>=121)&&(days<=240)) money=money+(money*0.06);
	if ((days>=241)&&(days<=365)) money=money+(money*0.12);
    }
    if (money>=100000) {
	if (days<=30) money=money-(money*0.1);
	if ((days>=31)&&(days<=120)) money=money+(money*0.03);
	if ((days>=121)&&(days<=240)) money=money+(money*0.08);
	if ((days>=241)&&(days<=365)) money=money+(money*0.15);
    }



printf("Result: %d \n",money	);

return 0;
}
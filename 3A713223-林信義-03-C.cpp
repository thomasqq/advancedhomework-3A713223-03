#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int profit;
	int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
	
	bonus1=100000*0.1;
	bonus2=bonus1+100000*0.075;
	bonus4=bonus2+200000*0.05;
	bonus6=bonus4+400000*0.03;
	bonus10=bonus6+600000*0.015;
	
	printf("�п�J���q��Ӥ몺�`�Q��:");
	scanf("%d",&profit);
	
	printf("�o���`������:");
	if(profit<=100000){
	    bonus=profit*0.1;
	    printf("%d",bonus);
    }
    else if(profit<=200000 && profit>100000){
	    bonus=bonus1+(profit-100000)*0.075;
	    printf("%d",bonus);
    }
	else if(profit<=400000 && profit>200000){
	    bonus=bonus2+(profit-200000)*0.05;
	    printf("%d",bonus);
    }
	else if(profit<=600000 && profit>400000){
	    bonus=bonus4+(profit-400000)*0.03;
	    printf("%d",bonus);
    }
	else if(profit<=1000000 && profit>600000){
	    bonus=bonus6+(profit-600000)*0.015;
	    printf("%d",bonus);
    }
	else if(profit>100000){
        bonus=bonus10+(profit-1000000)*0.01;
        printf("%d",bonus);
    }
    else{
    	printf("�����L����");
	}

	system("PAUSE");
	return 0;
}

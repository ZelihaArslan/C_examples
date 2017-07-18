#include<stdio.h>
int main()
{
	struct{
		char adi[25];
		int boyu;
		struct{
			int year;
			int month;
			int day;
		}birthday;
	}person;
	printf("adin:");
	gets(person.adi);
	printf("boyun:");
	scanf("%d",&person.boyu);
	printf("dogum tarihin: ");
	scanf("%d-%d-%d",&person.birthday.day
	     			,&person.birthday.month
					,&person.birthday.year);
	printf("\nbilgileri görelim:");
	printf("adi:%s\n",person.adi);
	printf("boyu:%d\n", person.boyu);
	printf("birtday:%d\  %d  %d\n", person.birthday.day,
								person.birthday.month,
								person.birthday.year);
 	return 0;
}

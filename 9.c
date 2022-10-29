#include <stdio.h>

void main()
{
	
		int year = 0;
		int mon = 0;
		int day = 0;
		int num = 0;
		int mon2 = 0;

		scanf_s("%d%d%d", &year, &mon, &day);



		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			mon2 = 29;
		}
		else {
			mon2 = 28;
		}


		switch (mon - 1)
		{
		case 11: num = num + 30;
		case 10: num = num + 31;
		case 9: num = num + 30;
		case 8: num = num + 31;
		case 7: num = num + 31;
		case 6: num = num + 30;
		case 5: num = num + 31;
		case 4: num = num + 30;
		case 3: num = num + 31;
		case 2: num = num + mon2;
		case 1: num = num + 31;
		}
		printf("%d年的第%d天", year, num + day);
	
	
}
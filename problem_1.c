#include <stdio.h>

int main()
{
	int count = 0;
	for (int index = 0; index < 1000; index = index+1) {
		if ( index % 3 == 0 ) {
			count = count + index;
		} else if ( index % 5 == 0 ) {
			count = count + index;
		}
	}
	printf("The answer is %d", count);
}

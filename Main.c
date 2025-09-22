#include <stdio.h>

int main()
{
	int nmbr = 42;
	float temp1 = 0;
	float temp2 = 0;
	int tries = 1;
	float result = -5;
	printf("Start");
	for(int i=0; i<5; i++)
		if(temp1*temp1>nmbr) {
			temp2 = temp1;
			temp1 +=1.00/tries;
			result = temp2;
			printf("temp1<nmbr\n");
		}
		else if(temp1*temp1==nmbr) {
			result = temp1*temp1;
			printf("temp1==nmbr\n");
			return result;
		}
		else if(temp1*temp1<nmbr) {
			printf("temp1>nmbr\n");
			temp2 = temp1-1/tries;
			tries = tries*10;
			result = temp2;
		}
	return result;
}

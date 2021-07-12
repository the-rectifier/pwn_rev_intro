#include <stdio.h>

int glob_sum = 0;

int add(int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
	int x = 1337;
	int y = 69;
	glob_sum = add(x,y);
	printf("Sum = %d\n", glob_sum);
	return 0;
}

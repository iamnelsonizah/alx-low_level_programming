#include <stdio.h>
/***
  *main - Entry point
  *return: always 0 (success)
  */
int main(void)
{
	printf("Size of char: %ld byte(s)", sizeof(char));
	printf("Size of int: %ld byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of float: %ld byte(s)", sizeof(float));
	return (0);
}

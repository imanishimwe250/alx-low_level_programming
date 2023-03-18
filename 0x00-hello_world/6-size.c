#include <stdio>
/**
* main - main function
* Return: alawys 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n", sizeof(char));
printf("size of int: %lu byte(s)\n", sizeof(int));
printf("size of long int: %lu byte(s)\n", sizeof(long int));
printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
printf("size of float: %lu byte(s)\n", sizeof(float));
return (0);
}


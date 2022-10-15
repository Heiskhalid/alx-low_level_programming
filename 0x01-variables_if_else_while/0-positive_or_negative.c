#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/**
 *	main - Entry point
 *
 *	Return: Always 0 (success)
 *
 **/



int main(void)

{
<<<<<<< HEAD
	int n;
	srand(time(0));
-	n = rand() - RAND_MAX / 2;
	if (n > 0)
-	{
-                printf("%d is positive\n", n);
-        }
-        else if (n == 0)
-        {
-               printf("%d is zero\n", n);
	else if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        return (0);	
=======

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)

	{

		printf("%d is negative\n", n);

	}

	else if (n > 0)

	{

		printf("%d is positive\n", n);

	}

	else

	{

		printf("%d is zero\n", n);

	}



	return (0);

>>>>>>> 234dbf247b16de35c72d55e60979f48af93ec0de
}

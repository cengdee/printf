#include "main.h"

#include <stdlib.h>


int print_X(va_list X)

{

		unsigned int a[8];

			unsigned int j = 1, m = 268435456, n, sum = 0;

				char diff;

					int counter = 0;



						n = va_arg(X, unsigned int);

							diff = 'A' - ':';

								a[0] = n / m;

									for (; j < 8; j++)

											{

														m /= 16;

																a[j] = (n / m) % 16;

																	}

										for (j = 0; j < 8; j++)

												{

															sum += a[j];

																	if (sum || j == 7)

																				{

																								if (a[j] < 10)

																													_putchar('0' + a[j]);

																											else

																																_putchar('0' + diff + a[j]);

																														counter++;

																																}

																		}

											return (counter);

}

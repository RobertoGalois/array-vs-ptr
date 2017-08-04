#include    <stdio.h>
#include    <stdlib.h>

int     main(void)
{
        int     ar_number1[10];
        int*    ar_number2;

        /* gestion de ar_number1 */
        for (int i=0; i<10; i++)
            ar_number1[i] = i;

        for (int i=0; i<10; i++)
            printf("%d\n", ar_number1[i]);

        printf("\n---------\n\n");

        /* gestion de ar_number2 */
        ar_number2 = malloc(10 * sizeof(int));
        if (ar_number2 == NULL)
        {
            printf("Memoire disponible insuffisante\n");
            exit(0);
        }

        for (int i=0; i<10; i++)
            *(ar_number2+i) = i;

        for (int i=0; i<10; i++)
            printf("%d\n", *(ar_number2+i));

        return (0);
}

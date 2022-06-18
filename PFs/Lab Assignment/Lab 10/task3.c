#include <stdio.h>

    void multiply(int, int, int [][25], int, int, int [][25], int [][25]);

    void display(int, int, int[][25]);

    int main()

    {

        int a[25][25], b[25][25], c[25][25] = {0};

        int m1, n1, m2, n2, x, j, k;

        printf("Enter rows and columns for Matrix A respectively: ");

        scanf("%d%d", &m1, &n1);

        printf("Enter rows and columns for Matrix B respectively: ");

        scanf("%d%d", &m2, &n2);

        if (n1 != m2)

        {

            printf("Matrix multiplication not possible.\n");

        }

        else

        {

            printf("Enter elements in Matrix A:\n");

            for (x = 0; x < m1; x++)

            for (j = 0; j < n1; j++)

            {

                scanf("%d", &a[x][j]);

            }
            printf("\nPrinting Matrix A: ");
			display(m1, n1, a);
            printf("\nEnter elements in Matrix B:\n");

            for (x = 0; x < m2; x++)

            for (j = 0; j < n2; j++)

            {

                scanf("%d", &b[x][j]);

            }
            printf("\nPrinting Matrix B: ");
            display(m2, n2, b);

            multiply(m1, n1, a, m2, n2, b, c);

        }

        printf("On matrix multiplication of A and B the result is:\n");

        display(m1, n2, c);

    }

    void multiply (int m1, int n1, int a[25][25], int m2, int n2, int b[25][25], int c[25][25])

    {

        static int x = 0, j = 0, k = 0;

        if (x >= m1)

        {

            return;

        }

        else if (x < m1)

        {

            if (j < n2)

            {

                if (k < n1)

                {

                    c[x][j] += a[x][k] * b[k][j];

                    k++;

                    multiply(m1, n1, a, m2, n2, b, c);

                }

                k = 0;

                j++;

                multiply(m1, n1, a, m2, n2, b, c);

            }

            j = 0;

            x++;

            multiply(m1, n1, a, m2, n2, b, c);

        }

    }

    void display(int m1, int n2, int c[25][25])

    {

        int x, j;

        for (x = 0; x < m1; x++)

        {

            for (j = 0; j < n2; j++)

            {

                printf("%d  ", c[x][j]);

            }

            printf("\n");

        }

    }


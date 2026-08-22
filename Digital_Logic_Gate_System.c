#include <stdio.h>

/* Function to accept only binary input */
int GetBinaryInput()
{
    int input;

    while (1)
    {
        scanf("%d", &input);

        if (input == 0 || input == 1)
        {
            return input;
        }

        printf("Invalid input! Enter only 0 or 1: ");
    }
}

/* Logic Gate Functions */

int AND(int a, int b)
{
    return a && b;
}

int OR(int a, int b)
{
    return a || b;
}

int NOT(int a)
{
    return !a;
}

int NAND(int a, int b)
{
    return !(a && b);
}

int NOR(int a, int b)
{
    return !(a || b);
}

int XOR(int a, int b)
{
    return a ^ b;
}

int XNOR(int a, int b)
{
    return !(a ^ b);
}

/* Display Truth Table */

void DisplayTruthTable()
{
    printf("\n----- LOGIC GATE TRUTH TABLE -----\n\n");

    printf("A B | AND OR NAND NOR XOR XNOR\n");
    printf("-------------------------------\n");

    printf("0 0 |  %d   %d    %d    %d   %d    %d\n",
           AND(0, 0), OR(0, 0), NAND(0, 0),
           NOR(0, 0), XOR(0, 0), XNOR(0, 0));

    printf("0 1 |  %d   %d    %d    %d   %d    %d\n",
           AND(0, 1), OR(0, 1), NAND(0, 1),
           NOR(0, 1), XOR(0, 1), XNOR(0, 1));

    printf("1 0 |  %d   %d    %d    %d   %d    %d\n",
           AND(1, 0), OR(1, 0), NAND(1, 0),
           NOR(1, 0), XOR(1, 0), XNOR(1, 0));

    printf("1 1 |  %d   %d    %d    %d   %d    %d\n",
           AND(1, 1), OR(1, 1), NAND(1, 1),
           NOR(1, 1), XOR(1, 1), XNOR(1, 1));

    printf("\n");
}

/* Main Function */

int main()
{
    int choice;
    int A, B;

    do
    {
        printf("\n====================================\n");
        printf("       DIGITAL LOGIC GATE SYSTEM\n");
        printf("====================================\n");

        printf("1. AND Gate\n");
        printf("2. OR Gate\n");
        printf("3. NOT Gate\n");
        printf("4. NAND Gate\n");
        printf("5. NOR Gate\n");
        printf("6. XOR Gate\n");
        printf("7. XNOR Gate\n");
        printf("8. Display Truth Table\n");
        printf("9. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\n--- AND Gate ---\n");

                printf("Enter A (0 or 1): ");
                A = GetBinaryInput();

                printf("Enter B (0 or 1): ");
                B = GetBinaryInput();

                printf("AND Output = %d\n", AND(A, B));
                break;

            case 2:
                printf("\n--- OR Gate ---\n");

                printf("Enter A (0 or 1): ");
                A = GetBinaryInput();

                printf("Enter B (0 or 1): ");
                B = GetBinaryInput();

                printf("OR Output = %d\n", OR(A, B));
                break;

            case 3:
                printf("\n--- NOT Gate ---\n");

                printf("Enter A (0 or 1): ");
                A = GetBinaryInput();

                printf("NOT Output = %d\n", NOT(A));
                break;

            case 4:
                printf("\n--- NAND Gate ---\n");

                printf("Enter A (0 or 1): ");
                A = GetBinaryInput();

                printf("Enter B (0 or 1): ");
                B = GetBinaryInput();

                printf("NAND Output = %d\n", NAND(A, B));
                break;

            case 5:
                printf("\n--- NOR Gate ---\n");

                printf("Enter A (0 or 1): ");
                A = GetBinaryInput();

                printf("Enter B (0 or 1): ");
                B = GetBinaryInput();

                printf("NOR Output = %d\n", NOR(A, B));
                break;

            case 6:
                printf("\n--- XOR Gate ---\n");

                printf("Enter A (0 or 1): ");
                A = GetBinaryInput();

                printf("Enter B (0 or 1): ");
                B = GetBinaryInput();

                printf("XOR Output = %d\n", XOR(A, B));
                break;

            case 7:
                printf("\n--- XNOR Gate ---\n");

                printf("Enter A (0 or 1): ");
                A = GetBinaryInput();

                printf("Enter B (0 or 1): ");
                B = GetBinaryInput();

                printf("XNOR Output = %d\n", XNOR(A, B));
                break;

            case 8:
                DisplayTruthTable();
                break;

            case 9:
                printf("\nExiting Digital Logic Gate System...\n");
                break;

            default:
                printf("\nInvalid choice! Please select 1 to 9.\n");
        }

    } while (choice != 9);

    return 0;
}
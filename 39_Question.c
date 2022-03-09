#include <stdio.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("These Following Conversions are available.\nChoose by Entering the number corresponding to that conversion.\n1. kms to miles\n2. inches to foot\n3. cms to inches\n4. pound to kgs\n5. inches to meters\n");
        printf("Enter the Corresponding Number or type q to Quit : ");
        

        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the Program...");
            printf("\n\n\n");
            goto end;
            break;

        case '1':
            printf("Enter Quantity in terms of first unit : ");
            scanf("%f", &first);
            printf("\n\n\n");
            
            second = first * kmsToMiles;
            printf("%f kms is equal to %f Miles\n", first, second);
            printf("\n\n\n");
            break;

        case '2':
            printf("Enter Quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f inches is equal to %f Foot\n", first, second);
            printf("\n\n\n");
            break;

        case '3':
            printf("Enter Quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f cms is equal to %f Inches\n", first, second);
            printf("\n\n\n");
            break;

        case '4':
            printf("Enter Quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f Pounds is equal to %f kgs\n", first, second);
            printf("\n\n\n");
            break;

        case '5':
            printf("Enter Quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f Meters\n", first, second);
            printf("\n\n\n");
            break;

        }
    }

end:
    return 0;
}
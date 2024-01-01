#include <stdio.h>
int main()
{
    int choose;

    
    printf("please enter 1 for Bill calculater: \n");
    printf("please enter 2 for Unit converstions: \n");
    printf("please enter 3 for Currency Converter: \n");

    scanf("%d", &choose);

    switch (choose)
    {
    case 1: 
        printf("Please press 1 for Electricity Bill: \n");
        printf("Please press 2 for Gas Bill: \n");

        scanf("%d", &choose);
        switch (choose)
        {
        case 1: 
            printf("please enter number of units for this month");
            // scanf("%d")
            break;
        
        default:
            break;
        }
        break;
        case 2:
        printf("Please enter 1 for cm to m\n");
        printf("Please enter 2 for kg to m\n");
        printf("Please enter 3 for km to m\n");

        scanf("%d",&choose);
        switch (choose)
        {
        case 1: 

            break;
        
        default:
            break;
        }

    
    default:
        break;
    }

    return 0;
}

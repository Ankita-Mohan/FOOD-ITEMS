#include <stdio.h>
/*Pizza, Rs 239
Burger, Rs 129
Pasta, Rs 179
French Fries, Rs 99
Sandwich, Rs 149*/
int main()
{
    int no;
    printf("ENTER A RANDOM NUMBER FROM 1 TO 5 \n");
    scanf("%d", &no);
    switch (no)
    {
    case 1:
        printf("Food item- Pizza \nPrice- Rs 239");
        break;
    case 2:
        printf("Food item- Burger \nPrice- Rs 129");
        break;
    case 3:
        printf("Food item- Pasta \nPrice- Rs 179");
        break;
    case 4:
        printf("Food item- French Fries \nPrice- Rs 99");
        break;
    case 5:
        printf("Food item- Sandwich \nPrice- Rs 149");
        break;
    default:
        printf("INVALID INPUT");
    }
    return 0;
}

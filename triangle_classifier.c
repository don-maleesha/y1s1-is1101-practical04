#include <stdio.h>

int main(){

    int length1, length2, length3;

    printf("Enter length of each side :\n");
    printf("First side? - ");
    scanf("%d", &length1);
    printf("Second side? - ");
    scanf("%d", &length2);
    printf("Third side? - ");
    scanf("%d", &length3);

    if ((length1 > 0) && (length2 > 0) && (length3 > 0))
    {
        if ((length1 + length2 > length3) && (length1 + length3 > length2) && (length2 + length3 > length1))
        {
            if((length1 == length2) && (length1 == length3) && (length2 == length3))
            {
                 printf("Equi\n");
            } else if (((length1 == length2) && (length1 != length3)) || ((length1 != length2) && (length1 == length3)) || ((length1 != length2) && (length2 == length3)))
            {
                printf("Iso\n");
            } else if ((length1 != length2) && (length1 != length3) && (length2 != length3))
            {
                printf("Sca\n");
            }  
        } else
        {
            printf("Error\n");
        }
         
    }

    return 0;

}

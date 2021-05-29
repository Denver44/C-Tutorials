
//************************** here we can use int in place of void as here we are not returning any value sp it is good to be used void*******************//

#include <stdio.h>
void prime(int);
int main()
{
    int num;
    printf("Enter a number of which u want prime factors\n");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("enter a valid number\n");
    }
    else
    {
        prime(num);
    }

    return 0;
}
void prime(int num)
{

    int i = 2;
    printf("The prime factors of %d is\t", num);

    while (num != 1)
    {

        if (num % i == 0)
        {
            printf("%d\t", i);
        }
        
        else
        {
            i++;
           continue;
        }
        
        num = num / i;
    }


    
}

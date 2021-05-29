#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;



}
int main()
{
        
printf("random number from 0 to 5 is %d\n",generaterandomnumber(5));

    return 0;
}
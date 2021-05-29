#include <stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    *p = 1024;
    printf("Address of a is %d\n", &a);
    printf("value of a is %d\n", a);
    printf("value of p is %d\n", p);
    printf("value of p after derefrencing it *p is %d\n", *p);
    printf("Address of p is %d\n", &p);
    printf("value of p+1 is %d\n", p + 1);
    printf("value of p+1 after derefrencing is %d this is garbage value.\n", *(p + 1));

    char *pc;
    pc = (char *)p; //------------------------------- typecasting
    printf("value of pc is %d\n", pc);
    printf("value of pc+1 is %d\n", pc + 1);
    printf("value of pc after derefrencing it *pc is %d\n", *pc);
    printf("value of pc after derefrencing it *pc is %d\n", *(pc + 1));

    // Void pointer -------------------------------- Generic pointer.
    void *vp;
    vp = p;
    printf("value of vp is %d\n", vp);
   // printf("value of vp is %d\n", *vp); // we can do this as it is void pointer so first we have to type caste is from void to int.
    printf("value of vp is %d\n", *(int *)vp); // this is how we typcasted it to int.






    return 0;
}
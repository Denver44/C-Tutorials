#include <stdio.h>
#include "add.c"
int main()
{

    // extern int a;                this how extern works and its is intilal value is also zero.
    // printf("%d", a);

    int value;
    value = increment();
    value = increment();
    value = increment();

    printf("%d", value);
    return 0;
}

// #include <stdio.h>
// #include "file.c"
// int main()
// {
//     int a = 5;
//     int b = 6;
//     int c;
//     c = func(a, b);

//     printf("%d", c);
//     return 0;
// }

// // here the static function is not applied as we just have to remove the #include "file.h" to make it static.

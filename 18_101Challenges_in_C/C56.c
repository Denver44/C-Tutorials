#include <stdio.h>
//#define ROWS 4
#define ROWS 5
//#define COLS 4
#define COLS 5
int main()

{

    // int arr[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13, 14, 15, 16}};
    int arr[ROWS][COLS] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int tr, rc, br, lc;
    int i;
    br = ROWS - 1;
    rc = COLS - 1;
    tr = 0;
    lc = 0;
 /******************************************************* CLOCKWISE *********************************/
    // while (tr <= br && lc <= rc)
    // {
    //     for (i = lc; i <= rc; i++)
    //     {
    //         printf(" %d ", arr[tr][i]);
    //     }
    //     tr++;

    //     for (i = tr; i <= br; i++)
    //     {
    //         printf(" %d ", arr[i][rc]);
    //     }
    //     rc--;

    //     for (i = rc; i >= lc; i--)
    //     {
    //         printf(" %d ", arr[br][i]);
    //     }
    //     br--;

    //     for (i = br; i >= tr; i--)
    //     {
    //         printf(" %d ", arr[i][lc]);
    //     }
    //     lc++;
    // }

    /************************************************** ANTI CLOCKWISE ******************************************/
    while (br >= tr && rc >= lc) // (tr <= br && lc <= rc) asb both comdition is true so loop will be go as condition flase loop stops so both tht condition is working
    {
        for (i = tr; i <= br; i++)
        {
            printf(" %d ", arr[i][lc]);
        }
        lc++;

        for (i = lc; i <= rc; i++)
        {
            printf(" %d ", arr[br][i]);
        }
        br--;

        for (i = br; i >= tr; i--)
        {
            printf(" %d ", arr[i][rc]);
        }
        rc--;

        for (i = rc; i >= lc; i--)
        {
            printf(" %d ", arr[tr][i]);
        }
        tr++;
    }

    return 0;
}
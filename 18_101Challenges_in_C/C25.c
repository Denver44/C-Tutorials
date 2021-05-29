#include <stdio.h>
#include<math.h>

void func(int, int, int, int, int, float *, float *, float *);
int main()
{
    int n1, n2, n3, n4, n5;
    float sum, avg, stddev;

    printf("ENTER THE FIVE NUMBER OF WHICH U WANT SUM,AVERAGE,STANDARD DEVIATION\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    func(n1, n2, n3, n4, n5, &sum, &avg, &stddev);

    printf("THE SUM IS %f\n",sum);
    printf("THE AVERAGE IS %f\n",avg);
    printf("THE STANDARD DEVIATION IS %f\n",stddev);

    return 0;
}

void func(int a1 , int a2 , int a3, int a4, int a5, float *s, float *a, float *sd)
{

*s = a1+a2+a3+a4+a5;
*a = *s/5;
*sd = sqrt((pow((a1 - *a),2)+pow((a2 - *a),2) + pow((a3 - *a),2)+ pow((a4 - *a),2) + pow((a5 - *a),2))/4);




}

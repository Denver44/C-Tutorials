#include <stdio.h>
int main()
{
    float red, green, blue, max;
    float white, cyan, magenta, yellow, black;
    printf("Enter the values of red green and blue:\n");
    scanf("%f%f%f", &red, &green, &blue);

    if ((red < 0 || red > 255.0) || (green < 0 || green > 255.0) || (blue < 0 || blue > 255.0))
    {
        printf("INVALID RGB COLOR\n");
    }

    if (red == 0 && green == 0 && blue == 0)
    {
        printf("BLACK COLOR\n");
    }

    else
    {
        red = red / 255.0;
        green = green / 255.0;
        blue = blue / 255.0;

        max = red;
        if (green > max)

            max = green;

        if (blue > max)

            max = blue;

        white = max;
        cyan = (white - red) / white;
        magenta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1.0 - white;
    }
    printf("CMYK = %f %f %f %f\n", cyan, magenta, yellow, black);

    return 0;
}
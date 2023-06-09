#include <stdio.h>
#include <stdlib.h>

void PrtAry(float *);    // (float data[][7]);
void AvgPrcp(float *);   //

int main(void)
{
    char name[7][9] = {"ObsTime",
                       "T Max",
                       "T Min",
                       "WSGust",
                       "Precp",
                       "PrecpDay",
                       "RH"};
    float data[5][7] = {{ 1, 28.9,  9.2, 17.2,    0, 0, 80 },
                        { 2,   30, 12.4, 10.9,    0, 0, 79 },
                        { 3,   31, 13.2, 10.8,    0, 0, 76 },
                        { 4, 34.3, 19.2, 12.5,  4.5, 2, 78 },
                        { 5, 34.2, 21.7, 12.9, 83.5, 8, 82 } };
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("%s\t", name[i]);
    }
    printf("\n");
    PrtAry(&data[0][0]); //(data)
    AvgPrcp(&data[0][0]);

    getchar();
    return 0;
}

void PrtAry(float *ary)     // print array contents
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%.1f\t ", ary[i * 7 + j]); // ary[i][j]
        }
        printf("\n");
    }
    return;
}

void AvgPrcp(float* ary)    // Average rainfall from January to May
{
    int i;
    float avg,sum=0;
    
    for (i = 0; i < 5; i++)
        sum += ary[i * 7 + 4];  //ary[i][4]

    avg = sum / 5;

    printf("The Average Precipitation is %.2f mm.",avg );
    
    return;
}

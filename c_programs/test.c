#include <stdio.h>
#define SIZE 5

void PrtAry (float (*ary)[7]);
void AvgPrcp(float (*ary)[7]);
void MaxTemp(float (*ary)[7]);
void showRH   (float (*a)[7]);
void SortRH (float (*a)[7]);

int main(void)
{
    char name[7][9] = {"ObsTime",
                       "T Max"  ,
                       "T Min"  ,
                       "WSGust" ,
                       "Precp"  ,
                       "PrecpDay",
                       "RH"};
    float data[5][7] = {{1, 28.9,  9.2, 17.2,    0, 0, 80},
                        {2,   30, 12.4, 10.9,    0, 0, 79},
                        {3,   31, 13.2, 10.8,    0, 0, 76},
                        {4, 34.3, 19.2, 12.5,  4.5, 2, 78},
                        {5, 34.2, 21.7, 12.9, 83.5, 8, 82}};

    //printf("%-9s", " ");

    int i;
    
    for(i = 0; i < 7; i++)
    {
        printf("%-9s", name[i]);
    }
    printf("\n");

    PrtAry (data);
    AvgPrcp (data);
    MaxTemp (data);
    printf("排序前...\n");
    showRH(data);
    SortRH(data);
    printf("排序後...\n");
    showRH(data);

    return 0;
}

void PrtAry(float (*ary)[7])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%.1f\t ", ary[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void AvgPrcp(float (*ary)[7])
{
    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += ary[i][4];
    }

    float avg = sum / 5;
    printf("The Average Precipitation is %.2f mm.\n", avg);
}

void MaxTemp(float (*ary)[7])
{
    float max = ary[0][1];
    int month = 0;

    for (int i = 1; i < 5; i++)
    {
        if (ary[i][1] > max)
        {
            max = ary[i][1];
            month = i+1;
        }
    }

    const char* months[5] = {"January", "February", "March", "April", "May"};
    printf("The Max Temperature is %.1f degrees, it is %s.\n", max, months[month-1]);
}

void showRH(float (*a)[7])
{
    int i;

    for (i = 0; i < SIZE; i++)
        printf("%2.0f ", a[i][6]); /* 印出陣列的內容 */

    printf("\n");
}

void SortRH(float (*a)[7])
{
    int i, j ;
    float temp;
    int flag = 0;

    for (i = 1; (i < SIZE) && (!flag); i++)
    {
        flag = 1;
        for (j = 0; j < (SIZE - i); j++)
            if (a[j][6] > a[j + 1][6])
            {
                temp = a[j][6];        /* 對換陣列內的值 */
                a[j][6] = a[j + 1][6];
                a[j + 1][6] = temp;
                flag = 0;
            }
    }
}
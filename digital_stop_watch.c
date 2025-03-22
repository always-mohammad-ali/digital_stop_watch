#include <stdio.h>
#include <unistd.h>
#define circle 60


#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(x * 1000)

#endif

int main()
{
    int hours, minutes, seconds;
    printf("Enter Hours Minutes Seconds: ");
    scanf("%d%d%d", &hours, &minutes, &seconds);

    int h=0, m=0, s=0;



    while(1)
    {
        printf("\033[H\033[J");

        printf("\n############Stop Watch############\n\n\n");
        printf("            %.2d: %.2d : %.2d", h, m, s);
        printf("\n\n\n####################################");

        fflush(stdout);

        if(h==hours && m==minutes && s==seconds)
        {
            break;
        }
        sleep(1);
        s++;

        if(s==circle)
        {
            m++;
            s=0;
        }
        if(m==circle)
        {
            h++;
            m=0;
        }

    }



    return 0;
}

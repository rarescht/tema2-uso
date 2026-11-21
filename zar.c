#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
        srand(time(NULL));
        int x,y;
        x=rand()%6+1;
        y=rand()%6+1;
        if(x==6 && y==5) printf("Dau cu zaru %d %d n-am nevoie de servici", x, y);
        else if(x==6 && y==6) printf("Dau cu zaru %d %d ca mine nu se mai naste", x, y);
                else printf("Dau cu zaru %d %d",x ,y);
        return 0;
}

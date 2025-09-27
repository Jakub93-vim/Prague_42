// Online C compiler to run C program online
#include <unistd.h>
#include <stdio.h>

int rush(int x, int y) {
    
    int x_count;
    int y_count;
    
    x_count = x;
    y_count = y;
    
    x = 1;
    y = 1;
    
    printf("Num x is set to %d \n", x);
    printf("Num y is set to %d \n ", y);
    printf("\n");
    
    printf("Total count of x numbers is %d \n", x_count);
    printf("Total count of y numbers is %d \n", y_count);
    printf("\n\n\n");
 
    
    while(y<=y_count){
        while(x<=x_count){
            //printf("[x=%d,y=%d] ", x, y); //uncomment this to see coordinates
            
            if (y==1 || y==y_count) // if we are in first or last row
            {
                if(x==1 || x==x_count) // and we are also in first or last columns
                {
                    printf("0");
                }
                if(1<x && x<x_count) // and we are also in middle columns
                {
                    printf("-");
                }
            }
            
            if (1<y && y<y_count) // if we are in middle rows
            {
                if(x==1 || x==x_count) // and we are also in first or last row
                {
                    printf("|");
                }
                if(1<x && x<x_count) // and we are also in first or last row
                {
                    printf(" ");
                }
            }
            x++;
        }
        x=1;
        printf("\n");
    
    y++;
    }

    return 0;
}

int main(void)

{
    rush(6, 10);
}
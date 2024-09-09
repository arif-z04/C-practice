#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct{
    int x; 
    int y;
} Point; 

void print_points(Point points[]);

int main(){

    Point p1 = {5, 10};
    Point p2 = 
    {
        .x = 2,
        .y = 8
    };

    printf("p1.x = %d\n", p1.x);
    printf("p1.y = %d\n", p1.y);

    printf("p2.x = %d\n", p2.x);
    printf("p2.y = %d\n", p2.y);

    p1 = p2; //memory copy, p1 is replaced with the content of p2; 

    printf("p1.x = %d\n", p1.x);
    printf("p1.y = %d\n", p1.y);

    Point points[10];
    for(int i = 0; i < 10; i++){
        points[i].x = i; 
        points[i].y = 10 - i;
    }
    
    print_points(points);
    return 0;
}


void print_points(Point points[])
{
    for(int i = 0; i < 10; i++)
    {
        printf("p%d = {%d, %d}\n", i, 
                            points[i].x,
                            points[i].y);
    }

}
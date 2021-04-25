#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,radious;
    float pc;
    printf("Enter the co-ordinate of a circle: ");
    scanf("%d%d",&x1,&y1);
    printf(Enter the radious of a circle:");
    scanf("%d",&radious);
    printf("Enter the pont co-ordinates:");
    scanf("%d%d",&x2,&y2);
    //check for distance betweenpont of circle
    pc = sqrt(pow(x2-x1,2)+pow(y2-y1,2);
    if(pc>radious)
    {
        printf("point(%d%d) lies outside the circle.",x2,y2);
    }
    else if(pc<radious)
    {
        printf("point(%d%d) lies inside the circle."x2,y2);
    }
    else if(pc==radious)
    {
        printf("point(%d%d) lies the boundary of circle."x2,y2);
    }
    else
     {
        printf("wrong entry");
    }
}
    



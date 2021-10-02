/*C graphics program to draw a line.*/

#include <graphics.h>
#include <conio.h>
 
main()
{
   int gd = DETECT, gm;
 
   //init graphics
   initgraph(&gd, &gm, "C:/TURBOC3/BGI");
   /*
   if you are using turboc2 use below line to init graphics:
   initgraph(&gd, &gm, "C:/TC/BGI");
   */

   //draw a line

   /*
   line() function description
   parameter left to right
   x1: 100
   y1: 100
   x2: 200
   y2: 100
   */
   line(100,100,200,100);    //will draw a horizontal line

   line(10,10,200,10); //will draw another horizonatl line

   getch();
   closegraph();
   return 0;
}

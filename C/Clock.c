#include <stdio.h>
#include <time.h>
int main () {
time_t currnt_time;
time(&currnt_time);
printf("Current_time comes_out to be: = %s", ctime(&currnt_time));
return(0);
}

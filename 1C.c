/*
Question C
Write a C program that uses a structure to store a date (day, month, and year), inputs today’s date, 
and implements a user-defined function that accepts the date as a structure argument and 
returns the corresponding day of the week. The program should then display both the date and the day.
*/

#include<stdio.h>

struct date{
  int day;
  int month;
  int year;
};

int main(){

  struct date d;
  d.day=13;
  d.month=3;
  d.year=2006;

  int q = d.day;
  int m = d.month;
  int y = d.year;

  if (m < 3) {
        m += 12;
        y--;
    }

  int k = y % 100;
  int j = y / 100;

  int h = (q + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;

  int day = (h + 6) % 7;

  char *days[] = {"Sunday","Monday","Tuesday","Thursday","Friday","Saturday"};
  printf("%d / %d / %d :  %s", q,m,y, days[day]);

  return 0;
}
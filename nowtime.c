#include<stdio.h>
#include<time.h>

 int main(void) {
   time_t second;
   struct tm z;
   second = time (NULL);
   z = *localtime(&second);
   printf("¡“ú‚Ì“ú•t‚Í%d”N%dŒ%d“ú",z.tm_year + 1900,z.tm_mon + 1,z.tm_mday);
   switch(z.tm_wday) {
   case 0:printf("“ú—j“ú\n");
   break;
   case 1:printf("Œ—j“ú\n");
   break;
   case 2:printf("‰Î—j“ú\n");
   break;
   case 3:printf("…—j“ú\n");
   break;
   case 4:printf("–Ø—j“ú\n");
   break;
   case 5:printf("‹à—j“ú\n");
   break;
   case 6:printf("“y—j“ú\n");
   break;
   }
   printf("Œ»İ%d%d•ª%d•b",z.tm_hour,z.tm_min,z.tm_sec);
   return 0;
}
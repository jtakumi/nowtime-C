#include<stdio.h>
#include<time.h>

 int main(void) {
   time_t second;
   struct tm z;
   second = time (NULL);
   z = *localtime(&second);
   printf("�����̓��t��%d�N%d��%d��",z.tm_year + 1900,z.tm_mon + 1,z.tm_mday);
   switch(z.tm_wday) {
   case 0:printf("���j��\n");
   break;
   case 1:printf("���j��\n");
   break;
   case 2:printf("�Ηj��\n");
   break;
   case 3:printf("���j��\n");
   break;
   case 4:printf("�ؗj��\n");
   break;
   case 5:printf("���j��\n");
   break;
   case 6:printf("�y�j��\n");
   break;
   }
   printf("���ݎ���%d��%d��%d�b",z.tm_hour,z.tm_min,z.tm_sec);
   return 0;
}
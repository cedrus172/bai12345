#include <stdio.h>
 
int main ()
{
   int y;
   int menu;
   int price;
   do
   {
       printf("Nhap so theo menu de order do uong \n");
       printf("Bac xiu 1 gia 100k \nSua chua danh da 2 gia 200k \n");
       scanf("%d", &menu);
       
       switch(menu)
       {
           case 1:
            printf("Ban da order thanh cong Bac xiu");
            price += 100000;
            break;
           case 2:
            printf("Ban da order thanh cong Sua chua danh da");
            price += 200000;
            break;
       }
       printf("\nBan co muon tiep tuc order khong ? ( Nhap 0 de huy hoac so bat ki de tiep tuc): \n");
       scanf("%d", &y);
       
       
       
   }
   while(y != 0);
   
   printf("\nSo tien can thanh toan la : %d VND", price);

   printf("\nGood Bye. See you again !\n");

   return 0;
}


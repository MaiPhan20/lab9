#include<stdio.h>


int main() {
   int i, j, maTran1[10][10], maTran2[10][10], maTran3[10][10];
   int row1, col1, row2, col2;

   printf("\nNhap so hang cua Mat1: ");
   scanf("%d", &row1);
   printf("\nNhap so cot cua Mat1: ");
   scanf("%d", &col1);

   printf("\nNhap so hang cua Mat2: ");
   scanf("%d", &row2);
   printf("\nNhap so cot cua Mat2: ");
   scanf("%d", &col2);
   if (row1 != row2 || col1 != col2) {
      printf("\nHai ma tran khong cung kich co!!!");
   }
   printf("\nNhap ma tran 1\n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         printf("Nhap phan tu a[%d][%d] : ", i, j);
         scanf("%d", &maTran1[i][j]);
      }
   }
   printf("\nNhap ma tran 2\n");
   for (i = 0; i < row2; i++)
      for (j = 0; j < col2; j++) {
         printf("Nhap phan tu b[%d][%d] : ", i, j);
         scanf("%d", &maTran2[i][j]);
      }
   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         maTran3[i][j] = maTran1[i][j] + maTran2[i][j];
      }
   printf("\nKet qua cua phep cong hai ma tran la: \n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         printf("%d\t", maTran3[i][j]);
      }
      printf("\n");
   }

   return (0);
}


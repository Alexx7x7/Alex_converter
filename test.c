#include <stdio.h>
int* GetFirstElement(int mas[], int index)
{
 if (index >= 0 && index < 10)
 {
 return &mas[index];
 }
 return NULL;
}
int* GetSecondElement(int mas[12][12], int row, int column)
{
 if (row >= 0 && row < 12 && column >= 0 && column < 12)
 {
 return &mas[row][column];
 }
 return NULL;
}
int main()
{
 int FirstMasive[10] = {0,1,2,3,4,5,6,7,8,9};
 int SecondMasive[12][12];
 for(int i = 0; i < 12; i++)
 {
 for(int j = 0; j < 12; j++)
 {
 SecondMasive[i][j] = i * 12 + j;
 }
 }
 int FirstIndex;
 printf("Write index: ");
 scanf("%d", &FirstIndex);
 int* FirstElement = GetFirstElement(FirstMasive, FirstIndex);
 if (FirstElement != NULL)
 {
 printf("Element in first masive: %d\n", *FirstElement);
 }
 else
 {
 printf("Invalid index\n");
 }
 int row,column;
 printf("\nWrite row: ");
 scanf("%d", &row);
 printf("Write column: ");
 scanf("%d", &column);
 int* SecondElement = GetSecondElement(SecondMasive, row, column);
 if (SecondElement != NULL)
 {
 printf("Element in second masive: %d\n", *SecondElement);
 }
 else
 {
 printf("Invalid index\n");
 }
 return 0;
}
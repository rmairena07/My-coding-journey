#include <stdio.h>

#define ROWS 5
#define COLUMNS 5

int main()
{
  float array[ROWS][COLUMNS] =
  { {1,2,3,4,5},
    {1,1,1,1,1},
    {2,2,2,2,2},
    {1,3,5,7,9},
    {4,5,6,7,8}
  };

  float sum = 0;
  float average = 0;

  for (int i = 0; i < ROWS; i++)
  {
    sum = 0;

    for (int j = 0; j < COLUMNS; j++)
      sum += array[i][j];

    printf("Row %d Sum = %f\n", i, sum);
    average = sum / COLUMNS;
    printf("Row %d Average = %f\n\n", i, average);
  }

  return 0;
}
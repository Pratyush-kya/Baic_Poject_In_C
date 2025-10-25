#include <stdio.h>
int Type();
int main()
{
  int i, j, row, typo;
  printf("Enter The Number Of Row : \n");
  scanf("%d", &row);

  // Choose What Kind Of Operation You Want To Perform.

  while (1)
  {
    typo = Type();
    switch (typo)

    // LEFT TRIANGLE
    {
    case 1:
      for (j = 1; j <= row; j++)
      {
        for (i = 1; i <= j; i++)
        {
          printf("* ");
        }
        printf("\n");
      }
      break;

      // DOWN TRIANGLE

    case 2:
      for (j = row; j >= 1; j--)
      {
        for (i = 1; i <= j; i++)
        {
          printf("*");
        }
        printf("\n");
      }
      break;

      // UPPER TRIANGLE

    case 3:
      for (j = row; j >= 1; j--)
      {
        for (i = 1; i <= row - j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= (2 * j - 1); i++)
        {
          printf("*");
        }
        printf("\n");
      }
      break;

      // PYRAMIND

    case 4:
      for (j = 1; j <= row; j++)
      {
        for (i = 1; i <= row - j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= (2 * j - 1); i++)
        {
          printf("*");
        }
        printf("\n");
      }
      break;

      // RIGHT TRIANGLE

    case 5:
      for (j = 1; j <= row; j++)
      {
        for (i = 1; i <= row - j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= j; i++)
        {
          printf("*");
        }
        printf("\n");
      }
      break;

      // DIMOND

    case 6:
      for (j = 1; j <= row; j++)
      {
        for (i = 1; i <= row - j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= (2 * j - 1); i++)
        {
          printf("*");
        }
        printf("\n");
      }
      for (j = row - 1; j >= 1; j--)
      {
        for (i = 1; i <= row - j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= (2 * j - 1); i++)
        {
          printf("*");
        }
        printf("\n");
      }
      break;

      // LEFT ARROW

    case 7:

      for (j = 1; j <= row; j++)
      {
        for (i = 1; i <= row - j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= j; i++)
        {
          printf("*");
        }
        printf("\n");
      }
      for (j = row - 1; j >= 1; j--)
      {
        for (i = 1; i <= row - j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= j; i++)
        {
          printf("*");
        }
        printf("\n");
      }
      break;

    // Right Arrow

    case 8:
      for (j = 1; j <= row; j++)
      {
        for (i = 1; i <= j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= j; i++)
        {
          printf("*");
        }
        printf("\n");
      }
      for (j = row - 1; j >= 1; j--)
      {
        for (i = 1; i <= j; i++)
        {
          printf(" ");
        }
        for (i = 1; i <= j; i++)
        {
          printf("*");
        }
        printf("\n");
      }
      break;  

    case 0:
      printf("---Your Logic Stops Here---\n");
      return 0;

    default:
      printf("Invalid Choice!\n");
    }
  }
  return 0;
}



int Type()
{
  int choose;
  printf("0.Exit \n");
  printf("1.Left Triangle \n");
  printf("2.down Triangle \n");
  printf("3.Upper Triangle \n");
  printf("4.Pyramid \n");
  printf("5.Right Triangle  \n");
  printf("6.Diamond \n");
  printf("7.Left Arrow \n");
  printf("8.Right Arrow \n");
  scanf("%d", &choose);
  return choose;
}
#include <stdio.h>


int main()
{
  int i, num[3], copy[3];
  int mini, temp;



  //taking input in array
  for(i = 0; i < 3; i++)
  {
    scanf("%d", &num[i]);
    copy[i] = num[i];
  }

  /*
  num[0] = 7
  num[1] = 21
  num[2] = -14
  */

  mini = num[0]; // So, mini = 7

  //finding the smallest number
  for(i = 1; i < 3; i++)
  {
    if (num[i] < mini)
    {
      temp = num[i]; // when i = 2, temp = -14
      num[i] = num[0]; // num[2] = 7
      num[0] = temp; // num[0] = -14
    }
  }


  //finding the largest number
  if (num[2] < num[1]) //num[2] = 7, num[1] = 21
  {
    temp = num[1];  // temp = 21
    num[1] = num[2]; // num[1] = 7
    num[2] = temp; // num[2] = 21
  }


  //printing array in ascending order
  printf("%d\n%d\n%d\n\n", num[0],num[1],num[2]);

  //printing array as given input
  printf("%d\n%d\n%d\n", copy[0],copy[1],copy[2]);


  return 0;
}

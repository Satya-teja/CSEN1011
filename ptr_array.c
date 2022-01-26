# include <stdio.h>
# define SIZE 5
int main(void) {
  int *ptr[SIZE];
  
  int salary = 10000;
  int age = 25;
  int address = 45;
  int account = 12;
  int city = 5;
  
  ptr[0]= &salary;
  ptr[1]= &age;
  ptr[2]= &address;
  ptr[3]= &account;
  ptr[4]= &city;

  printf("The values taken are ...\n");
  for (int index=0; index < SIZE; index++)
    printf("%d\t",*ptr[index]);
  printf("\n");

  printf("Address of salary = %u\nAddress of age = %u\nAddress of address = %u\nAddress of account = %u\nAddress of city = %u\n",&salary,&age, &address, &account, &city);
  printf("The contents of the pointer arrays are ...\n");
  for (int index=0; index < SIZE; index++)
    printf("%u\n",ptr[index]);
  printf("\nAddress of the array ptr is %u", ptr);
  printf("\n");
  
  return 0;
}
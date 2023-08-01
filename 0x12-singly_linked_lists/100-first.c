#include<stdio.h>
/**
* myLinkedlistFun - Apply the constructor attribute to myLinkedlistFun()
* is executed before main()
*/
void myLinkedlistFun(void) __attribute__((constructor));
/**
* myLinkedlistFun - implementation of myLinkedlistFun
*/
void myLinkedlistFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

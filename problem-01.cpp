/**1.	Define a struct Date variable called MyBirthDate and initialize it to September 21, 1967, in the dd/mm/yy format.
Write a program to display the MyBirthDate. Take your own birth date from key board and display it too.
Sample output:
	MyBirthDate :  21 9 1967
	Enter your Birth date:
	26 March 1971
	My Birth Date is in : 26 March 1971
*/
#include<cstdio>
#include<cstring>
struct MyBirthDate{
    int date;
    char month[20];
    int year;

};
int main(){
    struct MyBirthDate Date = {21,"March",1971};
    printf("MyBirthDate: %d %s %d\n",Date.date,Date.month,Date.year);
    printf("Enter your Birth date: ");
    scanf("%d%s%d",&Date.date,&Date.month,&Date.year);
    printf("My Birth Date is in : %d %s %d",Date.date,Date.month,Date.year);
    return 0;
}

/*
 * Program.c
 *
 *  Created on: 03-Mar-2020
 *      Author: sunbeam
 */
# include <stdio.h>
 struct Date{
	int dd,mm,yy;
};


void AcceptDateFromConsole(struct Date* ptDate)
{
	printf("enter the date in dd/mm/yyyy");
	scanf("%d%d%d",&ptDate->dd,&ptDate->mm,&ptDate->yy);
}

void PrintDateOnConsole(struct Date* ptDate){
	printf("the date is =%d/%d/%d",ptDate->dd,ptDate->mm,ptDate->yy);
}

void InitDate(struct Date* ptDate)
{
	ptDate->dd=12;
	ptDate->mm=4;
	ptDate->yy=2020;
}
int menu(){
	int ch;
	printf("0.exit\n");
	printf("1.ACCEPTDATE\n");
	printf("2.INITIALIZE\n");
	printf("3.DISPLAY\n");
	printf("enter  the choice\n");
	scanf("%d",&ch);
	return ch;
}
enum option{
	EXIT,ACCEPT,INITDATE,PRINTDATA
};
int main(int argc, char **argv) {
	struct Date dt;int ch;



	while((ch=menu())!=0){
		switch(ch){
		case ACCEPT:AcceptDateFromConsole(&dt);break;
		case INITDATE:InitDate(&dt);break;
		case PRINTDATA:PrintDateOnConsole(&dt);break;
		}
	}

}




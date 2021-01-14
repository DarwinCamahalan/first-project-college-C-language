#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5

typedef char string;
typedef double realnum;
typedef int num;

FILE *f,*f1,*f2,*f3,*f4,*f5;

num o=1,t=1,i=5,z=1,j=1,x=1,count=5,stack=0,lim=5;
num x,c,menu,Compute_GPA,Del_Record,Edit_Info,Student_ID;

string choice;


struct grades{

realnum g1,g2,g3,g4,g5;	
	
};

struct units{

num u1,u2,u3,u4,u5;	
	
};

struct total{

realnum t1,t2,t3,t4,t5;
	
};

struct info{
struct total t;
struct grades g;
struct units u;	
string fname[20];
string lname[20];
string course[20];
num id;
num yearLevel;
num credit;
realnum gpa;
realnum sumprod;	
	
};

struct info s[size];
struct info *p;


main()
{	
system("cls");
puts("\t\t\t\t STUDENT DATABASE");
puts("\n\t\t\tCREATED BY: DARWIN L. CAMAHALAN");
puts("\n\t\t\t\t    CPE 1B\n");

for(x=1;x<81;x++)
	{       
	printf("%c",223);
	}
	

puts("\t\t\t\t   MAIN MENU\n");

for(x=1;x<81;x++)
	{
	Sleep(1);
	printf("%c",223);	
	}
	
Sleep(100);
puts("\n[A] New Student Record.\n");
Sleep(100);
puts("[B] Edit Student Record.\n");
Sleep(100);
puts("[C] Delete Student Record.\n");
Sleep(100);
puts("[D] Display all the existing student records.\n");
Sleep(100);
puts("[E] Compute GPA.\n");	
Sleep(100);
puts("[F] Display all student record with the highest GPA.\n");
Sleep(100);
puts("[G] Display all student record with the lowest GPA.\n");
Sleep(100);
printf("Choice: "); scanf(" %20[^\n]", &choice);
Sleep(100);
printf("\n\nLOADING PLEASE WAIT: ");
	
for(x=1;x<60;x++)
	{
	Sleep(15);	
	printf("%c",254);
	}
	
while(choice != 'a'&&choice != 'A'&& choice != 'b'&&choice != 'B'&& choice != 'c'&&choice != 'C'&& 
choice != 'd'&&choice != 'D'&& choice != 'e'&&choice != 'E'&& choice != 'f'&&choice != 'F'&& 
choice != 'g'&&choice != 'G')

	{
		
	puts("\nINVALID INPUT TRY AGAIN !");	
	printf("\nChoice: "); scanf(" %c", &choice);
	}

if(i == stack && choice == 'a' || i == stack && choice == 'A' )

	{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\n\n\n\n\t\t   Sorry Student Data Base is Currently Full.\n");
	puts("\t\t\tPress any Key to go back to Menu.");
	getch();
	main();
	}
	


switch(choice)
	{
	
	case 'a':
	case 'A':
	studentinfo();
	break;

	case 'b':
	case 'B':
	edit();
	break;
	
	case 'c':
	case 'C':
	delrecord();
	break;
	
	case 'd':
	case 'D':
	display();
	break;
	
	case 'e':
	case 'E':
	gpa();
	break;
	
	case 'f': 
	case 'F':
	displayhigh();
	break;
	
	case 'g':
	case 'G':
	displaylow();
	break;
	
	default:
	break;	
	
	}
	
}


studentinfo()
{
	
system("cls");
	
		if(count == 4)
		
			{
			j=4;
			lim=1;
			stack=0;
			count += 1;	
			}
			
				else if(count == 3)
	
					{
					j=3;	
					lim=2;
					stack=0;
					count += 2;		
					}

						else if(count == 2)
						
							{
							j=2;
							lim=3;
							stack=0;
							count += 3;	
							}
							
								else if(count == 1)
								
									{
									j=2;	
									lim=4;
									stack=0;
									count += 4;	
									}
										else if(count == 0)
											{
											count += 5;		
											}
for(i=stack; i<lim; i++)
{
	puts("\n\t\t\t\tSTUDENT INFORMATION");
	
	for(x=1;x<81;x++)
		{
		Sleep(1);	
		printf("%c",223);
		}
		
	printf("\n\t\t\t\tSTUDENT [ %d / 5 ]", j++);
	printf("\n\nID Number: "); scanf(" %d", &s[i].id);
	printf("\nFirst Name: "); scanf(" %20[^\n]", &s[i].fname);
	printf("\nLast Name: "); scanf(" %20[^\n]", &s[i].lname);
	printf("\nCourse: "); scanf(" %20[^\n]", &s[i].course);
	printf("\nYear Level: "); scanf(" %d", &s[i].yearLevel);
	puts("");
	
	for(x=1;x<81;x++)
		{	
		printf("%c",223);	
		}
		
	printf("\nMath Grade: "); scanf(" %lf", &s[i].g.g1);
	printf("\nUnit: "); scanf(" %d", &s[i].u.u1);
	
	printf("\nScience Grade: "); scanf(" %lf", &s[i].g.g2);
	printf("\nUnit: "); scanf(" %d", &s[i].u.u2);
	
	printf("\nFilipino Grade: "); scanf(" %lf", &s[i].g.g3);
	printf("\nUnit: "); scanf(" %d", &s[i].u.u3);
	
	printf("\nP.E Grade: "); scanf(" %lf", &s[i].g.g4);
	printf("\nUnit: "); scanf(" %d", &s[i].u.u4);
	
	printf("\nEnglish Grade: "); scanf(" %lf", &s[i].g.g5);
	printf("\nUnit: "); scanf(" %d", &s[i].u.u5);
	
	
	s[i].credit = s[i].u.u1+ s[i].u.u2+ s[i].u.u3+ s[i].u.u4+ s[i].u.u5;
	
	s[i].t.t1 = s[i].g.g1 * s[i].u.u1;
	s[i].t.t2 = s[i].g.g2 * s[i].u.u2;
	s[i].t.t3 = s[i].g.g3 * s[i].u.u3;
	s[i].t.t4 = s[i].g.g4 * s[i].u.u4;
	s[i].t.t5 = s[i].g.g5 * s[i].u.u5;
	
	s[i].sumprod = s[i].t.t1 + s[i].t.t2 + s[i].t.t3 + s[i].t.t4 + s[i].t.t5;
	
	s[i].gpa = s[i].sumprod / s[i].credit;
	
	
	if(i < 4)
	
		{
		system("cls");
		}
}

printf("\n\nLOADING PLEASE WAIT: ");
	
for(x=1;x<60;x++)
	{
	Sleep(15);	
	printf("%c",254);
	}

	
puts("\nAll Student Sucessfully Added!\n");
puts("\nPress Any key to go to Menu.");
getch(); 
s1();

}


s1()
{
	
if((f1=fopen("student1.txt","w"))==NULL)

	{
		puts("File Doesn't Exist!");
		puts("Press Any Key to go back to Menu.");
		getch();
		main();
	}


fprintf(f1,"\nID Number: %d", s[0].id);
fprintf(f1,"\nName: %s %s", s[0].fname,s[0].lname);
fprintf(f1,"\nCourse: %s", s[0].course);
fprintf(f1,"\nYeal Level: %d", s[0].yearLevel);
fprintf(f1,"\n\n");
fprintf(f1,"\nMath: %.2lf", s[0].g.g1);
fprintf(f1,"\nScience: %.2lf", s[0].g.g2);
fprintf(f1,"\nFilipino: %.2lf", s[0].g.g3);
fprintf(f1,"\nPhysical Education: %.2lf", s[0].g.g4);
fprintf(f1,"\nEnglish: %.2lf", s[0].g.g5);
fprintf(f1,"\n\nTotal Credit: %d", s[0].credit);

if(Student_ID ==s[0].id)

	{
	fprintf(f1,"\n\nStudent GPA: %.2lf", s[0].gpa);
	}
	
fprintf(f1,"\n--------------------------------------------------------------------------------\n");

fclose(f1);
s2();
	
}


s2()
{
	
if((f2=fopen("student2.txt","w"))==NULL)

	{
		puts("File Doesn't Exist!");
		puts("Press Any Key to go back to Menu.");
		getch();
		main();
	}


fprintf(f2,"\nID Number: %d", s[1].id);
fprintf(f2,"\nName: %s %s", s[1].fname,s[1].lname);
fprintf(f2,"\nCourse: %s", s[1].course);
fprintf(f2,"\nYeal Level: %d", s[1].yearLevel);
fprintf(f2,"\n\n");
fprintf(f2,"\nMath: %.2lf", s[1].g.g1);
fprintf(f2,"\nScience: %.2lf", s[1].g.g2);
fprintf(f2,"\nFilipino: %.2lf", s[1].g.g3);
fprintf(f2,"\nPhysical Education: %.2lf", s[1].g.g4);
fprintf(f2,"\nEnglish: %.2lf", s[1].g.g5);
fprintf(f2,"\n\nTotal Credit: %d", s[1].credit);

if(Student_ID == s[1].id)

	{
	fprintf(f2,"\n\nStudent GPA: %.2lf", s[1].gpa);
	}
	
fprintf(f2,"\n--------------------------------------------------------------------------------\n");

fclose(f2);		
s3();	

}


s3()
{
	
if((f3=fopen("student3.txt","w"))==NULL)
	{
		puts("File Doesn't Exist!");
		puts("Press Any Key to go back to Menu.");
		getch();
		main();
	}

fprintf(f3,"\nID Number: %d", s[2].id);
fprintf(f3,"\nName: %s %s", s[2].fname,s[2].lname);
fprintf(f3,"\nCourse: %s", s[2].course);
fprintf(f3,"\nYeal Level: %d", s[2].yearLevel);
fprintf(f3,"\n\n");
fprintf(f3,"\nMath: %.2lf", s[2].g.g1);
fprintf(f3,"\nScience: %.2lf", s[2].g.g2);
fprintf(f3,"\nFilipino: %.2lf", s[2].g.g3);
fprintf(f3,"\nPhysical Education: %.2lf", s[2].g.g4);
fprintf(f3,"\nEnglish: %.2lf", s[2].g.g5);
fprintf(f3,"\n\nTotal Credit: %d", s[2].credit);

if(Student_ID ==s[2].id)
	{
	fprintf(f3,"\n\nStudent GPA: %.2lf", s[2].gpa);
	}
	
fprintf(f3,"\n--------------------------------------------------------------------------------\n");

fclose(f3);		
s4();
	
}


s4()
{
	
if((f4=fopen("student4.txt","w"))==NULL)

	{
		puts("File Doesn't Exist!");
		puts("Press Any Key to go back to Menu.");
		getch();
		main();
	}

fprintf(f4,"\nID Number: %d", s[3].id);
fprintf(f4,"\nName: %s %s", s[3].fname,s[3].lname);
fprintf(f4,"\nCourse: %s", s[3].course);
fprintf(f4,"\nYeal Level: %d", s[3].yearLevel);
fprintf(f4,"\n\n");
fprintf(f4,"\nMath: %.2lf", s[3].g.g1);
fprintf(f4,"\nScience: %.2lf", s[3].g.g2);
fprintf(f4,"\nFilipino: %.2lf", s[3].g.g3);
fprintf(f4,"\nPhysical Education: %.2lf", s[3].g.g4);
fprintf(f4,"\nEnglish: %.2lf", s[3].g.g5);
fprintf(f4,"\n\nTotal Credit: %d", s[3].credit);

if(Student_ID ==s[3].id)
	{
	fprintf(f4,"\n\nStudent GPA: %.2lf", s[3].gpa);
	}
	
fprintf(f4,"\n--------------------------------------------------------------------------------\n");

fclose(f4);		
s5();
	
}


s5()
{
	
if((f5=fopen("student5.txt","w"))==NULL)
	{
		puts("File Doesn't Exist!");
		puts("Press Any Key to go back to Menu.");
		getch();
		main();
	}

fprintf(f5,"\nID Number: %d", s[4].id);
fprintf(f5,"\nName: %s %s", s[4].fname,s[4].lname);
fprintf(f5,"\nCourse: %s", s[4].course);
fprintf(f5,"\nYeal Level: %d", s[4].yearLevel);
fprintf(f5,"\n\n");
fprintf(f5,"\nMath: %.2lf", s[4].g.g1);
fprintf(f5,"\nScience: %.2lf", s[4].g.g2);
fprintf(f5,"\nFilipino: %.2lf", s[4].g.g3);
fprintf(f5,"\nPhysical Education: %.2lf", s[4].g.g4);
fprintf(f5,"\nEnglish: %.2lf", s[4].g.g5);
fprintf(f5,"\n\nTotal Credit: %d", s[4].credit);

if(Student_ID ==s[4].id)
	{
	fprintf(f5,"\n\nStudent GPA: %.2lf", s[4].gpa);
	}
	
fprintf(f5,"\n--------------------------------------------------------------------------------\n");

fclose(f5);		
merge();

}


merge()
{
f1 = fopen("student1.txt","r");
f2 = fopen("student2.txt","r");
f3 = fopen("student3.txt","r");
f4 = fopen("student4.txt","r");
f5 = fopen("student5.txt","r");
f = fopen("Student Information.txt","w");

if(f1 == NULL || f2 == NULL ||f3 == NULL ||f4 == NULL ||f5 == NULL || f == NULL)
	{
		puts("\nFile Doesn't Exist!");
		puts("\nPress Any Key to Go Back to Menu.");
		getch();
		main();	
	}

while ((c = fgetc(f1)) != EOF) 
      fputc(c, f); 
      
while ((c = fgetc(f2)) != EOF) 
      fputc(c, f);
      
while ((c = fgetc(f3)) != EOF) 
      fputc(c, f);

while ((c = fgetc(f4)) != EOF) 
      fputc(c, f);

while ((c = fgetc(f5)) != EOF) 
      fputc(c, f);

fclose(f);
fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);	

main();	

}


edit()
{
system("cls");


f1 = fopen("student1.txt","w");
f2 = fopen("student2.txt","w");
f3 = fopen("student3.txt","w");
f4 = fopen("student4.txt","w");
f5 = fopen("student5.txt","w");

if(f1 == NULL || f2 == NULL ||f3 == NULL ||f4 == NULL ||f5 == NULL)

	{
		puts("\nFile Doesn't Exist!");
		puts("\nPress Any Key to Go Back to Menu.");
		getch();
		main();	
	}


puts("\n\t\t\t\tEDIT SECTION:\n");

for(x=1;x<81;x++)
	{
	Sleep(1);
	printf("%c",223);	
	}

printf("\n\nEnter ID Number: "); scanf(" %d",&Edit_Info);

if(Edit_Info == s[0].id)
{	
	system("cls");
	
	puts("\n\t\t\t\tEDIT MODE:");
	
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}	
		
	printf("\nID Number: "); scanf(" %d",&s[0].id);
	printf("\nFirst Name: "); scanf(" %20[^\n]",&s[0].fname);
	printf("\nLast Name: "); scanf(" %20[^\n]",&s[0].lname);
	printf("\nCourse: "); scanf(" %20[^\n]",&s[0].course);
	printf("\nYear Level: "); scanf(" %d",&s[0].yearLevel);
	
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	printf("\nMath Grade: "); scanf("%lf",&s[0].g.g1);
	printf("\nUnit: "); scanf(" %d", &s[0].u.u1);
	printf("\nScience Grade: "); scanf("%lf",&s[0].g.g2);
	printf("\nUnit: "); scanf(" %d", &s[0].u.u2);
	printf("\nFilipino Grade: "); scanf("%lf",&s[0].g.g3);
	printf("\nUnit: "); scanf(" %d", &s[0].u.u3);
	printf("\nP.E Grade: "); scanf("%lf",&s[0].g.g4);
	printf("\nUnit: "); scanf(" %d", &s[0].u.u4);
	printf("\nEnglish Grade: "); scanf("%lf",&s[0].g.g5);
	printf("\nUnit: "); scanf(" %d", &s[0].u.u5);
	
	s[0].credit = s[0].u.u1+ s[0].u.u2+ s[0].u.u3+ s[0].u.u4+ s[0].u.u5;
	
	s[0].t.t1 = s[0].g.g1 * s[0].u.u1;
	s[0].t.t2 = s[0].g.g2 * s[0].u.u2;
	s[0].t.t3 = s[0].g.g3 * s[0].u.u3;
	s[0].t.t4 = s[0].g.g4 * s[0].u.u4;
	s[0].t.t5 = s[0].g.g5 * s[0].u.u5;
	
	s[0].sumprod = s[0].t.t1 + s[0].t.t2 + s[0].t.t3 + s[0].t.t4 + s[0].t.t5;
	
	s[0].gpa = s[0].sumprod / s[0].credit;

}

else if(Edit_Info == s[1].id)

{
	system("cls");
	puts("\n\t\t\t\tEDIT MODE:");
		
	for(x=1;x<81;x++)
	{
		Sleep(1);
	printf("%c",223);	
	}
	
	printf("\nID Number: "); scanf(" %d",&s[1].id);
	printf("\nFirst Name: "); scanf(" %20[^\n]",&s[1].fname);
	printf("\nLast Name: "); scanf(" %20[^\n]",&s[1].lname);
	printf("\nCourse: "); scanf(" %20[^\n]",&s[1].course);
	printf("\nYear Level: "); scanf(" %d",&s[1].yearLevel);
	
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	printf("\nMath Grade: "); scanf("%lf",&s[1].g.g1);
	printf("\nUnit: "); scanf(" %d", &s[1].u.u1);
	printf("\nScience Grade: "); scanf("%lf",&s[1].g.g2);
	printf("\nUnit: "); scanf(" %d", &s[1].u.u2);
	printf("\nFilipino Grade: "); scanf("%lf",&s[1].g.g3);
	printf("\nUnit: "); scanf(" %d", &s[1].u.u3);
	printf("\nP.E Grade: "); scanf("%lf",&s[1].g.g4);
	printf("\nUnit: "); scanf(" %d", &s[1].u.u4);
	printf("\nEnglish Grade: "); scanf("%lf",&s[1].g.g5);
	printf("\nUnit: "); scanf(" %d", &s[1].u.u5);
	
	s[1].credit = s[1].u.u1+ s[1].u.u2+ s[1].u.u3+ s[1].u.u4+ s[1].u.u5;
	
	s[1].t.t1 = s[1].g.g1 * s[1].u.u1;
	s[1].t.t2 = s[1].g.g2 * s[1].u.u2;
	s[1].t.t3 = s[1].g.g3 * s[1].u.u3;
	s[1].t.t4 = s[1].g.g4 * s[1].u.u4;
	s[1].t.t5 = s[1].g.g5 * s[1].u.u5;
	
	s[1].sumprod = s[1].t.t1 + s[1].t.t2 + s[1].t.t3 + s[1].t.t4 + s[1].t.t5;
	
	s[1].gpa = s[1].sumprod / s[1].credit;	
		
}
	
else if(Edit_Info ==s[2].id)
	{
	
	system("cls");
	puts("\n\t\t\t\tEDIT MODE:");
		
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	printf("\nID Number: "); scanf(" %d",&s[2].id);
	printf("\nFirst Name: "); scanf(" %20[^\n]",&s[2].fname);
	printf("\nLast Name: "); scanf(" %20[^\n]",&s[2].lname);
	printf("\nCourse: "); scanf(" %20[^\n]",&s[2].course);
	printf("\nYear Level: "); scanf(" %d",&s[2].yearLevel);
	
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	printf("\nMath Grade: "); scanf("%lf",&s[2].g.g1);
	printf("\nUnit: "); scanf(" %d", &s[2].u.u1);
	printf("\nScience Grade: "); scanf("%lf",&s[2].g.g2);
	printf("\nUnit: "); scanf(" %d", &s[2].u.u2);
	printf("\nFilipino Grade: "); scanf("%lf",&s[2].g.g3);
	printf("\nUnit: "); scanf(" %d", &s[2].u.u3);
	printf("\nP.E Grade: "); scanf("%lf",&s[2].g.g4);
	printf("\nUnit: "); scanf(" %d", &s[2].u.u4);
	printf("\nEnglish Grade: "); scanf("%lf",&s[2].g.g5);
	printf("\nUnit: "); scanf(" %d", &s[2].u.u5);
	s[2].credit = s[2].u.u1+ s[2].u.u2+ s[2].u.u3+ s[2].u.u4+ s[2].u.u5;
	
	s[2].t.t1 = s[2].g.g1 * s[2].u.u1;
	s[2].t.t2 = s[2].g.g2 * s[2].u.u2;
	s[2].t.t3 = s[2].g.g3 * s[2].u.u3;
	s[2].t.t4 = s[2].g.g4 * s[2].u.u4;
	s[2].t.t5 = s[2].g.g5 * s[2].u.u5;
	
	s[2].sumprod = s[2].t.t1 + s[2].t.t2 + s[2].t.t3 + s[2].t.t4 + s[2].t.t5;
	
	s[2].gpa = s[2].sumprod / s[2].credit;
				
}

else if(Edit_Info == s[3].id)

{

	system("cls");
	puts("\n\t\t\t\tEDIT MODE:");
	
	for(x=1;x<81;x++)
	
		{
			Sleep(1);
		printf("%c",223);	
		}	
		
	printf("\nID Number: "); scanf(" %d",&s[3].id);
	printf("\nFirst Name: "); scanf(" %20[^\n]",&s[3].fname);
	printf("\nLast Name: "); scanf(" %20[^\n]",&s[3].lname);
	printf("\nCourse: "); scanf(" %20[^\n]",&s[3].course);
	printf("\nYear Level: "); scanf(" %d",&s[3].yearLevel);
	
	for(x=1;x<81;x++)
	
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	printf("\nMath Grade: "); scanf("%lf",&s[3].g.g1);
	printf("\nUnit: "); scanf(" %d", &s[3].u.u1);
	printf("\nScience Grade: "); scanf("%lf",&s[3].g.g2);
	printf("\nUnit: "); scanf(" %d", &s[3].u.u2);
	printf("\nFilipino Grade: "); scanf("%lf",&s[3].g.g3);
	printf("\nUnit: "); scanf(" %d", &s[3].u.u3);
	printf("\nP.E Grade: "); scanf("%lf",&s[3].g.g4);
	printf("\nUnit: "); scanf(" %d", &s[3].u.u4);
	printf("\nEnglish Grade: "); scanf("%lf",&s[3].g.g5);
	printf("\nUnit: "); scanf(" %d", &s[3].u.u5);
	
	s[3].credit = s[3].u.u1+ s[3].u.u2+ s[3].u.u3+ s[3].u.u4+ s[3].u.u5;
	
	s[3].t.t1 = s[3].g.g1 * s[3].u.u1;
	s[3].t.t2 = s[3].g.g2 * s[3].u.u2;
	s[3].t.t3 = s[3].g.g3 * s[3].u.u3;
	s[3].t.t4 = s[3].g.g4 * s[3].u.u4;
	s[3].t.t5 = s[3].g.g5 * s[3].u.u5;
	
	s[3].sumprod = s[3].t.t1 + s[3].t.t2 + s[3].t.t3 + s[3].t.t4 + s[3].t.t5;
	
	s[3].gpa = s[3].sumprod / s[3].credit;	
			
}

else if(Edit_Info ==s[4].id)
{
	
	system("cls");
	puts("\n\t\t\t\tEDIT MODE:");
	
		for(x=1;x<81;x++)
			{
				Sleep(1);
			printf("%c",223);	
			}	
			
	printf("\nID Number: "); scanf(" %d",&s[4].id);
	printf("\nFirst Name: "); scanf(" %20[^\n]",&s[4].fname);
	printf("\nLast Name: "); scanf(" %20[^\n]",&s[4].lname);
	printf("\nCourse: "); scanf(" %20[^\n]",&s[4].course);
	printf("\nYear Level: "); scanf(" %d",&s[4].yearLevel);
	
		for(x=1;x<81;x++)
			{
				Sleep(1);
			printf("%c",223);	
			}
			
	printf("\nMath Grade: "); scanf("%lf",&s[4].g.g1);
	printf("\nUnit: "); scanf(" %d", &s[4].u.u1);
	printf("\nScience Grade: "); scanf("%lf",&s[4].g.g2);
	printf("\nUnit: "); scanf(" %d", &s[4].u.u2);
	printf("\nFilipino Grade: "); scanf("%lf",&s[4].g.g3);
	printf("\nUnit: "); scanf(" %d", &s[4].u.u3);
	printf("\nP.E Grade: "); scanf("%lf",&s[4].g.g4);
	printf("\nUnit: "); scanf(" %d", &s[4].u.u4);
	printf("\nEnglish Grade: "); scanf("%lf",&s[4].g.g5);
	printf("\nUnit: "); scanf(" %d", &s[4].u.u5);
	
	s[4].credit = s[4].u.u1+ s[4].u.u2+ s[4].u.u3+ s[4].u.u4+ s[4].u.u5;
	
	s[4].t.t1 = s[4].g.g1 * s[4].u.u1;
	s[4].t.t2 = s[4].g.g2 * s[4].u.u2;
	s[4].t.t3 = s[4].g.g3 * s[4].u.u3;
	s[4].t.t4 = s[4].g.g4 * s[4].u.u4;
	s[4].t.t5 = s[4].g.g5 * s[4].u.u5;
	
	s[4].sumprod = s[4].t.t1 + s[4].t.t2 + s[4].t.t3 + s[4].t.t4 + s[4].t.t5;
	
	s[4].gpa = s[4].sumprod / s[4].credit;	
			
}

	else if(Edit_Info != s[0].id && Edit_Info != s[1].id &&
			Edit_Info != s[2].id && Edit_Info != s[3].id &&
			Edit_Info != s[4].id)
							{
							puts("\n\t\t\tID Number Doesn't Exist! ");
							puts("\n\n\t\t\tPress Any key to Try Again.");
							getch();
							edit();	
							}

fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);	

for(x=1;x<81;x++)
	{
		Sleep(1);
	printf("%c",223);	
	}
	
puts("\n[1] Edit Student Record Again.");
puts("[2] Back to Menu.\n");
printf("Choice: "); scanf("%d", &menu);

if(menu == 1)
	{
	edit();	
	}
	else
	
s1();

}


display()
{
	
system("cls");
f = fopen("Student Information.txt", "r");

if(f == NULL)
	{
		puts("\nFile is NULL. Please Add Student First!");
		puts("\nPress Any Key to go Back to Menu.");
		getch();
		main();
	}
			
		if (f)
			{
			    while ((c = getc(f)) != EOF)
			        putchar(c);
			fclose(f);
			
			}

puts("Press Any key to go to Menu.");

getch(); 
main();

}


delrecord()
{	

system("cls");
j=1;

puts("\t\t\t\tDELETE SECTION:\n\n");

	for(x=1;x<81;x++)
		{
			Sleep(3);
		printf("%c",223);	
		}


printf("\n\nEnter ID Number: "); scanf(" %d",&Del_Record);

if(choice == 'a' || choice == 'A'){
count=5;	
}
count--;

if(Del_Record ==s[0].id)

	{
	f1 = fopen("student1.txt","w");	
	fprintf(f1,"");		
	}

		else if(Del_Record ==s[1].id)
		
			{
			f2 = fopen("student2.txt","w");	
			fprintf(f2,"");		
			}


			else if(Del_Record ==s[2].id)
				{
				f3 = fopen("student3.txt","w");	
				fprintf(f3,"");		
				}

				else if(Del_Record ==s[3].id)
					{
					f4 = fopen("student4.txt","w");	
					fprintf(f4,"");		
					}

					else if(Del_Record ==s[4].id)
						{
						f5 = fopen("student5.txt","w");	
						fprintf(f5,"");	
						}
						
						else if(Del_Record != s[0].id && Del_Record != s[1].id &&
						Del_Record != s[2].id && Del_Record != s[3].id &&
						Del_Record != s[4].id)
							{
							puts("\n\t\t\tID Number Doesn't Exist! ");
							puts("\n\n\t\t\tPress Any key to Try Again.");
							getch();
							delrecord();	
							}
						
for(x=1;x<81;x++)
	{
		Sleep(1);
	printf("%c",223);	
	}
	
puts("\nStudent Record Successfully Deleted!\n\n");
	
fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);	

puts("Press Any key to go to Menu.");

getch(); 
merge();	
	
	
}


gpa()
{
	
p = s;	

system("cls");
	
puts("\t\t\t\tCOMPUTE GPA SECTION:");

for(x=1;x<81;x++)
	{
		Sleep(3);
	printf("%c",223);	
	}


printf("\n\nEnter ID Number: "); scanf(" %d",&Student_ID);
system("cls");

if(Student_ID == s[0].id)
{
	f1=fopen("student1.txt","r");
	fscanf(f1,"d: %s",p->fname);
	fscanf(f1,"d: %s",p->lname);
	fscanf(f1,"d: %lf",p->g.g1);
	fscanf(f1,"d: %lf",p->g.g2);
	fscanf(f1,"d: %lf",p->g.g3);
	fscanf(f1,"d: %lf",p->g.g4);
	fscanf(f1,"d: %lf",p->g.g5);
	fscanf(f1,"d: %d",p->credit);
	fscanf(f1,"d: %lf",p->gpa);
	
	printf("\t\t\t\t%s %s Grades:",s[0].fname,s[0].lname);
	printf("\nMath: %.2lf", s[0].g.g1);
	printf("\nScience: %.2lf", s[0].g.g2);
	printf("\nFilipino: %.2lf", s[0].g.g3);
	printf("\nPhysical Education: %.2lf", s[0].g.g4);
	printf("\nEnglish: %.2lf", s[0].g.g5);
	printf("\n\nTotal Credit: %d", s[0].credit);
	puts("\n");
	
	for(x=1;x<81;x++)
	{
		Sleep(1);
		printf("%c",223);	
	}
	
	puts("\n\n[1] Compute GPA.");
	puts("[2] Go back to Menu.");
	printf("\n\nChoice: "); scanf("%d", &Compute_GPA);
	
	if(Compute_GPA == 1)
		{
			system("cls");
			printf("\t\t\t\t%s %s Grades:",s[0].fname,s[0].lname);
			printf("\nMath: %.2lf", s[0].g.g1);
			printf("\nScience: %.2lf", s[0].g.g2);
			printf("\nFilipino: %.2lf", s[0].g.g3);
			printf("\nPhysical Education: %.2lf", s[0].g.g4);
			printf("\nEnglish: %.2lf", s[0].g.g5);
			printf("\n\nTotal Credit: %d", s[0].credit);	
			printf("\n\nStudent GPA: %.2lf", s[0].gpa);
			puts("\n");
			
			for(x=1;x<81;x++)
				{
					Sleep(1);
				printf("%c",223);	
				}
				
			printf("\n\nPress any key to go Back to Menu.");
			
			getch();
			s1();
		}
	main();
}

else if(Student_ID == s[1].id)

{
	
f2=fopen("student2.txt","r");

fscanf(f2,"d: %s",p->fname);
fscanf(f2,"d: %s",p->lname);
fscanf(f2,"d: %lf",p->g.g1);
fscanf(f2,"d: %lf",p->g.g2);
fscanf(f2,"d: %lf",p->g.g3);
fscanf(f2,"d: %lf",p->g.g4);
fscanf(f2,"d: %lf",p->g.g5);
fscanf(f2,"d: %d",p->credit);
fscanf(f2,"d: %lf",p->gpa);

printf("\t\t\t\t%s %s Grades:",s[1].fname,s[1].lname);
printf("\nMath: %.2lf", s[1].g.g1);
printf("\nScience: %.2lf", s[1].g.g2);
printf("\nFilipino: %.2lf", s[1].g.g3);
printf("\nPhysical Education: %.2lf", s[1].g.g4);
printf("\nEnglish: %.2lf", s[1].g.g5);
printf("\n\nTotal Credit: %d", s[1].credit);
puts("\n");

for(x=1;x<81;x++)
	{
		Sleep(1);
	printf("%c",223);	
	}
	
puts("\n\n[1] Compute GPA.");
puts("[2] Go back to Menu.");
printf("\n\nChoice: "); scanf("%d", &Compute_GPA);

if(Compute_GPA == 1)
{
	system("cls");
	printf("\t\t\t\t%s %s Grades:",s[1].fname,s[1].lname);
	printf("\nMath: %.2lf", s[1].g.g1);
	printf("\nScience: %.2lf", s[1].g.g2);
	printf("\nFilipino: %.2lf", s[1].g.g3);
	printf("\nPhysical Education: %.2lf", s[1].g.g4);
	printf("\nEnglish: %.2lf", s[1].g.g5);
	printf("\n\nTotal Credit: %d", s[1].credit);	
	printf("\n\nStudent GPA: %.2lf", s[1].gpa);
	puts("\n");
	
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	printf("\n\nPress any key to go Back to Menu.");
	
	getch();
	s2();	
}
main();
}


else if(Student_ID == s[2].id)

{
	f3=fopen("student3.txt","r");
	
	
	fscanf(f3,"d: %s",p->fname);
	fscanf(f3,"d: %s",p->lname);
	fscanf(f3,"d: %lf",p->g.g1);
	fscanf(f3,"d: %lf",p->g.g2);
	fscanf(f3,"d: %lf",p->g.g3);
	fscanf(f3,"d: %lf",p->g.g4);
	fscanf(f3,"d: %lf",p->g.g5);
	fscanf(f3,"d: %d",p->credit);
	fscanf(f3,"d: %lf",p->gpa);
	
	printf("\t\t\t\t%s %s Grades:",s[2].fname,s[2].lname);
	printf("\nMath: %.2lf", s[2].g.g1);
	printf("\nScience: %.2lf", s[2].g.g2);
	printf("\nFilipino: %.2lf", s[2].g.g3);
	printf("\nPhysical Education: %.2lf", s[2].g.g4);
	printf("\nEnglish: %.2lf", s[2].g.g5);
	printf("\n\nTotal Credit: %d", s[2].credit);
	puts("\n");
	
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	puts("\n\n[1] Compute GPA.");
	puts("[2] Go back to Menu.");
	printf("\n\nChoice: "); scanf("%d", &Compute_GPA);
	
	if(Compute_GPA == 1)
	{
		system("cls");
		printf("\t\t\t\t%s %s Grades:",s[2].fname,s[2].lname);
		printf("\nMath: %.2lf", s[2].g.g1);
		printf("\nScience: %.2lf", s[2].g.g2);
		printf("\nFilipino: %.2lf", s[2].g.g3);
		printf("\nPhysical Education: %.2lf", s[2].g.g4);
		printf("\nEnglish: %.2lf", s[2].g.g5);
		printf("\n\nTotal Credit: %d", s[2].credit);	
		printf("\n\nStudent GPA: %.2lf", s[2].gpa);
		puts("\n");
		
		for(x=1;x<81;x++)
			{
				Sleep(1);
			printf("%c",223);	
			}
			
		printf("\n\nPress any key to go Back to Menu.");
		
		getch();
		s3();	
	}
	main();
}

else if(Student_ID == s[3].id)

{
	
	f4=fopen("student4.txt","r");
	
	
	fscanf(f4,"d: %s",p->fname);
	fscanf(f4,"d: %s",p->lname);
	fscanf(f4,"d: %lf",p->g.g1);
	fscanf(f4,"d: %lf",p->g.g2);
	fscanf(f4,"d: %lf",p->g.g3);
	fscanf(f4,"d: %lf",p->g.g4);
	fscanf(f4,"d: %lf",p->g.g5);
	fscanf(f4,"d: %d",p->credit);
	fscanf(f4,"d: %lf",p->gpa);
	
	printf("\t\t\t\t%s %s Grades:",s[3].fname,s[3].lname);
	printf("\nMath: %.2lf", s[3].g.g1);
	printf("\nScience: %.2lf", s[3].g.g2);
	printf("\nFilipino: %.2lf", s[3].g.g3);
	printf("\nPhysical Education: %.2lf", s[3].g.g4);
	printf("\nEnglish: %.2lf", s[3].g.g5);
	printf("\n\nTotal Credit: %d", s[3].credit);
	puts("\n");
	
	for(x=1;x<81;x++)
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	puts("\n\n[1] Compute GPA.");
	puts("[2] Go back to Menu.");
	printf("\n\nChoice: "); scanf("%d", &Compute_GPA);
	
	if(Compute_GPA == 1)
	
	{
		system("cls");
		printf("\t\t\t\t%s %s Grades:",s[3].fname,s[3].lname);
		printf("\nMath: %.2lf", s[3].g.g1);
		printf("\nScience: %.2lf", s[3].g.g2);
		printf("\nFilipino: %.2lf", s[3].g.g3);
		printf("\nPhysical Education: %.2lf", s[3].g.g4);
		printf("\nEnglish: %.2lf", s[3].g.g5);
		printf("\n\nTotal Credit: %d", s[3].credit);	
		printf("\n\nStudent GPA: %.2lf", s[3].gpa);
		puts("\n");
		
		for(x=1;x<81;x++)
			{
				Sleep(1);
			printf("%c",223);	
			}
			
		printf("\n\nPress any key to go Back to Menu.");
		getch();
		s4();
	}
	main();
}

else if(Student_ID == s[4].id)

{
		
	f5=fopen("student5.txt","r");
	
	
	fscanf(f5,"d: %s",p->fname);
	fscanf(f5,"d: %s",p->lname);
	fscanf(f5,"d: %lf",p->g.g1);
	fscanf(f5,"d: %lf",p->g.g2);
	fscanf(f5,"d: %lf",p->g.g3);
	fscanf(f5,"d: %lf",p->g.g4);
	fscanf(f5,"d: %lf",p->g.g5);
	fscanf(f5,"d: %d",p->credit);
	fscanf(f5,"d: %lf",p->gpa);
	
	printf("\t\t\t\t%s %s Grades:",s[4].fname,s[4].lname);
	printf("\nMath: %.2lf", s[4].g.g1);
	printf("\nScience: %.2lf", s[4].g.g2);
	printf("\nFilipino: %.2lf", s[4].g.g3);
	printf("\nPhysical Education: %.2lf", s[4].g.g4);
	printf("\nEnglish: %.2lf", s[4].g.g5);
	printf("\n\nTotal Credit: %d", s[4].credit);
	puts("\n");
	
	for(x=1;x<81;x++)
	
		{
			Sleep(1);
		printf("%c",223);	
		}
		
	puts("\n");
	puts("\n\n[1] Compute GPA.");
	puts("[2] Go back to Menu.");
	printf("\n\nChoice: "); scanf("%d", &Compute_GPA);
	
	if(Compute_GPA == 1)
	
	{
		system("cls");
		printf("\t\t\t\t%s %s Grades:",s[4].fname,s[4].lname);
		printf("\nMath: %.2lf", s[4].g.g1);
		printf("\nScience: %.2lf", s[4].g.g2);
		printf("\nFilipino: %.2lf", s[4].g.g3);
		printf("\nPhysical Education: %.2lf", s[4].g.g4);
		printf("\nEnglish: %.2lf", s[4].g.g5);
		printf("\n\nTotal Credit: %d", s[4].credit);	
		printf("\n\nStudent GPA: %.2lf", s[4].gpa);
		puts("\n");
		
		for(x=1;x<81;x++)
			{
				Sleep(1);
			printf("%c",223);	
			}
			
		printf("\n\nPress any key to go Back to Menu.");
		
		getch();
		s5();	
	}
	main();
}

else if(Student_ID != s[0].id && Student_ID != s[1].id &&
			Student_ID != s[2].id && Student_ID != s[3].id &&
			Student_ID != s[4].id)
							{
							puts("\n\t\t\tID Number Doesn't Exist! ");
							puts("\n\n\t\t\tPress Any key to Try Again.");
							getch();
							gpa();	
							}
fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);	

}


displayhigh()
{
system("cls");

f1 = fopen("student1.txt","r");
f2 = fopen("student2.txt","r");
f3 = fopen("student3.txt","r");
f4 = fopen("student4.txt","r");
f5 = fopen("student5.txt","r");

if(f1 == NULL || f2 == NULL || f3 == NULL || 
f4 == NULL || f5 == NULL)
	{
	puts("File Currently NULL.\n");
	puts("Press any key to continue.");
	getch();
	main();		
	}
	
fscanf(f1,"GPA: %lf", s[0].gpa);
fscanf(f2,"GPA: %lf", s[1].gpa);
fscanf(f3,"GPA: %lf", s[2].gpa);
fscanf(f4,"GPA: %lf", s[3].gpa);
fscanf(f5,"GPA: %lf", s[4].gpa);

puts("\n\t\t\tSTUDENT GPA HIGHEST TO LOWEST");

	for(x=1;x<81;x++)
		{
			Sleep(3);
		printf("%c",223);	
		}

if(s[0].gpa<s[1].gpa<s[2].gpa<s[3].gpa<s[4].gpa){

for(z=0;z<5;z++)
	{
	
	printf("\n\nID Number: %d", s[z].id);
	printf("\nName: %s %s", s[z].fname,s[z].lname);
	printf("\nCourse: %s", s[z].course);
	printf("\nYeal Level: %d", s[z].yearLevel);
	puts("\n");
	printf("\nMath: %.2lf", s[z].g.g1);
	printf("\nScience: %.2lf", s[z].g.g2);
	printf("\nFilipino: %.2lf", s[z].g.g3);
	printf("\nPhysical Education: %.2lf", s[z].g.g4);
	printf("\nEnglish: %.2lf", s[z].g.g5);
	printf("\n\nTotal Credit: %d", s[z].credit);
	printf("\n\nStudent GPA: %.2lf", s[z].gpa);
	puts("\n");
	
	for(x=1;x<81;x++)
		{
			Sleep(3);
		printf("%c",223);	
		}
		
	}

}

else if(s[4].gpa<s[3].gpa<s[2].gpa<s[1].gpa<s[0].gpa)

	{
	
		for(z=4;z>=0;z--)
			{
			printf("\n\nID Number: %d", s[z].id);
			printf("\nName: %s %s", s[z].fname,s[z].lname);
			printf("\nCourse: %s", s[z].course);
			printf("\nYeal Level: %d", s[z].yearLevel);
			puts("\n");
			printf("\nMath: %.2lf", s[z].g.g1);
			printf("\nScience: %.2lf", s[z].g.g2);
			printf("\nFilipino: %.2lf", s[z].g.g3);
			printf("\nPhysical Education: %.2lf", s[z].g.g4);
			printf("\nEnglish: %.2lf", s[z].g.g5);
			printf("\n\nTotal Credit: %d", s[z].credit);
			printf("\n\nStudent GPA: %.2lf", s[z].gpa);
			puts("\n");
			
				for(x=1;x<81;x++)
					{
						Sleep(3);
					printf("%c",223);	
					}
			}
	
	}

fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);

puts("Press Any key to go to Menu.");

getch(); 
main();	
	
}


displaylow()
{
system("cls");

f1 = fopen("student1.txt","r");
f2 = fopen("student2.txt","r");
f3 = fopen("student3.txt","r");
f4 = fopen("student4.txt","r");
f5 = fopen("student5.txt","r");

if(f1 == NULL || f2 == NULL || f3 == NULL || 
f4 == NULL || f5 == NULL)

	{
	puts("File Currently NULL.\n");
	puts("Press any key to continue.");
	getch();
	main();		
	}
	
fscanf(f1,"GPA: %lf", s[0].gpa);
fscanf(f2,"GPA: %lf", s[1].gpa);
fscanf(f3,"GPA: %lf", s[2].gpa);
fscanf(f4,"GPA: %lf", s[3].gpa);
fscanf(f5,"GPA: %lf", s[4].gpa);

puts("\n\t\t\tSTUDENT GPA LOWEST TO HIGHEST");

	for(x=1;x<81;x++)
		{
			Sleep(3);
		printf("%c",223);	
		}

if(s[0].gpa > s[1].gpa )

	{
		
		for(z=0;z<5;z++)
		
			{
			printf("\n\nID Number: %d", s[z].id);
			printf("\nName: %s %s", s[z].fname,s[z].lname);
			printf("\nCourse: %s", s[z].course);
			printf("\nYeal Level: %d", s[z].yearLevel);
			printf("\n\n");
			printf("\nMath: %.2lf", s[z].g.g1);
			printf("\nScience: %.2lf", s[z].g.g2);
			printf("\nFilipino: %.2lf", s[z].g.g3);
			printf("\nPhysical Education: %.2lf", s[z].g.g4);
			printf("\nEnglish: %.2lf", s[z].g.g5);
			printf("\n\nTotal Credit: %d", s[z].credit);
			printf("\n\nStudent GPA: %.2lf", s[z].gpa);
			puts("");
			
				for(x=1;x<81;x++)
					{
						Sleep(3);
					printf("%c",223);	
					}
			}
	
	}

if(s[4].gpa > s[3].gpa )

{
	
	for(z=4;z>=0;z--)
		{
			
		printf("\n\nID Number: %d", s[z].id);
		printf("\nName: %s %s", s[z].fname,s[z].lname);
		printf("\nCourse: %s", s[z].course);
		printf("\nYeal Level: %d", s[z].yearLevel);
		printf("\n\n");
		printf("\nMath: %.2lf", s[z].g.g1);
		printf("\nScience: %.2lf", s[z].g.g2);
		printf("\nFilipino: %.2lf", s[z].g.g3);
		printf("\nPhysical Education: %.2lf", s[z].g.g4);
		printf("\nEnglish: %.2lf", s[z].g.g5);
		printf("\n\nTotal Credit: %d", s[z].credit);
		printf("\n\nStudent GPA: %.2lf", s[z].gpa);
		puts("");
		
		for(x=1;x<81;x++)
		
			{
				Sleep(3);
			printf("%c",223);	
			}
			
		}
}

fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);

puts("Press Any key to go to Menu.");

getch(); 
main();	
	
}

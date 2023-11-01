#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm;
int i,j,k=0,l=0,m=0,n1=0,q,P[100],A[100],L[100],O[100],first,last,middle,search,n;
char T,a,name_list[70][100]={"Alagupriya K","Divya V","Gayathri R","Ishwarya K","Kabila Sri R","Madhava Priya Dharshini S","Madhumitha R","Meerashree P","Mithra N","Naveena Sri P","Nishasri K","Priyadharshini C","Rachel D","Rajasreenithaa K B","Rakshana J","Rupa M S","Safiha Noor R","Sanjana M","Sakthi Varsha T R","Shifa P","Sona B","Sonasri M U","Sowmiya S","Sujitha B","Swasthika K","Vasuppradha S","Viswa Shree S V","Yuvashree G","Aaron Sam Jordan","Ajay N","Ajey Suthan V N G", "Ashish Thippu H","Aswin Kumar S","Avinash M R","Balagi V","Bastin Jerald R","Dinesh V","Elamaran S","Gomathi Harish J","Kannan V","Karthick G","Karthikeyan T S","Madhan K","Mohamed Sameer S","Murali Prasanth M","Nagaarjun T V","Nagarjuna S","Naveen Kumar S","Nikesh S","Nithin Prasanth N","Partha Sarathi N","Rajaguru A","Shafeel Ahamed B","Siva Suriya Rajan G M","Sonai Rahul V","Sri Kathir R","Sudharshan Dev K","Sundhareshwaran S L","Thoufiq Thameem Ansari S","Venkatesh S","Vijayakumar S","Viknesh S R","Yugesh Ram S"};
clrscr();
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setbkcolor(BLUE);

START:
printf("\t\t\tStudent Attendance Registry System");
for(i=0;i<63;i++)
{
printf("\n%d. %s",i+1,name_list[i]);
printf("\n\tP=Present \tA=Absent \tL=Leave \tO=On Duty");
printf("\nEnter your option : ");
scanf("\t%c",&a);
	switch(a)
{
case 'p':
P[k]=i+1;
k++;
break;
case 'a':
A[l]=i+1;
l++;
break;
case 'l':
L[m]=i+1;
m++;
break;
case 'o':
O[n1]=i+1;
n1++;
break;
default:
printf("Enter valid input");
break;
}
}
printf("\n\t\t\tAttendance registered successfully");

Y:
printf("\n\n1.  Take attendance");
printf("\n2.  Display Present Students");
printf("\n3.  Display Absentees Students");
printf("\n4.  Display On Duty Students");
printf("\n5.  Display Leave Students");
printf("\n6.  Check present students by roll no.");
printf("\n7.  Check OD students by roll no.");
printf("\n8.  Check Absentees students by roll no.");
printf("\n9.  Check Leave students by roll no.");
printf("\n10. Exit");
printf("\n\nSelect an option : ");
scanf("%d",&n);
switch(n)
{
case 1:
goto INITIALIZE;
break;
case 2:
goto DP;
break;
case 3:
goto DA;
break;
case 4:
goto DO;
break;
case 5:
goto DL;
break;
case 6:
goto CR;
break;
case 7:
goto CO;
break;
case 8:
goto CA;
break;
case 9:
goto CL;
case 10:
goto EXIT;
break;
default:
printf("Enter a valid input");
goto Y;
break;

DP:
for(j=0;j<k;j++)
{
printf("%d",P[j]);
printf("\t%s\n",name_list[P[j]]);
}
goto Y;

DA:
for(j=0;j<l;j++)
{
printf("%d",P[j]);
printf("\t%s\n",name_list[P[j-1]]);
}
goto Y;

DL:
for(j=0;j<m;j++)
{
printf("%d",P[j]);
printf("\t%s\n",name_list[P[j-1]]);
}
goto Y;

DO:
for(j=0;j<n1;j++)
{
printf("%d",P[j]);
printf("\t%s\n",name_list[P[j-1]]);
}
goto Y;

CL:
printf("Enter the roll number to search : ");
scanf("%d",&search);
first=0;
last=m;
middle=(first+last)/2;
while (first<=last)
{
if(L[middle]<search)
first=middle+1;
else if (L[middle]==search)
{
printf("\n\n\t\t\t%d. %s is found in Leave list",search,name_list[search-1]);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("\n\n\t\t\tRoll number %d is not found in Leave list",&search);
goto Y;


CO:
printf("Enter the roll number to search : ");
scanf("%d",&search);
first=0;
last=n1;
middle=(first+last)/2;
while (first<=last)
{
if(O[middle]<search)
first=middle+1;
else if (O[middle]==search)
{
printf("\n\n\t\t\t%d. %s is found in OD list",search,name_list[search-1]);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("\n\n\t\t\tRoll number %d is not found in OD list",search);
goto Y;

CA:
printf("Enter the roll number to search : ");
scanf("%d",&search);
first=0;
last=l;
middle=(first+last)/2;
while (first<=last)
{
if(A[middle]<search)
first=middle+1;
else if (A[middle]==search)
{
printf("\n\n\t\t\t%d. %s is found in Absentees list",search,name_list[search-1]);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("\n\n\t\t\tRoll number %d is not found in Absentees list",search);
goto Y;


CR:
printf("Enter the roll number to search : ");
scanf("%d",&search);
first=0;
last=k;
middle=(first+last)/2;
while (first<=last)
{
if(P[middle]<search)
first=middle+1;
else if (P[middle]==search)
{
printf("\n\n\t\t\t%d. %s is found in Present list",search,name_list[search-1]);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("\n\n\t\tRoll number %d is not found in Present list",search);
goto Y;

INITIALIZE:
{
P[i]=NULL;
A[i]=NULL;
L[i]=NULL;
O[i]=NULL;
}
goto START;


EXIT:
for(i=0;i<63;i++);
{
P[i]=NULL;
A[i]=NULL;
L[i]=NULL;
O[i]=NULL;
}
printf("\n\n\t\t\t\tThank You!!\n\n(Press again to exit)");

getch();
}
}


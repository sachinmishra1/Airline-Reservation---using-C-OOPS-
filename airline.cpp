#include<fstream.h>
#include<process.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void write();
void modify();
void display();
void wrong();
void delet();
int x=0;
class air
{
int admno;
public:
        char* retname()
        {
        return name;
        }


    int retno()
    {
    return phno;
    }
 int total;
  int adultno;
  int childrenno;
  int infantno;
 char name[30];
 long long phno;
 char orig[30];
 char desti[30];
 int dep_date;
 int dep_mon;
 int dep_yr;
 char clas[20];
 int flno;
 int fare;
 int fare1;
 void sfare()
 {if(strcmpi( clas,"Economy")==0)
  fare= fare1*    total;
 else if(strcmpi( clas,"Premium Economy")==0)
  fare= fare1*    total*2;
 else if(strcmpi( clas,"Business")==0)
  fare= fare1*    total*3;
 else if(strcmpi( clas,"First Class")==0)
  fare= fare1*    total*4;
 cout<<"  \t FARE = $"<< fare;
 }
void add()
{int flightno,a,bs,c,b;
int d,e,f;
 clrscr();
   cout<<"--------------------------------ADD RECORD---------------------------------\n";
   cout<<"\n\n\n\n\t\t\t\tFLIGHT DETAILS\n ";
   cout<<"\n---------------------------------------------------------------------------";
   cout<<"\n|  S.NO.      FLIGHT NO.     FROM          TO           FARE(ECO.)        |";
   cout<<"\n|   1         1111              Delhi        Mumbai        $49              |";
   cout<<"\n|   2         2222            Kolkata      Chennai       $59              |";
   cout<<"\n|   3         3333            Mumbai       Kolkata       $49              |";
   cout<<"\n|   4         4444            Chennai      Delhi         $69              |";
   cout<<"\n|   5         5555            Kashmir      Kanyakumari   $89              |";
   cout<<"\n--------------------------------------------------------------------------";
   cout<<"\n\n\t\t\t YOUR CHOICE : ";
   cin>>bs;
   cout<<"\n\n\nNOTE: For same flight, Prices of Economy, Premium Economy, Business, First class\n";
   cout<<"                    are in the ratio    1   :       2      :       3    :      4  ";
   getch();


   switch(bs)
   { case 1:strcpy(orig,"Delhi");
            strcpy(desti,"Mumbai");
            fare1=49;
            flno=1111;
            break;
   case 2:strcpy(orig,"Kolkata");
            strcpy(desti,"Chennai");
             fare1=59;
             flno=2222;
            break;
   case 3:strcpy(orig,"Mumbai");
            strcpy(desti,"Kolkata");
             fare1=49;
             flno=3333;
            break;
   case 4:strcpy(orig,"Chennai");
            strcpy(desti,"Delhi");
             fare1=69;
             flno=4444;
            break;
   case 5:strcpy(orig,"Kashmir");
            strcpy(desti,"Kanyakumari");
             fare1=89;
             flno=5555;
            break;
   default:cout<<"NOT A CHOICE";
        getch();
        exit(0); }
 clrscr();
  cout<<"--------------------------------ADD RECORD---------------------------------\n\n";
 cout<<"   Place of Origin : "<<orig;
 cout<<"  \t\t\t Destination : "<<desti;
 cout<<"\n   Enter your Name  : ";
 gets(name);
 cout<<"   Enter your Mobile No. : ";
 cin>>phno;
 cout<<"\n   Departure :     Year : ";
 cin>>dep_yr;
 if(dep_yr<2018)
 wrong();
 else
 {cout<<"                   Month : ";
 cin>>dep_mon;
  if(dep_mon>12)
  wrong();
  else
  { cout<<"                   Date : "  ;
    cin>>dep_date;
    if(dep_date>31)
    wrong();
 }}
 cout<<"\n   Class :  \n\t Economy\n\t Premium Economy\n\t Business\n\t First Class\n\n\tYour choice (e,p,b,f): ";
 gets(clas);
 if(strcmpi(clas,"E")!=0&&strcmpi(clas,"p")!=0&&strcmpi(clas,"B")!=0&&strcmpi(clas,"F")!=0)
 wrong();
  if(strcmpi(clas,"E")==0)
 strcpy(clas,"ECONOMY");
 else if(strcmpi(clas,"P")==0)
 strcpy(clas,"PREMIUM ECONOMY");
 else if(strcmpi(clas,"B")==0)
 strcpy(clas,"BUSINESS");
 else if(strcmpi(clas,"F")==0)
 strcpy(clas,"FIRST CLASS");
 cout<<"   Enter total no. of passengers : ";
 cin>>total;
 a=total;
 cout<<"      Adults : ";
 cin>>adultno;
 b=adultno;
 if(b<1)
 {cout<<"There must be atleast 1 Adult ";
  getch();
  exit(0);}
 cout<<"      Children (2-12 yrs) : ";
 cin>>childrenno;
 if(childrenno<0)
 wrong();
 c=childrenno;
 cout<<"      Infants (below 2 yrs) : ";
 cin>>infantno;
  if(infantno<0)
 wrong();
 d=infantno;
 if(a!=b+c+d)
 wrong();
 cout<<"\n    FLIGHT NO. = "<<flno;
 sfare();
 getch();
 clrscr();
 cout<<"\n\n\n\n\n\tYour Reservation has been made.\n\t\t\t Have a nice trip";
 cout<<"\n\n\n\n\n\n\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
 cout<<"\n\t\t\t| Thank you for Choosing us ! |";
 cout<<"\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
 }
void displa()
{cout<<"------------------------------DISPLAY RECORD---------------------------";
 cout<<"\n================================================================================\n";
  cout<<"                    SACHIN AIRLINES                                                 \n";
  cout<<"\n   Place of Origin : "<<orig;
  cout<<"\t\t\t Destination : "<< desti<<"\n";
  cout<<"\n   Name  : "<< name;
  cout<<"\n\n   Mobile No. : "<< phno;
  cout<<"\n\n   Depart Date : "<< dep_date<<" / "<< dep_mon<<" / "<< dep_yr;
  cout<<"\n\n   Class : "<< clas;
  cout<<"\n\n   Passengers : "<< total;
  cout<<"\n\n     Adults : "<< adultno;
  cout<<"\t     Children (2-12 yrs) : "<<childrenno;
  cout<<"\t     Infants (below 2 yrs) : "<<infantno;
  cout<<"\n\n   FLIGHT NO. = "<< flno;
  cout<<"\t\t\t   FARE = $"<< fare;
  cout<<"\n\n================================================================================";
 getch();}
 void searchname()
      {clrscr();
      air co;
      int tflag=0;
      char names[30];


      cout<<"enter the name to be searched= ";
      gets(names);
      fstream fino;
      fino.open("konoha.dat",ios::in|ios::binary);
      if(!fino)
      cout<<"\nfile can't be opened";


      while(fino.read((char*)&co,sizeof(co)))
     {
      if(strcmpi(co.retname(),names)==0)
       {tflag=1;
       co.displa();
      getch();
      break;
       }          }
       if(tflag==0)
       { cout<<"the name does not exist";
        getch();
         }
      fino.close();
      }


void searchno()
{air po;
int adn;
int flag=0;
fstream f;
clrscr();
cout<<"enter phone number you want to search";
cin>>adn;
f.open("konoha.dat",ios::in|ios::binary);
while(!f.eof())
{
f.read((char*)&po,sizeof(po));


 if(adn==po.retno())
{
flag=1;
po.displa();
break;


}
}
if(flag==0)
{cout<<"not found";
getch();               }
f.close();
getch();




}










              void search()
             { int opt;
               cout<<"\n1. By name";
               cout<<"\n2.  By phone number";
               cout<<"\n3.  enter your choice:- ";
               cin>>opt;
               if(opt==1)
               searchname();
               else if(opt==2)
               searchno();
               else
               cout<<"\nenter the correct option";
               getch();
               }
void deleted()
{long j;
air s1;
char found='f',confirm='n';
ifstream fio("konoha.dat",ios::in);
ofstream file("temp.dat",ios::out);
 cout<<"Enter ph no. of the record to be deleted";
 cin>>j;
 while(!fio.eof())
 {fio.read((char *)&s1,sizeof(s1));
 if(s1.retno()==j)
 { s1.displa();
 found='t';
 cout<<"are u sure (y,n) : ";
 cin>>confirm;
 if(confirm=='n')
 file.write((char *)&s1,sizeof(s1));
 break;
 }
 else
 file.write((char*)&s1,sizeof(s1));
 }
 if(found=='f')
 cout<<"Record not found!!\n";
 fio.close();
 file.close();
 remove("konoha.dat");
 rename("temp.dat","konoha.dat");
 if(confirm=='y')
 cout<<"record is deleted";
 getch();                 }


void edita()
{char fname[20];
cout<<"\nEnter your new name : (press '.' to retain previous data)";
   gets(fname);
   if(strcmp(fname,".")!=0)
 strcpy(name,fname);
cout<<"\n\n\n\n\n\tYour Changes has been made.\n\t\t\t Have a nice trip";
 cout<<"\n\n\n\n\n\n\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
 cout<<"\n\t\t\t| Thank you for Choosing us ! |";
 cout<<"\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";




getch(); }
void editb()
{int fg;
cout<<"\nEnter your new phone number : (press '1' to retain previous data)";
cin>>fg;
   if(fg!=1)
phno=fg;
cout<<"\n\n\n\n\n\tYour Changes has been made.\n\t\t\t Have a nice trip";
 cout<<"\n\n\n\n\n\n\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
 cout<<"\n\t\t\t| Thank you for Choosing us ! |";
 cout<<"\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
getch();
}






void wrong()
{
 cout<<"Wrong Information";
 getch();
 exit(0);}
}ob;
void main()
{clrscr();
int a;
clrscr();
cout<<"\n\n\n\n\n";
 cout<<"   *                 *  * \n ";
 cout<<"   * *                *   * \n  ";
 cout<<"   *   *               *    * \n   ";
 cout<<"   *     *              *     * \n   ";
 cout<<"*  *  *   *   *   *    *   *    *    *   *    *     *     * \n ";
 cout<<"  *                                                              *\n";
 cout<<"   *      S A C H I N    A I R L I N E S                              *\n";
 cout<<"   *                                                              *      \n";
 cout<<"   *  *  *   *   *   *    *   *    *    *   *    *     *     *             \n";
 cout<<"      *     *              *     * \n ";
 cout<<"    *   *               *    * \n ";
 cout<<"   * *                *    * \n ";
 cout<<"  *                 *   *\n ";
getch();
char ki[10];
clrscr();
cout<<"ENTER PASSWORD : ";
gets(ki);
if(strcmpi(ki,"cs007")!=0)
{cout<<" \n\n\n\nAUTHORISED PERSONNEL ONLY\n" ;
getch();
exit(0);}
else
{clrscr();
cout<<"\n\n\n\n\n\n\nWELCOME TO THE FUTURE";
getch();
}
do
{
clrscr();


cout<<"\n\n\t\t-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-\n";
cout<<"\t\t| Welcome to Sachin Airline Reservations |\n";
cout<<"\t\t-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-\n";
cout<<"\n\n\n1. Add Record\n2. Search Record\n3. Display Record\n4. Delete\n5. Modify Record\n6. Exit\n\n\t Enter your choice : ";
cin>>a;
clrscr();
switch(a)
{ case 1: write();
          break;
  case 2: ob.search();
          break;
  case 3: display();
          break;
 case 4: delet();
          break;
 case 5: modify();
           break;
  default: exit(0);
  }
  }
  while(a<=5);




getch();
}
void write()
{char ans='y';
ofstream fout;
fout.open("konoha.dat",ios::app|ios::binary);
if(!fout)
cout<<"File can't be opened";
while(ans=='y'||ans=='Y')
{ob.add();
fout.write((char*)&ob,sizeof(ob));
cout<<"\n\t\tDo you want to enter more (Y/N)";
cin>>ans;}
fout.close();}
void display()
{clrscr();
ifstream fin;
fin.open("konoha.dat",ios::in|ios::binary);
if(!fin)
cout<<"file can't be opened";
while(fin.read((char*)&ob,sizeof(ob)))
ob.displa();
getch();
fin.close();}
void delet()
{ob.deleted();}
void modify()
{int a;
clrscr();
cout<<"1. Update Name";
cout<<"2. Update Phone Number";
cout<<"Enter your choice : ";
cin>>a;
switch(a)
{
case 1:
fstream fio("konoha.dat",ios::in|ios::out|ios::binary);
char fnam[20];
long pos;
char found='f';
cout<<"Enter name of the record whose data you want to modify:-";
gets(fnam);
while (!fio.eof())
{pos=fio.tellg();
fio.read((char*)&ob,sizeof(ob));
if(strcmpi(ob.retname(),fnam)==0)
{ob.edita();
fio.seekg(pos);
fio.write((char*)&ob,sizeof(ob));
found='t';
break;
 } }
 if(found=='f')
 cout<<"\nRecord not found!!!";
 getch();
 break;
 case 2:
 fstream fioo("konoha.dat",ios::in|ios::out|ios::binary);
int pno;
long poso;
char found1='f';
cout<<"Enter phone number of the record whose data you want to modify:-";
cin>>pno;
while (!fioo.eof())
{poso=fioo.tellg();
fioo.read((char*)&ob,sizeof(ob));
if(ob.retno()==pno)
{ob.editb();
fioo.seekg(poso);
fioo.write((char*)&ob,sizeof(ob));
found1='t';
break;
 } }
 if(found1=='f')
 cout<<"\nRecord not found!!!";
 getch();
 break;
 default: cout<<"NOT A CHOICE";
           break;
}}
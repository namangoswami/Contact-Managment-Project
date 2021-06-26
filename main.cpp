#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<process.h>

using namespace std;
class hello
{
 public:
 hello()
 {
  cout<<"       +=====+ +=====+ ++    + +=====+ +=====+ +====+ +=====+\n";
cout<<"       |       |     | | \\   |    |    |     | |         |\n";
cout<<"       |       |     | |  \\  |    |    |=====| |         |\n";
cout<<"       +=====+ +=====+ |   \\ |    |    |     | +====+    |\n\n";
cout<<"++   ++ +=====+ ++   + +=====+ +=====+ +====+ ++   ++  +====+ +\\   | +=====+\n";
cout<<"| \\ / | |     | | \\  | |     | |       +====+ | \\ / |  +====+ | \\  |    |   \n";
cout<<"|  +  | |=====| |  \\ | |=====| |   +=+ |      |  +  |  |      |  \\ |    |   \n";
cout<<"|     | |     | |   \\+ |     | |=====+ +====+ |     |  +====+ |   \\+    |   \n";
cout<<"       +=====+ +   + +=====+ +=====+ +=====+ ++   ++\n";
cout<<"       ++++     + +  ++++       |    +=====+ | \\ /|\n";
cout<<"           +++   +       +++    |    |       |   + |\n";
cout<<"       +=====+   +   +=====+    |    +=====+ |     |\n";
}


 };

class welcome
{public:
    int ch;
    welcome()
    {
	cout << "Welcome to Your Contact manager!\n";
    }
    int chose()
    {
	///clrscr();
	cout << "1.Add Contact\n2.Modify Contact\n3.Delete Contact\n4.Search Saved Contacts\n5.Display Records\n6.Delete All current Records\n7.Exit\n8.What is Contact Managment software?\nEnter Your Choice\n";
    cin >> ch;
    return ch;
    }
    void bye()
    {
	cout << "Thanks for your visit Hope You comeback soon!\n";
    }
};
class frontend
{
   public:
	void work(char);
private:
    void add();
    void del();
    void mod();
    void dispall();
    void srch();

}wish;
/*class group
{
 public:
 char name[50][50];
 char gname;
 int count;
 void newgroup();
 void showgroup();
 group()
 { count=0;
  for(int i=0;i<50;i++)
  {
   strcpy(name[i], ".");
  }
  strcpy(gname, ".");
 }
};
void wingroup(group &grp)
{
 ofstream fout("groups.txt", ios::app);
 fout.write((char*)&grp, sizeof(grp));
 fout.close();
}
void readfromgroup()
{ group gtb;
 ifstream fin("groups.txt", ios::in);
 if(!fin)
 cout << "No groups Existing\n";
 else
 {
  while(!fin.eof())
  {
   fin.read((char*)&gtb, sizeof(gtb));
   puts(gtb.gname);
  }
 }
}

void group::newgroup()
{
 cout << "Enter Group Name to be created with\n";
 gets(gname);
 cout << "Enter The members(Max 50)\nIf you Want to stop Entering, Enter '.'\n";
 for(int i=0;i<50;i++)
 {
  cout << "Enter Member Name\n";
  gets(name[i]);
  if(strcmpi(name, ".")==0)
  {
   break;
  }
  count++;
  }
  wingroup(newgroup);

}
void group::showgroup()
{
 cout << "Name: " ;
 puts(gname);
 cout << "Members are: \n";
 for(int i=0;i,count;i++)
 {
  puts(name[i]);
 }
}*/


void frontend::work(char c)
{
    switch(c)
    {
	case 1:add();break;
	case 2:mod();break;
	case 3:del();break;
	case 4:srch();break;
	case 5:dispall();break;
	case 6://clrscr();
	       char kk;
	       cout << "Are You Sure To Delete All Your Contacts?\n";
	       cin >> kk;
	       if(kk=='y'||kk=='Y')
	       remove("c.txt");
	       else
	       cout << "Not a bad Choice\n>-)";
	       break;
	/*case 7:group newg;
	       newg.newgroup();
	       break;
	case 8:readfromgroup();
	       break;*/
	case 7:exit(0);
	case 8://clrscr();
	       cout << "What is Contact Managment Software?\nThe Idea behind contact managment software is to ease the user in storing contacts and making it easier for them to access them in a single go. The idea has been brought up by Naman Goswami for the ease of the busy ones around us\nThe software is easy enough for just anyone who would encounter it.\nProtip:If You want to leave unneccesary fields blank, you can just enter a '.'(fullstop) character to leave the field\n";
	       break;
default: cout << "Whoops Wrong choice\n";
  }
}

class contact
{public:
    char ch;
    char fname[50];
    char lname[50];
    char cno[50];
    char  cno2[50];
    char cno3[50];
    char email[50];
    char birthdate[50];
    char f[50][5];
    char fd[50][5], remark[50], sex[10];



   void getdat();
   void putdat();

   contact()
   {
       strcpy(remark, ".");
       strcpy(sex, ".");
       strcpy(fname,".");
       strcpy(lname,".");
       strcpy( cno,".");
       strcpy(cno2,".");
       strcpy( cno3,".");
       strcpy( email ,".");
       strcpy(birthdate,".");
       for(int i=0;i<5;i++)
       {


       strcpy(f[i],".");
       strcpy(fd[i], ".");

      }
   }
};

void contact::getdat()
{   cout << "Enter Important Details:\n";
    cout << "Enter  Name: ";
    gets(fname);
    cout << "Enter Contact Number(Required Field): ";
    gets(cno);
    cout << "Enter Birthdate(Required field(Obviously)): ";
    gets(birthdate);
    cout << "Enter Email(To Skip enter '.'): ";
    gets(email);
    cout << "Enter Sex: ";
    gets(sex);
    cout << "Enter Any Note for the contact\n";
    gets(remark);
    cout << "Enter Contact Number 2(To Skip enter '.'): ";
    gets(cno2);
    cout << "Enter Contact Numner 3(To Skip enter '.')";
    gets(cno3);
    int count=0;
    cout << "DO You Want to Enter Any Other Field?";
    cin >> ch;
    while(ch=='y')
    {
	cout << "Enter Field Name: ";
	gets(f[count]);
	cout << "Enter Field Details ";
	gets(fd[count]);
	cout << "Do You Want To Enter Any Other Field?\n";
	cin >> ch;
    count++;
    }


}

void contact::putdat()
{
     cout << "Name: ";
     puts(fname);
     cout << "Contact No.: ";
     puts(cno);
     cout << "Birthdate: ";
     puts(birthdate);
     if(strcmpi(sex,".")!=0)
     {
      cout << "Sex: ";puts(sex);
     }
     if(strcmpi(cno2,".")!=0)
       {
	cout << "Number 2: ";
	puts(cno2);}
    if(strcmpi(cno3,".")!=0)
    {
     cout << "Number 3: ";
     puts(cno3);}
    if(strcmpi(email,".")!=0)
    {
      cout << "Email: ";
      puts(email);

    }
    for(int i=0;i<5;i++)
    {
     if(strcmpi(f[i], ".")!=0)
     {
     if(strcmpi(fd[i], ".")!=0)
     {
      puts(f[i]); cout << "-> ";puts(fd[i]);
     }
     }
     else if(strcmpi(f[i], ".")==0)
     {continue;}
     }
    if(strcmpi(remark, ".")!=0)
    { cout << "Your Note: ";
      puts(remark);}

}
void sortadd(contact &newc)
{
 contact kar;
 char last='y';
 ifstream fin("c.txt", ios::in|ios::binary);
 if(!fin)
  {
      cout << "File Does Not Exist\n";
      fin.close();
      ofstream fout("c.txt", ios::out|ios::binary);
      fout.write((char*)&newc,sizeof(newc));
      fout.close();
  }
 else
 {
  ofstream fout("temp.txt", ios::app|ios::binary);
  while(!fin.eof())
  {
      fin.read((char*)&kar, sizeof(kar));
      if(strcmpi(newc.fname, kar.fname)<=0)
      {
	  fout.write((char*)&newc, sizeof(newc));
	  last='n';
	  break;
      }
      else
	fout.write((char*)&kar, sizeof(kar));

  }
   if(last=='y')
    fout.write((char*)&newc, sizeof(newc));
  else
  {
      while(!fin.eof())
      {
	  fin.read((char*)&kar, sizeof(kar));
	  fout.write((char*)&kar, sizeof(kar));
      }
  }
  fin.close();
  fout.close();
  remove("c.txt");
  rename("temp.txt", "c.txt");
 }
}

void frontend::add()
{ char zz;

 do
 {
// clrscr();
 contact newc;
 newc.getdat();
 sortadd(newc);
 cout << "Want To Enter More?\n";
 cin >> zz;

 }while(zz=='y');
cout << "Added Them!\n";


}
void actmod(contact &tbm, contact &newm)
{
 cout << "Enter The New Details. To Preserve any old one, enter '.' instead\n";
 newm.getdat();
 if(strcmpi(newm.fname, ".")==0)
 strcpy(newm.fname,tbm.fname);
 if(strcmpi(newm.sex, ".")==0)
       strcpy(newm.sex,tbm.sex);
       if(strcmpi(newm.remark, ".")==0)
       strcpy(newm.remark,tbm.remark);
       if(strcmpi(newm.cno, ".")==0)
       strcpy( newm.cno,tbm.cno);
       if(strcmpi(newm.cno2, ".")==0)
       strcpy(newm.cno2,tbm.cno2);
       if(strcmpi(newm.cno3,"." )==0)
       strcpy( newm.cno3,tbm.cno3);
       if(strcmpi(newm.email, ".")==0)
       strcpy( newm.email ,tbm.email);
       if(strcmpi(newm.birthdate, ".")==0)
       strcpy(newm.birthdate,tbm.birthdate);
       for(int i=0;i<5;i++)
       {
       if(strcmpi(newm.f[i],".")==0)
       {
	strcpy(newm.f[i],tbm.f[i]);
	strcpy(newm.fd[i],tbm.fd[i]);
       }}
      cout << "Modified\nNew Details are:\n";
      newm.putdat();
      }

void frontend::mod()
{
  char name[50], found='f';
  contact tbm, newm;
   ifstream fin("c.txt", ios::in|ios::binary);
  if(!fin)
  {
   cout << "You Cannot Modify Data if you do not have contacts\n";
   fin.close();
  }
  else
  {
  cout << "Enter Name You Want to search\n";
  cin >>name;

   ofstream fout("temp.txt", ios::out|ios::binary);
   while(!fin.eof())
   {
    fin.read((char*)&tbm, sizeof(tbm));
    if(found=='t')
    goto cond;
    if(strcmpi(tbm.fname,name)==0)
   {
    actmod(tbm, newm);
    fout.write((char*)&newm, sizeof(newm));

   found='t';
   }
   else
   { cond:
   fout.write((char*)&tbm, sizeof(tbm));
   }
  }
  fin.close();
  fout.close();
  remove("c.txt");
  rename("temp.txt", "c.txt");
  }}
void frontend::del()
{
    contact tbd;
    char name[50], found='f', ch;
    cout << "Enter The Name of the contact \n";
    gets(name);
    ifstream fin("c.txt", ios::in|ios::binary);

     ofstream fout("temp.txt", ios::app|ios::binary);
    while(!fin.eof())
  {
      fin.read((char*)&tbd, sizeof(tbd));
      if(strcmpi(tbd.fname, name)==0)
      {
	  cout << "Are You Sure You want to delete this record\n";
	  cin >> ch;
	  found='t';
	  break;
      }
      else
	fout.write((char*)&tbd, sizeof(tbd));

  }
  if(found=='f')
  cout << "Not Found\n";


 /* if(!fin.eof())
  {
      while(!fin.eof())
      {
	  fin.read((char*)&tbd, sizeof(tbd));
	  fout.write((char*)&tbd, sizeof(tbd));
      }
  }*/
  fin.close();
  fout.close();
  remove("c.txt");
  rename("temp.txt", "c.txt");
 }

void frontend::dispall()
{ //  clrscr();
    contact c;
	ifstream fin("c.txt", ios::in|ios::binary);
    if(!fin)
    cout << "No contacts Saved\n";
    else
    {
    while(!fin.eof())
    { //  clrscr();
    cout << "Displaying Alphabetically\n";
	fin.read((char*)&c, sizeof(c));
	c.putdat();
	cout << "Press Any Key to continue\n";
       getch();
    }
    }
    fin.close();
}
void frontend::srch()
{  char name[50], found='f';
 cout << "Enter The Name of the contact to search for\n";
 cin >> name;
 contact comp;
 ifstream fin("c.txt", ios::in|ios::binary);
 while(!fin.eof())
 {
  fin.read((char*)&comp, sizeof(comp));
  if(strcmpi(comp.fname, name)==0)
  {
   cout << "Found\n";
   comp.putdat();
   found='t';
   break;
  }
 }
  if(found=='f')
  cout << "Not Found\n";
}


int main()
{

    return 0;
}

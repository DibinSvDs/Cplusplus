#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Student
{

private:
    int rollno;
    char name[];
    float marks;
    char grade;

public:
    void readStudent()
    {
        cout<< "\n Enter rollno"; cin>>rollno;
        cout<< "\n Enter name"; gets(name);
        cout<< "\n Enter marks"; cin>>marks;
    }

    void dispStudent()
    {
        calcGrade();
        cout<<"Roll NO"<<rollno<<endl;
        cout<<"Name"<<rollno<<endl;
        cout<<"Marks"<<rollno<<endl;
        cout<<"Grade"<<rollno<<endl;
    }

    int getRollno()
    {
        return rollno;
    }

   float getMarks()
    {
        return marks;
    }

    void calcGrade()
    {
        if (marks>=75)
            grade='O';
        else if (marks >=60)
            grade='A';
        else if (marks >=60)
            grade='B';
        else if (marks >=60)
            grade='C';
    }
};


int main()
{
    Student XIIa[10];
    for (int i=0;i<10;i++)
    {
        cout<<"\n Enter details of Student" <<i+1 <<":";
        XIIa[i].readStudent();
    }



    int choice ,rno,pos=-1,highmarks=0;
    do
    {
        system("cls");
        cout<<"1.Specific Stud,";
        cout<<"2.Topper";
        cout<<"3. Exit";
        cout<<"\n Enter your choice(1..3)";
        cin>>choice;

        switch(choice)
        {
        case 1:cout <<"\n Enter Roll No of student whose details U want to see";
               cin>>rno;
                int i;
               for( i=0;i<10;++i)
               { if (XIIa[i].getRollno()==rno)   //ACCESSOR
                   {
                       XIIa[i].dispStudent();
                       break;
                   }
               }
            if( i==10)
               {
                                  cout<<"\n INVALID ROLLNO!!!\n";
                                  break;
               }
            case 2:
                for (int i=0;i<10;++i)
               { if (XIIa[i].getMarks()>highmarks)//   //ACCESSOR
                   {
                       pos=i;
                       highmarks=XIIa[i].getMarks();
                   }
               }
               XIIa[pos].dispStudent();
               break;

            case 3: break;
            default:cout <<"\n Wrong Choice!!\n";
               break;
        }

    }while (choice>=1 &&choice <3);
    return 0;

}




































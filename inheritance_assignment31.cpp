//problem ------------ 1
/*#include<string.h>
#include<iostream>
using namespace std;
class person
{
    protected:
   char name[50];
    int age;

    public:
    void setName(char *n)
    {
        strcpy(name,n);
    }
    void setAge(int a)
    {
        age=a;
    }
    char* getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};
class employee:public person
{
    private:
   int employee_id;
    int salary;

    public:
    void setEmployee_id(int n)
    {
       employee_id=n;
    }
    void setSalary(int a)
    {
        salary=a;
    }
    char getEmployee_id()
    {
        return employee_id;
    }

    int getSlary()
    {
        return salary;
    }
    void display()
    {
        cout<<"name :"<<name<<" age :"<<age<<" employee id :"<<employee_id<<" salary :"<<salary;
    }
};
int main()
{
    employee e1;
    e1.setName("Tanu");
    e1.setAge(21);
    e1.setEmployee_id(1);
    e1.setSalary(4500000);
    e1.display();
    return 0;
}*/

//problem----------------2
/*#include<iostream>
using namespace std;
class add
{
    private:
    int first , second;
   
   public:
   void getValue()
   {
   
     cout<<"enter 1 number : ";
     cin>>first;
     cout<<"enter 2 number : ";
     cin>>second;
    
   }
  int addition()
   {
    return first+second;
   }
};
class disp:public add
{

    public:
    void display()
    {
        cout<<"addition is:"<<addition();
    }
};
int main()
{
    disp d;
  d.getValue();
   d.display();
    return 0;
}*/

//problem----------------3
/*#include<iostream>
using namespace std;
class student
{
    protected:
    int mark1,mark2,mark3;

    public:
    void getMarks()
    {
        cout<<"-----------------------------------";
        cout<<"enter your marks of 3 subject : ";
        cin>>mark1>>mark2>>mark3;
    }
};
class  total:public student
{
    protected:
    int total1;
    public:
    void totalmarks()
    {
        total1=mark1+mark2+mark3;
    }
};
class disp: public total
{
    private:
     float per;
    public:
    void calculate_percent()
    {
        per=total1/3.0;
    }
    void display()
    {
        cout<<"--------------------------------\n";
        cout<<" percent is : "<<per;
    }
};
int main()
{
    disp d1;
    d1.getMarks();
    d1.totalmarks();
    d1.calculate_percent();
    d1.display();
    return 0;
}*/

//problem--------------4
/*#include<iostream>
using namespace std;
class person
{
   public:
        string name;
        string address;
        int mobile_number;
};
class employee:public person
{

  public:
        int eno;
        string employee_name;
};
class manager: public employee
{
   
    public:
    
        string designation;
        string department_name;
        int basic_salary;

        void getdetails()
        {
            cout<<"enter details of manager"<<endl;
            cout<<"enter name :"<<endl;
           fflush(stdin);
            cin>>name;
         
            cout<<"enter adddress"<<endl;
           fflush(stdin);
            cin>>address;

            cout<<"enter eno"<<endl;
             fflush(stdin);
            cin>>eno;

            cout<<"enter  designation "<<endl;
          fflush(stdin);
            cin>>designation;

            cout<<"enter  dapartment name : "<<endl;
           fflush(stdin);
            cin>>department_name;

            cout<<"enter basic salary"<<endl;
            fflush(stdin);
            cin>>basic_salary;

        }

        void display()
        {
            cout<<"-----------------------------------------"<<endl;
            cout<<"name="<<name<<"\n"<<"address="<<address<<"\n"<<"employee_number="<<eno<<"\n"<<"designation="<<designation<<"\n"<<"department"<<department_name<<"\n"
            <<"salary"<<basic_salary<<endl;

        }
};
int main()
{
    manager m1[100];
    int n,max;
    cout<<"----------------------------------------"<<endl;
    cout<<"how many employee details you want to enter ?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        m1[i].getdetails();
    }
     for(int i=0;i<n;i++)
    {
        m1[i].display();
    }
    int temp=0;
    for(int i=1;i<n;i++)
    {
        if(m1[temp].basic_salary<m1[i].basic_salary)
            temp=i;
    }
    cout<< "maximum salary employees is"<<m1[temp].basic_salary<<"employee name is"<<m1[temp].name;

    return 0;
}*/




//problem--------5
/*#include<iostream>
using namespace std;
class item
{
    public:
    int item_no;
    float price;
    string name;
};

class discount_item:public item
{
    public:
    int discount;
    void get()
    {
        cout<<"-------------------------------------"<<endl;
        cout<<"enter item name : ";
        cin>>name;
        cout<<"enter item number : ";
        fflush(stdin);
        cin>>item_no;
        cout<<"enter price : ";
        cin>>price;
        cout<<"enter discount : ";
        cin>>discount;
    }
    void display()
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"name : "<<name<<"\n\n"<<"item no."<<item_no<<"\n\n"<<"price : "<<price<<"\n\n"<<"discount is : "<<discount<<endl;
       
    }
};
int main()
{
    discount_item d1[100];
    int n,total=0,dis=0,price_discount;
    system("cls");
    cout<<"-----WELCOME TO SHIVAM TRADERS-----"<<endl;
    cout<<"enter howmany item you purchased ?"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        d1[i].get();
       
    }
    for(int i=0;i<n;i++)
    {
        d1[i].display();
       
    }
   for(int i=0;i<n;i++)
    {
      total=d1[i].price+total;
     dis=d1[i].discount+dis; //here discount will be added of per item
     price_discount=total*dis/100;
    }
 
  cout<<"--------------------------------------------"<<endl;
   cout<<"total price : "<<total<<endl;
   cout<<"discount : "<<price_discount<<endl;
   cout<<"total payable amount : "<<total-price_discount<<endl;
    cout<<"Please Visit Again!!!\n"<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
class B;
class A
{
    protected:
         int num1;
   
    public:
        A()
        {
            num1=10;
        }
        void show()
        {
            cout<<"value of number 1 :"<<num1;
        }
      friend void swap(A *num1,B *num2);
};
class B
{
    protected:
         int num2;
   
    public:
        B()
        {
            num2=20;
        }
        void show()
        {
            cout<<"value of number 2:"<<num2;
        }
      friend void swap(A *num1,B *num2);
};
void swap(A *no1, B *no2)
{
     int no3;
     no3=no1->num1;
     no1->num1=no2->num2;
     no2->num2=no3;
}
int main()
{
    A a;
    B b;
    swap(&a,&b);
    a.show();
    b.show();
    return 0;
}*/

// problem 7--------------------------->>>
/*#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class employee
{
    public:
    int emp_code;
    string name;
};
class fulltime:public employee
{
     public:
     int daily_rate;
     int number_of_days;
     float salary;

      void get_emp1()
    {
        cout<<"enter employee code"<<endl;
        cin>>emp_code;
        cout<<"enter employee name"<<endl;
        cin>>name;
        fflush(stdin);
        cout<<"number of working days";
        cin>>number_of_days;
        cout<<"enter daily rate";
        cin>>daily_rate;
        salary=(number_of_days*daily_rate);

    }
      void disp_emp1()
    {
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"employee code is : "<<emp_code<<"    employee name is : " <<name<< "   nuber of working days : "<<number_of_days<<"  daily rate :"<<daily_rate<<"salary : "<<salary<<endl;
    }

};
class parttime:public employee
{
    public:
    int number_of_workinghour;
    float salary;
    int hourly_rate;

    void get_emp2()
    {
        
        cout<<"enter employee code"<<endl;
        cin>>emp_code;
        cout<<"enter employee name"<<endl;
        cin>>name;
        fflush(stdin);
        cout<<"number of working hours";
        cin>>number_of_workinghour;
        cout<<"enter hourly rate";
        cin>>hourly_rate;
        salary=(number_of_workinghour*hourly_rate);
    }

    void disp_emp2()
    {
        cout<<"employee code is : "<<emp_code<<"    employee name is : " <<name<< "   nuber of working hours : "<<number_of_workinghour<<"  hourly rate :"<<hourly_rate<<"salary : "<<salary<<endl;
    }
  
};
int main()
{
    parttime p1[10];
    fulltime f1[10];
    int n,check,count,choice,p,x=0;
  do
  {
    
    cout<<"\n 1. enter record"<<endl;
    cout<<"\n 2. display record"<<endl;
    cout<<"\n 3.search record"<<endl;
    cout<<"\n 4. quit";
    cout<<"enter your choice";
    cin>>choice;
    switch (choice)
    {
     case 1:
          cout<<"\n 1.fulltime";
          cout<<"\n 2.parttime";
          cin>>p;
          switch(p)
          {
            case 1:
             cout<<"how many employee details u want to enter?";
             cin>>n;
             for(int i=0;i<n;i++)
             {
                f1[i].get_emp1();
             }
              
             break;
             case 2:
             cout<<"how many employee details u want to enter?";
             cin>>n;
             for(int i=0;i<n;i++)
             {
                p1[i].get_emp2();
             }
             x++;
             break;
             
          }
          break;
        case 2:
          for(int i=0;i<n;i++)
             {
                f1[i].disp_emp1();
             }
             for(int i=0;i<n;i++)
             {
                p1[i].disp_emp2();
             }
             x++;
             break;

case 3:
    cout<<"enter a employee code that you want to search";
    cin>>check;
   for(int i=0;i<n;i++)
    {
        if((p1[i].emp_code==check)||(f1[i].emp_code==check))
         count=1;
         else
         count=0;
 }

if(count==1)
cout<<"yes employee code "<<check<<" is present in employee";
else
cout<<"can't find this employee!!";
x++;
   
  break;
    case 4:
    exit(0);
    x++;
}
  }
  while(choice!=4);
    return 0;
}*/
/*#include<iostream>
using namespace std;
class customer
{
    public:
    string name;
    long long phone_no;

};
class depositor:public customer
{
    public:
   long long account_no;
    float balance;

};
class borrower:public depositor
{
    public:
    int loan_no;
    double loan_amt;

    void get_details()
    {
        cout<<"enter name :"<<endl;
        cin>>name;
        cout<<"enter phone number :"<<endl;
        cin>>phone_no;
        cout<<"enter account number :"<<endl;
        cin>>account_no;
        cout<<"enter balance :"<<endl;
        cin>>balance;
        cout<<"enter loan no :"<<endl;
        cin>>loan_no;
        cout<<"enter loan amount :"<<endl;
        cin>>loan_amt;

    }

    void disp_details()
    {
        cout<<"-------------------------------------"<<endl;
        cout<<" name is : "<<name<<endl;
        cout<<" phone number : "<<phone_no<<endl;
        cout<<" account number : "<<account_no<<endl;
        cout<<" balance : "<<balance<<endl;
        cout<<" loan no : "<<loan_no<<endl;
        cout<<" loan amount : "<<loan_amt<<endl;
        
    }
};
int main()
{
    borrower b1[10];
    int n;
    cout<<"howmany customer details u want to enter ?";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        b1[i].get_details();
    }
     for(int i=0;i<n;i++)
    {
        b1[i].disp_details();
    }
    return 0;
}*/

//problem 8 by new and delete-------------->
/*#include<iostream>
using namespace std;
class customer
{
    public:
    string name;
    long long phone_no;

};
class depositor:public customer
{
    public:
   long long account_no;
    float balance;

};
class borrower:public depositor
{
    public:
    int loan_no;
    double loan_amt;

    void get_details()
    {
        cout<<"enter name :"<<endl;
        cin>>name;
        cout<<"enter phone number :"<<endl;
        cin>>phone_no;
        cout<<"enter account number :"<<endl;
        cin>>account_no;
        cout<<"enter balance :"<<endl;
        cin>>balance;
        cout<<"enter loan no :"<<endl;
        cin>>loan_no;
        cout<<"enter loan amount :"<<endl;
        cin>>loan_amt;

    }

    void disp_details()
    {
        cout<<"-------------------------------------"<<endl;
        cout<<" name is : "<<name<<endl;
        cout<<" phone number : "<<phone_no<<endl;
        cout<<" account number : "<<account_no<<endl;
        cout<<" balance : "<<balance<<endl;
        cout<<" loan no : "<<loan_no<<endl;
        cout<<" loan amount : "<<loan_amt<<endl;
        
    }
};
int main()
{
    borrower *b1;//pointer for new(dynamic memory allocation)---
    int n,i;
    cout<<"howmany customer details u want to enter ?";
    cin>>n;
    b1=new borrower[n];//dma implement here
    for(i=0;i<n;i++)
    {
        b1[i].get_details();
    }
     for(i=0;i<n;i++)
    {
        b1[i].disp_details();
    }
    return 0;
}*/
//problem 9--------------->
/*#include<iostream>
#include<stdlib.h>
using namespace std;
class Student
{
    public:
    int stu_id;
    string name;
    void get_d()
    {
        cout<<"enter id and name"<<endl;
        cin>>stu_id>>name;

    }


};
class StudentExam: public Student
{
    public:
    int cplus,java,dbms,os, cn,c,total;
    void getm()
    {
        cout<<"enter marks of c++"<<endl;
        cin>>cplus;
       cout<<"enter marks of java"<<endl;
        cin>>java;
        cout<<"enter marks of dbms"<<endl;
        cin>>dbms;
        cout<<"enter marks of os"<<endl;
        cin>>os;
        cout<<"enter marks of cn"<<endl;
        cin>>cn;
        cout<<"enter marks of c"<<endl;
        cin>>c;

    }
};

class StudentResult:public StudentExam
{
    public:
    float percent;
    int total=0;
    void cal_per()
    {
        total=cplus+java+dbms+os+cn+c;
        percent=total/6.0;

    }

    void disp_details()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"     ***MARKS LIST***    \n";
        cout<<"---------------------------------"<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"student id : "<<stu_id<<endl;
        cout<<"total marks is : "<<total<<endl;
        cout<<"percentage : "<<percent<<endl;
        cout<<"---------------------------------"<<endl;

    }


};

int main()
{
    StudentResult *s1;
    int i,n;
    system("cls");
    cout<<"howmany student details you want to enter"<<endl;
    cin>>n;
    s1=new StudentResult[n];
    for(i=0;i<n;i++)
    {
        s1[i].get_d();
        s1[i].getm();
        s1[i].cal_per();
    }
     for(i=0;i<n;i++)
    {
        s1[i].disp_details();
       
    }
    return 0;
}**/
#include<iostream>
using namespace std;
class Worker
{
    public:
    int code;
   char name[20]; 
   float salary;
   Worker()
   {
    salary=60000;
   }


};
class officer
{
    public:
   int DA, HRA;
};
class manager:public Worker,public officer
{
    public:
    float TA, gross_salary;
    void get_deatils()
    {
        cout<<"enter name and code"<<endl;
        cin>>code>>name;
        cout<<"entre DA and HRA"<<endl;
        cin>>DA>>HRA;
    }

    void find_gross_salary()
    {
        TA=(salary*10)/100;
        gross_salary=salary+DA+TA+HRA;

    }
    void disp_deatils()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"    *** EMPLOYEE DETAILS***    "<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"code : "<<code<<endl;
        cout<<"salary : "<<salary<<endl;
        cout<<"DA : "<<DA<<endl;
        cout<<"HRA : "<<HRA<<endl;
        cout<<"TA : "<<TA<<endl;
        cout<<"gross salary : "<<gross_salary<<endl;
        cout<<"--------------------------------"<<endl;

    }
};

int main()
{
    manager *m1;
    int n;
    cout<<"enter manager count : "<<endl;
    cin>>n;
    m1=new manager[n];
    for(int i=0;i<n;i++)
    {
        m1[i].get_deatils();
        m1[i].find_gross_salary();
        m1[i].disp_deatils();
    }
    return 0;
}



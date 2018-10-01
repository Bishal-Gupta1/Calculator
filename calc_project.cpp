/*.................................................Project Calculator.............................................*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include"base_conversion.c"
//#include<time>
#include<windows.h>
#include<cstring>
#include<math.h>
#include<iomanip>
using namespace std;
void default1(char *);
class standard
{
    char c;
    public:
  void sum(void)
    {
       float x;
       float temp=0;
       cout<<"Enter the Numbers Below &"<<endl<<"If wish to quit press 00"<<endl<<"\t\tResult"<<endl<<"\t\t------"<<endl;
       while(x!=00)
        {
            cin>>x;
            temp+=x;
            cout<<"\t\t"<<temp<<endl;
        }
    }
    void mul(void)
    {
        float x,temp=1;
       cout<<"Enter the Numbers:"<<endl<<"If wish to quit press 00"<<endl<<"\t\tResult"<<endl<<"\t\t------"<<endl;
        while(x!=00)
        {
            cin>>x;
            temp*=x;
            cout<<"\t\t"<<temp<<endl;

        }
    }
    void diff()
    {
        float x,y;
        cout<<"Enter the two Numbers:"<<endl;
            cin>>x>>y;
                cout<<"Ans:\t"<<x-y<<endl;

    }
  double div(float x,float y)
    {
        while(y==0)
        {
            cout<<"Number cannot be divided by 0"<<endl;
            cout<<"Enter other value:\t";
            cin>>y;
        }
        return(x/y);

    }
   int mod(long x,long y)
    {
        while(y==0)
        {
            cout<<"Number cannot be divided by 0";
            cout<<"Enter other value:\t";
            cin>>y;
        }
      return (x%y);
    }
};

class s_fic
{
   public :
    double square (int);
    double cube  ( int );
    double power(long,long);
    float sq_root(int);
    long long fact(int);
    double sin(double);
    double cos(double);
    double tan(double);
};
double s_fic::square(int x)
{
    return (double (x*x));
}
double s_fic::cube(int x)
{
    return (double (x*x*x));
}
double s_fic::power(long x, long y)
{
    return (long (pow(x,y)));
}
float s_fic::sq_root( int x)
{
    return (float (sqrt(x)));
}
long long s_fic::fact(int x)
{
   int n=int(x);
    long long  f=1;
   while(n>1)
   { //cout<<f<<endl;
    f*=n;
    n--;
   }

   return (f);
}
double s_fic::sin(double x)
{
    return (sin(x));
}
double s_fic::cos(double x)
{
    return (cos(x));
}
double s_fic::tan(double x)
{
    return tan(x);
}
 main()
{
    int dec;
    standard s;
    s_fic s1;
    int choice,i,x,j,y;
    do
    {
    cout<<"\n\t"<<"1.Standard Calculator"<<"\n\t"<<"2.Scientific Calculator \t(Some Of Feature Temporarily Unavailable!!!)"<<"\n\t"<<"3.Exit"<<endl;
    cout<<"Choose Calculator Type"<<"\t";
    cin>>choice;
    switch(choice)
    {
    case 1:
        char str[25];
        do
        {
            strcpy(str,"Standard Calculator");
        default1(str);
            cout<<"\n\t"<<"1.)Addition"<<"\n\t"<<"2.)Subtraction"<<"\n\t"<<"3.)Multiplication"<<"\n\t"<<"4.)Division"<<"\n\t"<<"5.)Modulus"<<"\n\t"<<"6.)Main Menu"<<endl;
            cin>>choice;
            switch(choice)
            {
          case 1:
               s.sum();
               system("cls");
                break;
          case 2:
              s.diff();
              cout<<"Press any Key to Continue";
              getch();
               system("cls");
              break;
          case 3:
                s.mul();system("cls");
                break;
          case 4:
                float a,b;
                cout<<"Enter numbers:\n";
                cin>>a>>b;
                cout<<endl<<"Result :\t"<<s.div(a,b);
                cout<<endl<<"Press any Key to Continue";
              getch();
               system("cls");
                break;
          case 5:
                cout<<"Enter numbers:\n";
                cin>>a>>b;
                cout<<endl<<"Result :\t"<<s.mod(a,b);cout<<endl<<"Press any Key to Continue";
              getch();
               system("cls");
                break;
          default :
                  break;
            }
        }while(choice!=6);
               system("cls");
        break;
    case 2:
        do
        {
           strcpy(str,"Scientific Calculator");
           default1(str);
            cout<<"\n\t 1.)Square\n\t 2.)Cube\n\t 3.)Power\n\t 4.)Square Root\n\t 5.)Fact\n\t 6.)Sine\n\t 7.)Cosine\n\t 8.)Tangent\n\t 9.)Decimal->(Binary,Octal,Hexadecimal)\n\t10.)Exit\n";
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"Enter Number\t";
                cin>>x;
                cout<<s1.square(x)<<endl;
                  getch();
               system("cls");
                break;
            case 2:
                cout<<"Enter Number\t";
                cin>>x;
                cout<<"Ans:\t"<<s1.cube(x)<<endl;
                  getch();
               system("cls");
                break;
            case 3:
                cout<<"Enter Base and Exponent respectively\n";
                cin>>x>>y;
                cout<<"Ans:\t"<<s1.power(x,y)<<endl;
                  getch();
               system("cls");
                break;
            case 4://long int gd;
                cout<<"Enter Number\t";
                cin>>x;

                cout<<"Ans:\t"<<s1.sq_root(x)<<endl;
                getch();
               system("cls");
                break;
            case 5:
                cout<<"Enter Number\t";
                cin>>x;
                cout<<"Ans:\t"<<s1.fact(x)<<endl;
                  getch();
               system("cls");
                break;
            case 6:
                cout<<"Enter Angle\t";
                cin>>x;
                cout<<"Value:\t"<<s1.sin(x)<<endl;
                  getch();
               system("cls");
                break;
            case 7:
                cout<<"Enter Angle\t";
                cin>>x;
                cout<<"Value:\t"<<s1.cos(x)<<endl;
                  getch();
               system("cls");
                break;
            case 8:
                cout<<"Enter Angle\t";
                cin>>x;
                cout<<"Value:\t"<<s1.tan(x)<<endl;
                  getch();
               system("cls");
                break;
            case 9:
                    printf("Enter The Decimal Number:\t");
                    scanf("%d",&dec);
                    printf("\nBinary Equivalent is:     \t");
                    con(dec,2);
                    printf("\nOctal Equivalent is:      \t");
                    con(dec,8);
                    printf("\nHexadecimal Equivalent is:\t");
                    con(dec,16);
                    cout<<endl<<"Press Any Key to Continue";
                    getch();
                    system("cls");
                    break;
            }
        }while(choice!=10);
               system("cls");
        break;
    default :
        break;
    }
    }while(choice!=3);
    return 0;
}

void default1(char s[])
{
   int x;
      cout<<"\t\t";
        for(x=0;x<10;x++)
        {
        cout<<"**";
        }
        cout<<endl<<"\t\t"<<s<<endl<<"\t\t";
        for(x=0;x<10;x++)
        {
          cout<<"==";
        }
        cout<<endl;
}

#include<stdio.h>
#include<string.h>

struct patient
{
    char name[50],pass[10],user[50];
};
typedef struct patient p;

struct test
{
    char test_name[100];
    float cost;
} tst[20];
typedef struct test T;

typedef struct info
{
    char first[100];
    char last[100];
    int age;
    char gender[100];
    char pn[100];
    char dept[100];
    int serial;

} info;

char st[100];
char tf[50];
char t[50];
int totaltest=0;
float testcost=0.00;

void title();
int footer();
void welcomepage();
int homepage();
void about();
void hotline();
void dept();
void signup();
void signin();
int patient_menu();
int test();
void booktest();
void testupdate();
void testfile();
void testread();
void canceltest();
void appoi_read();
void appointment();
void Blood_Bank();
void cancelappoi();

int main()
{
    int a,b,c;
    char file[20];
    testupdate();
    welcomepage();
    getchar();
    system("cls");
A:
    title();
    a=homepage();
    if(a==1)
    {
        getchar();
        system("cls");
        title();
        about();
        b=footer();
        if(b==1||b==2)
        {
            getchar();
            system("cls");
            goto A;
        }
    }
    else if(a==2)
    {
        getchar();
        system("cls");
        title();
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tDo you have an account already?");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t1. Yes\t\t2. No");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t3. Go to homepage\t\t4. Go to previous page");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tPress 1 or 2 or 3 or 4 and enter: ");
        scanf("%d",&c);
        if(c==1)
        {
            getchar();
            system("cls");
B:
            title();
            signin();
            printf("\n\t\t\t\t\t\t\t\tPress enter to continue: ");
            int d,e;
C:
            getchar();
            system("cls");
            title();
            d=patient_menu();
            if(d==1)
            {
                getchar();
                system("cls");
                title();
                appointment();
                printf("\n\n\n\t\t\t\t1. Go to patient menu\t\t2. Exit\n\n\n\t\t\t\tPress 1 or 2 and enter: ");
                int g;
                scanf("%d",&g);
                if(g==1)
                    goto C;
                else if(g==2)
                    system("cls");
            }
            else if(d==2)
            {
                getchar();
                system("cls");
                title();
                e=test();
                if(e==1)
                {
                    booktest();
                    printf("\n\n\t\t\t\t\t\t\t1.Go to patient menu\t\t2.Exit");
                    printf("\n\n\t\t\t\t\t\t\t\tPress 1 or 2 and enter: ");
                    int h;
                    scanf("%d",&h);
                    if(h==1)
                        goto C;
                    else if(h==2)
                        system("cls");
                }
                else if(e==2)
                {
                    goto C;
                }
            }

            else if(d==4)
            {
                getchar();
                system("cls");
                title();
                appoi_read();
                testread();
                printf("\n\n\n\n\n\n\t\t\t\t\t1.Go to patient menu\t\t2.Exit");
                printf("\n\n\t\t\t\t\t\tPress 1 or 2 and enter: ");
                int h;
                scanf("%d",&h);
                if(h==1)
                    goto C;
                else if(h==2)
                    system("cls");
            }
            else if(d==3)
            {
                getchar();
                system("cls");
                Blood_Bank();
            }
            else if(d==7)
            {
                getchar();
                system("cls");
                goto A;
            }
            else if(d==5)
            {
                getchar();
                system("cls");
                title();
                printf("\n\n\n\n");
                testread();
                printf("\n\n\n\n\t\t\t\t\tDo you want to cancel your booking?");
                printf("\n\n\t\t\t\t\t1.YES\t\t\t2.NO");
                printf("\n\n\n\t\t\t\t\t\tPress 1 or 2 and enter: ");
                int v;
                scanf("%d",&v);
                if(v==1)
                {
                    canceltest();
                    printf("\n\n\n\n\t\t\t\t\t\t\t\tYOUR CANCELLATION WAS SUCCESSFULL!!");
                    printf("\n\n\t\t\t\t\t\t\t\t1.Go to patient menu\t\t2.Exit");
                    printf("\n\n\t\t\t\t\t\t\t\tPress 1 or 2 and enter: ");
                    int h;
                    scanf("%d",&h);
                    if(h==1)
                        goto C;
                    else if(h==2)
                        system("cls");
                }
                else if(v==2)
                {
                    goto C;
                }
            }
            else if(d==6)
            {
                getchar();
                system("cls");
                title();
                printf("\n\n\n\n");
                appoi_read();

                printf("\n\n\n\n\t\t\t\t\tDo you want to cancel your appointment?");
                printf("\n\n\t\t\t\t\t1.YES\t\t\t2.NO");
                printf("\n\n\n\t\t\t\t\t\tPress 1 or 2 and enter: ");
                int v;
                scanf("%d",&v);
                if(v==1)
                {
                    cancelappoi();
                    printf("\n\n\n\n\t\t\t\t\t\t\t\tYOUR CANCELLATION WAS SUCCESSFULL!!");
                    printf("\n\n\t\t\t\t\t\t\t\t1.Go to patient menu\t\t2.Exit");
                    printf("\n\n\t\t\t\t\t\t\t\tPress 1 or 2 and enter: ");
                    int h;
                    scanf("%d",&h);
                    if(h==1)
                        goto C;
                    else if(h==2)
                        system("cls");
                }
                else if(v==2)
                {
                    goto C;
                }
            }
        }
        else if(c==2)
        {
            getchar();
            system("cls");
            title();
            signup();
            printf("\n\n\t\t\t\t\t\t\t\t\tPress enter to sign in: ");
            getchar();
            system("cls");
            goto B;
        }
        else if(c==3||c==4)
        {
            getchar();
            system("cls");
            goto A;
        }
    }
    else if(a==3)
    {
        getchar();
        system("cls");
        title();
        dept();
        c=footer();
        if(c==1||c==2)
        {
            getchar();
            system("cls");
            goto A;
        }
    }
    else if(a==4)
    {
        getchar();
        system("cls");
        title();
        hotline();
        printf("\n\n");
        c=footer();
        if(c==1||c==2)
        {
            getchar();
            system("cls");
            goto A;
        }
    }
    return 0;

}

void title()
{
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t=>TASMANIA HOSPITALS LTD.<=\n");
    printf("\t\t\t\t\t\t\t\t-------------------------------------------");

}

void welcomepage()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\t\t\t\t\t* *                                                                             * * \n");
    printf("\t\t\t\t\t* *     WELCOME TO                                                              * * \n");
    printf("\t\t\t\t\t* *                                                                             * * \n");
    printf("\t\t\t\t\t* *                                                                             * * \n");
    printf("\t\t\t\t\t* * #########    #      # # # #   #       #    #    #       # #######    #      * * \n");
    printf("\t\t\t\t\t* *     #      #   #   #      ##  # #   # #  #   #  ##      #    #     #   #    * * \n");
    printf("\t\t\t\t\t* *     #     #     #   #         #  # #  # #     # # #     #    #    #     #   * * \n");
    printf("\t\t\t\t\t* *     #     #     #     #       #   #   # #     # #  #    #    #    #     #   * * \n");
    printf("\t\t\t\t\t* *     #     #######      #      #       # ####### #   #   #    #    #######   * * \n");
    printf("\t\t\t\t\t* *     #     #     #        #    #       # #     # #    #  #    #    #     #   * * \n");
    printf("\t\t\t\t\t* *     #     #     #         #   #       # #     # #     # #    #    #     #   * * \n");
    printf("\t\t\t\t\t* *     #     #     # ##       #  #       # #     # #      ##    #    #     #   * * \n");
    printf("\t\t\t\t\t* *     #     #     # # # # # #   #       # #     # #       # ####### #     #   * * \n");
    printf("\t\t\t\t\t* *                                                                             * * \n");
    printf("\t\t\t\t\t* *                                                       HOSPITAL              * * \n");
    printf("\t\t\t\t\t* *                                                                             * * \n");
    printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\tPress enter to continue: ");
}

int homepage()
{
    printf("\n\n\n");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t 1. About us");
    printf("\n\n\t\t\t\t\t\t\t\t\t 2. Patient Portal");
    printf("\n\n\t\t\t\t\t\t\t\t\t 3. Departments");
    printf("\n\n\t\t\t\t\t\t\t\t\t 4. Hotlines");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress 1 or 2 or 3 or 4 and enter: ");
    int z;
    scanf("%d",&z);
    return z;
}

void about()
{
    FILE *abt;
    char a;
    abt=fopen("About.txt","r");
    if(abt!=NULL)
    {
        while((a=fgetc(abt))!=EOF)
        {
            putchar(a);
        }
        fclose(abt);
    }
    printf("\n\n");
}

void hotline()
{
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\tAppointment Hotline: 02 22 22 62 466");
    printf("\n\n\n\n\t\t\t\t\t\t\t\tEmergency: +880 1914 001234");
    printf("\n\n\n\n\t\t\t\t\t\t\t\tAmbulance Hotline: 10666");
}

void dept()
{
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t  'ALL DEPARTMENT'\n");
    printf("\t\t\t\t\t\t\t\t\t  __________________\n\n\n");
    printf("\t\t\t\t\t1.CARDIOLOGY\t2.ENT \t\t\t3.GYNECOLOGY\t\t\t4.NEUROLOGY\n\n\t\t\t\t\t5.ORTHOPEDICS\t6.PHYSIOTHERAPY\t\t7.CARDIAC & VASCULAR SURGERY\t8.DERMATOLOGY\n");
    char c,a[100];
    FILE *dpt;
    printf("\n\n\t\t\t\t\t\t\t\tEnter the Department Name:");
    gets(a);
    printf("\n\n");
    strcat(a,".txt");
    dpt=fopen(a,"r");
    if(dpt!=NULL)
    {
        while((c=fgetc(dpt))!=EOF)
        {
            putchar(c);
        }
    }
    fclose(dpt);
    printf("\n");
}

void signup()
{
    char a[50],n[100];
    FILE *f;
    p patient;
    fflush(stdin);
    printf("\n\n\n\n\t\t\t\t\tEnter your name: ");
    gets(patient.name);
    printf("\n\n\t\t\t\t\tEnter your username: ");
    gets(patient.user);
    strcpy(n,patient.user);
    strcat(n,".txt");
    f=fopen(n,"a");
    printf("\n\n\t\t\t\t\t(Include atleast 1 capital letter, 1 small letter, 1 digit and the length must be more than 6 characters)");
    printf("\n\n\t\t\t\t\tEnter password for your account: ");
A:
    gets(patient.pass);
    strcpy(a,patient.pass);
    int len=strlen(a),b,c,d,e;
    e=len>=6;
    for(int i=0; i<len; i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            b=1;
        else if(a[i]>='A'&&a[i]<='Z')
            c=1;
        else if(a[i]>='0'&&a[i]<='9')
            d=1;
    }
    if(b&c&d&e==1)
        printf("\n\n\t\t\t\t\tAccount created successfully!!");
    else
    {
        printf("\n\n\t\t\t\t\tINVALID PASSWORD!!");
        printf("\n\n\t\t\t\t\tEnter password again: ");
        goto A;
    }
    strcpy(patient.pass,a);

    if(f!=NULL)
    {
        fprintf(f,"%s\n",patient.user);

        fprintf(f,"%s\n",patient.pass);
    }
    fclose(f);
}

void signin()
{
    int i;

    char u[50],pa[50],n[100],d[100];
    char usern[50],pass[50];
    FILE *f;
A:
    fflush(stdin);
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\tEnter username: ");
    gets(u);
    strcpy(st,u);
    printf("\n\n\t\t\t\t\t\t\tEnter password: ");
    gets(pa);
    strcpy(tf,pa);
    strcpy(t,pa);
    strcat(t,".txt");
    strcpy(n,u);
    strcat(n,".txt");
    f=fopen(n,"r");
    fscanf(f,"%s\n%s",usern,pass);
    if((strcmp(usern,u)==0)&& (strcmp(pass,pa)==0))
    {
        printf("\n\n\n\n\t\t\t\t\t\t\t\tLOGIN SUCCESSFUL!!");
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t\t\t\t\tWrong username or password!!\n\n\t\t\t\t\t\t\t\tPress enter to try again: ");
        getchar();
        system("cls");
        title();
        goto A;
    }
    printf("\n\n\n\n");
}

int footer()
{
    printf("\n\n\n\n\t\t\t\t\t\t\t 1.Go to homepage\t\t2.Go to previous page");
    printf("\n\n\t\t\t\t\t\t\t\t   Press 1 or 2 and enter: ");
    int z;
    scanf("%d",&z);
    return z;
}

int patient_menu()
{
    printf("\n\n\n");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1. Set up an appointment");
    printf("\n\n\t\t\t\t\t\t\t\t\t2. Book a test");
    printf("\n\n\t\t\t\t\t\t\t\t\t3. Blood Bank");
    printf("\n\n\t\t\t\t\t\t\t\t\t4. Account History");
    printf("\n\n\t\t\t\t\t\t\t\t\t5. Cancel test booking");
    printf("\n\n\t\t\t\t\t\t\t\t\t6. Cancel appointment");
    printf("\n\n\t\t\t\t\t\t\t\t\t7. Go to homepage");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tPress 1 or 2 or 3 or 4 or 5 or 6 and enter: ");
    int z;
    scanf("%d",&z);
    return z;
}

int test()
{
    printf("\n\n\n\n\t\t\t\t\t\t\tTest name\t\t\t\tPrice");
    printf("\n\t\t\t\t\t\t\t_________\t\t\t\t_____");
    printf("\n\n\t\t\t\t\t\t\t1.Platelet\t\t\t\t180.00");
    printf("\n\t\t\t\t\t\t\t2.RBC\t\t\t\t\t200.00");
    printf("\n\t\t\t\t\t\t\t3.Blood Sugar(F/R)\t\t\t200.00");
    printf("\n\t\t\t\t\t\t\t4.Bilirubin\t\t\t\t270.00");
    printf("\n\t\t\t\t\t\t\t5.Lipid Profile\t\t\t\t1200.00");
    printf("\n\t\t\t\t\t\t\t6.ECG\t\t\t\t\t300.00");
    printf("\n\t\t\t\t\t\t\t7.Echo Color Doppler\t\t\t2200.00");
    printf("\n\t\t\t\t\t\t\t8.Ultrasound(Whole Abdomen)\t\t1000.00");
    printf("\n\t\t\t\t\t\t\t9.X-Ray(Chest)\t\t\t\t500.00");
    printf("\n\t\t\t\t\t\t\t10.CT Scan(Brain Contrast)\t\t4000.00");
    printf("\n\n\n\t\t\t\t\t\t\t1.Book a test\t\t2.Go to previous page");
    printf("\n\n\n\t\t\t\t\t\t\t\t Press 1 or 2 and enter: ");
    int z;
    scanf("%d",&z);
    return z;
}

void booktest()
{
    printf("\n\t\t\t\t\t\t\tHow many test you want to book? ");
    int test,k,l;
    float sum=0.00;
    scanf("%d",&test);
    for(k=1; k<=test; k++)
    {
        printf("\n\t\t\t\t\t\t\tSerial no of the test: ");
        scanf("%d",&l);
        sum+=tst[l-1].cost;
    }
    totaltest=test;
    testcost=sum;
    testfile();
    printf("\n\n\t\t\t\t\t\tYOUR BOOKING IS SUCCESSFULL!! TOTAL COST IS %.2f TAKA",sum);
    printf("\n\t\t\t\t\t\t\tYou can check it in your account history.");

}

void testupdate()
{
    FILE *t;
    char a[5000],c;
    int j=0;
    t=fopen("Test.txt","r");
    if(t!=NULL)
    {
        while(fgets(a,5000,t))
        {
            fscanf(t,"\n%s\t%f",&tst[j].test_name,&tst[j].cost);
            j++;
        }
    }
}

void appointment()
{
    FILE *f;
    char s[100];

    strcpy(s,st);
    strcat(s,".txt");
    f=fopen(s,"a");
    info p;
    fflush(stdin);
    printf("\n\n\n\t\t\t\tEnter your first name: ");
    gets(p.first);
    fflush(stdin);
    printf("\t\t\t\tEnter your last name: ");
    gets(p.last);
    fflush(stdin);
    printf("\t\t\t\tEnter Age: ");
    scanf("%d",&p.age);
    fflush(stdin);
    printf("\t\t\t\tEnter gender: ");
    scanf("%s",p.gender);
    fflush(stdin);
tag:
    printf("\t\t\t\tEnter phone number: ");
    scanf("%s",p.pn);
    int len=strlen(p.pn);
    if(len!=11 && (p.pn<'0' || p.pn>'9'))
    {
        printf("\n\n\n\t\t\t\t\t\tINVALID MOBILE NUMBER!!! Try again!!\n\n\n");
        goto tag;
    }
    for(int i=0; p.pn[i]!=NULL; i++)
    {
        if(p.pn[i]<'0' || p.pn[i]>'9')
        {
            printf("\n\n\n\t\t\t\t\t\tINVALID MOBILE NUMBER!!! Try again!!\n\n\n");
            goto tag;
        }
    }
    printf("\n\n\t\t\t\tAVAILABLE DEPARTMENTS:\n\n\t\t\t\t\t\t1.Cardiology | 2.ENT | 3.Gynecology | 4.Neurology | 5.Orthopedics | 6.Physiotherapy | 7.Surgery | 8.Dermatology\n\n");
    fflush(stdin);
    printf("\t\t\t\tEnter Department: ");
    scanf("%s",p.dept);
    printf("\n\n\n\t\t\t\tYOUR APPOINTMENT IS BOOKED SUCCESSFULLY !! You can check it in the account history!!");
    printf("\n\n\n\n\t\t\t");
    if(f!=NULL)
    {
        fprintf(f,"%s %s\n",p.first,p.last);
        fprintf(f,"%d\n",p.age);
        fprintf(f,"%s\n",p.gender);
        fprintf(f,"%s\n",p.pn);
        fprintf(f,"%s\n",p.dept);
    }
    fclose(f);
}

void appoi_read()
{
    FILE *f;
    char b1[10],b2[10];
    char fi[100],l[100],g[100],p[100],d[100];
    char s[100];
    int a=0;
    strcpy(s,st);
    strcat(s,".txt");
    f=fopen(s,"r");
    if(f!=NULL)
    {
        fscanf(f,"%s %s %s %s %d %s %s %s",b1,b2,fi,l,&a,g,p,d);
    }
    if(a==0)
    {
        printf("\n\n\n\n\t\t\t\t\tYOU HAVEN'T SET ANY DOCTOR'S APPOINTMENT YET!!\n\n");
    }
    else
    {
        printf("\n\n\n\n\n\n\t\t\t\tPatient's Name: %s %s\t\t\t\t\tAge: %d\n\n\t\t\t\tGender: %s\t\t\t\t\tPhone Number: %s\n\n\t\t\t\tDepartment: %s",fi,l,a,g,p,d);

        if(strcasecmp(d,"Cardiology")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 10 a.m. to 12 p.m.(SUN and TUES)\n \t\t\t\t\t\t4 p.m. to 6 p.m.(MON & WED)\n");
        }
        else if (strcasecmp(d,"Ent")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 12 p.m. to 2 p.m.(SUN and TUES)\n \t\t\t\t\t\t10 a.m. to 12 p.m.(MON & WED)\n");
        }
        else if (strcasecmp(d,"Neurology")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 4 p.m. to 6 p.m.(SUN and TUES)\n \t\t\t\t\t\t12 p.m. to 2 p.m.(MON & WED)\n");
        }
        else if (strcasecmp(d,"Gynecology")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 6 p.m. to 8 p.m.(SUN and TUES)\n \t\t\t\t\t\t6 p.m. to 8 p.m.(MON & WED)\n");
        }
        else if (strcasecmp(d,"Orthopedics")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 11 a.m. to 1 p.m.(SUN and TUES)\n \t\t\t\t\t\t1 p.m. to 3 p.m.(MON & WED)\n");
        }
        else if (strcasecmp(d,"Physiotherapy")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 4 p.m. to 6 p.m.(SUN and TUES)\n \t\t\t\t\t\t12 p.m. to 2 p.m.(MON & WED)\n");
        }
        else if (strcasecmp(d,"Dermatology")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 7 p.m. to 8 p.m.(SUN and TUES)\n \t\t\t\t\t\t7 p.m. to 8 p.m.(MON & WED)\n");
        }
        else if (strcasecmp(d,"Surgery")==0)
        {
            printf("\n\n\t\t\t\tVisiting Hours- 10 a.m. to 11 a.m.(SUN and TUES)\n \t\t\t\t\t\t11 a.m. to 12 p.m.(MON & WED)\n");
        }
        else
        {
            printf("No Department has been selected!");
        }


    }
    fclose(f);
}
void Blood_Bank()
{
    int x,y;
    int bloodgroups[8];
    int i;
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t=>TASMANIA HOSPITALS LTD.<=\n");
    printf("\t\t\t\t\t\t\t-------------------------------------------");

    printf("\n\n\n\t\t\t\t\t\t\tPress 1 if you are a blood donator:\n");
    printf("\t\t\t\t\t\t\tPress 2 if you want to take blood:\n");
    printf("\t\t\t\t\t\t\tPress 3 to Check blood Quantity:");
    printf("\n\n\n\t\t\t\t\t\t\tPress 1 or 2 or 3:");
    scanf("%d",&x);
    getchar();
    system("cls");
    if(x==1)
    {
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t=>TASMANIA HOSPITALS LTD.<=\n");
        printf("\t\t\t\t\t\t\t-------------------------------------------");
        FILE *fp;
        fp = fopen("blood_record.txt","r");
        if(fp==NULL)
        {
            for(i=0; i<8; i++)
                bloodgroups[i]=0;
        }
        else
        {
            fread(bloodgroups,sizeof(int),8,fp);
        }
        fclose(fp);
        printf("\n\t\t\t\t\t\t\t==>Welcome to blood donate center<==\n\n\n");

        while(1)
        {
            printf("\t\t\t\t\t\t\tEnter the serial of your blood Group:\n\n");
            printf("\n\t\t\t\t\t\t\t1:A Positive\n\t\t\t\t\t\t\t2:A Negative\n\t\t\t\t\t\t\t3:B Positive\n\t\t\t\t\t\t\t4:B Negative\n\t\t\t\t\t\t\t5:O Positive\n\t\t\t\t\t\t\t6:O Negative\n\t\t\t\t\t\t\t7:AB Positive\n\t\t\t\t\t\t\t8:AB Negative\n");
            scanf("%d",&y);
            if(y==1)
            {
                bloodgroups[0]++;
                break;
            }
            else if(y==2)
            {
                bloodgroups[1]++;
                break;
            }
            else if(y==3)
            {
                bloodgroups[2]++;
                break;
            }
            else if(y==4)
            {
                bloodgroups[3]++;
                break;
            }
            else if(y==5)
            {
                bloodgroups[4]++;
                break;
            }
            else if(y==6)
            {
                bloodgroups[5]++;
                break;
            }
            else if(y==7)
            {
                bloodgroups[6]++;
                break;
            }
            else if(y==8)
            {
                bloodgroups[7]++;
                break;
            }
            else
            {
                printf("\nWrong serial number input\n");
            }
        }
        printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood donate successful.");
        fp = fopen("blood_record.txt","w");
        fwrite(bloodgroups,sizeof(int),8,fp);
        fclose(fp);
        printf("\n\t\t\t\t\t\t\tPress 0 to go to previous page:");
        int q;
        scanf("%d",&q);
        if(q==0)
        {
            system("cls");
            Blood_Bank();
        }

    }


    else if(x==2)
    {
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t=>TASMANIA HOSPITALS LTD.<=\n");
        printf("\t\t\t\t\t\t\t-------------------------------------------");
        FILE *fp2;
        fp2 = fopen("blood_record.txt","r");
        if(fp2==NULL)
        {
            for(i=0; i<8; i++)
                bloodgroups[i]=0;
        }
        else
        {
            fread(bloodgroups,sizeof(int),8,fp2);
        }
        fclose(fp2);
        printf("\n\t\t\t\t\t\t\t==>Welcome to blood bank<==\n");
        while(1)
        {
            printf("\n\t\t\t\t\t\t\tEnter the serial of blood Group which need:\n");
            printf("\n\t\t\t\t\t\t\t1:A Positive\n\t\t\t\t\t\t\t2:A Negative\n\t\t\t\t\t\t\t3:B Positive\n\t\t\t\t\t\t\t4:B Negative\n\t\t\t\t\t\t\t5:O Positive\n\t\t\t\t\t\t\t6:O Negative\n\t\t\t\t\t\t\t7:AB Positive\n\t\t\t\t\t\t\t8:AB Negative\n");
            scanf("%d",&y);

            if(y==1)
            {
                if(bloodgroups[0]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[0]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;

            }
            else if(y==2)
            {
                if(bloodgroups[1]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[1]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;
            }
            else if(y==3)
            {
                if(bloodgroups[2]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[2]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;
            }

            else if(y==4)
            {
                if(bloodgroups[3]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[3]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;
            }

            else if(y==5)
            {
                if(bloodgroups[4]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[4]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;
            }
            else if(y==6)
            {
                if(bloodgroups[5]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[5]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;
            }
            else if(y==7)
            {
                if(bloodgroups[6]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[6]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;
            }
            else if(y==8)
            {
                if(bloodgroups[7]==0)
                    printf("\n\t\t\t\t\t\t\tNo blood in reserve.");
                else
                {
                    bloodgroups[7]--;
                    printf("\n\t\t\t\t\t\t\tCongratulation!!!\n\t\t\t\t\t\t\tBlood given from blood bank successful\n");
                }
                break;
            }
            else
            {
                printf("\n\t\t\t\t\t\t\tWrong serial number input\n");
            }
        }
        fp2 = fopen("blood_record.txt","w");
        fwrite(bloodgroups,sizeof(int),8,fp2);
        fclose(fp2);
        printf("\n\t\t\t\t\t\t\tPress 0 to go to previous page:");
        int q;
        scanf("%d",&q);
        if(q==0)
        {
            system("cls");
            Blood_Bank();
        }

    }
    else if(x==3)
    {
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t=>TASMANIA HOSPITALS LTD.<=\n");
        printf("\t\t\t\t\t\t\t-------------------------------------------");
        FILE *fp3;
        fp3 = fopen("blood_record.txt","r");
        if(fp3==NULL)
        {
            for(i=0; i<8; i++)
                bloodgroups[i]=0;
        }
        else
        {
            fread(bloodgroups,sizeof(int),8,fp3);
        }
        fclose(fp3);
        printf("\n\t\t\t\t\t\t\t==>>Welcome to blood reserve display system<<==\n");
        printf("\t\t\t\t\t\t\tA Positive=%d Bag\n",bloodgroups[0]);
        printf("\t\t\t\t\t\t\tA Negative=%d Bag\n",bloodgroups[1]);
        printf("\t\t\t\t\t\t\tB Positive=%d Bag\n",bloodgroups[2]);
        printf("\t\t\t\t\t\t\tB Negative=%d Bag\n",bloodgroups[3]);
        printf("\t\t\t\t\t\t\tO Positive=%d Bag\n",bloodgroups[4]);
        printf("\t\t\t\t\t\t\tO Negative=%d Bag\n",bloodgroups[5]);
        printf("\t\t\t\t\t\t\tAB Positive=%d Bag\n",bloodgroups[6]);
        printf("\t\t\t\t\t\t\tAB Negative=%d Bag\n",bloodgroups[7]);

        printf("\n\t\t\t\t\t\t\tPress 0 to go to previous page:");
        int q;
        scanf("%d",&q);
        if(q==0)
        {
            system("cls");
            Blood_Bank();
        }
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t\t\t\tInput Serial Number is Invalid\n!!!");
        Blood_Bank();
    }
}

void testfile()
{
    FILE *z;
    z=fopen(t,"w");
    if(z!=NULL)
    {
        fprintf(z,"%d\n%f",totaltest,testcost);
    }
    fclose(z);
}

void testread()
{
    FILE *k;
    int x=0;
    float y=0.00;
    k=fopen(t,"r");
    if(k!=NULL)
    {
        fscanf(k,"%d\n%f",&x,&y);
    }
    if(x==0||y==0.00)
        printf("\n\n\t\t\t\t\tYOU HAVEN'T BOOKED ANY TEST YET!!");
    else
        printf("\n\n\t\t\t\t\tYou have booked %d test(s) of taka %f",x,y);
    fclose(k);
}

void canceltest()
{
    totaltest=0;
    testcost=0.00;
    testfile();
}

void cancelappoi()
{
    FILE *f1,*f2;
    char n[100],m[100],o[100];

    strcpy(n,st);
    strcat(n,".txt");
    f1=fopen(n,"r");
    remove(f1);


    strcpy(m,st);
    strcat(m,".txt");
    f2=fopen(m,"w");

    if(f2!=NULL)
    {
        fprintf(f2,"%s\n",st);
        fprintf(f2,"%s\n",tf);
    }
    fclose(f2);
}

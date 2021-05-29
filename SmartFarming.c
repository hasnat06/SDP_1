#include<stdio.h>
#include<windows.h>

void password();
void mainmenu();
void input();
void output();
void area();
int Delete();

main()
{

    password();
}
void password()
{
    system("cls");
    system("COLOR F1");

    int i,j;
    char d[100]={" Smart Farming Management "};
    printf("\n\n\n\n\t\t");
    for(j=0;j<25;j++)
    {
        Sleep(40);
        printf("*");
    }

    for(i=0;i<26;i++)
    {
        Sleep(40);
        printf("%c",d[i]);
    }

    for(j=0;j<25;j++)
    {
        Sleep(40);
        printf("*");
    }

    printf("\n\t\t\tCreated by:\n\n");
    printf("\t\t\t\tMd.Abul Hasnat(216)\n\n\t\t\t\tAfsana Akter(189)\n\n\t\t\t\tRokonuzzaman Razu(211)");
    printf("\n\n\t\t\t Intake : 38 \n\n\t\t\t Section : 05\n\n \t\t\t Dept. Of CSE at BUBT ");
    printf("\n\n\t\t\tEnter your Password : ");
    int n;
    scanf("%d",&n);
    if(n==1234)
    {
        printf("\n\t\t\t\tPassword match");
        Sleep(900);
        mainmenu();
    }
    else
    {
        printf("\n\t\t\t\tPassword not match   Please enter correct password");
        Sleep(1300);
        password();
    }


}
void mainmenu()
{
    system("cls");
    system("COLOR 79");
        int i,j;
    char d[12]={" MAIN MANUE "};
    printf("\n\n\n\n\t\t");
    for(j=0;j<15;j++)
    {
        Sleep(30);
        printf("*");
    }

    for(i=0;i<11;i++)
    {
        Sleep(30);
        printf("%c",d[i]);
    }

    for(j=0;j<15;j++)
    {
        Sleep(30);
        printf("*");
    }

    printf("\n\n\n\n\t\t\t Choose a number \n");
    printf("\n\t\t\t1.Input\n\n\t\t\t2.Output\n\n\t\t\t3.Area of this firm\n\n\t\t\t4.Delete file");

    switch(getch())
    {
        case '1':
            input();
            break;
        case '2':
            output();
            break;
        case '3':
            area();
            break;
        case '4':
            Delete();
            break;
    }


}
void input()
{
    system("cls");
    system("COLOR 70");
    FILE *fi;
    int i,j,k,l,a,b,c,d,e,f,p,asum=0,bsum=0,csum=0,dsum=0,esum=0,fsum=0;
    int itf,itp,itd,tint;
    char x,loop='y';
    k=1;
    printf("\n\n\t\t**>>Please Input your data<<**\n\n");
    fi=fopen("Newfile.txt","a");
    while (loop=='Y'||loop=='y')
    {
        printf("Day:%d Fishing west:",k);
         fprintf(fi,"\nDay:%d Fishing west:",k);
        scanf("%d",&a);
         fprintf(fi,"%d",a);
        printf("Day:%d Fishing income:",k);
        fprintf(fi,"\nDay:%d Fishing income:",k);
        scanf("%d",&b);
        fprintf(fi,"%d",b);

        printf("Day:%d Poultry west:",k);
        fprintf(fi,"\nDay:%d Poultry west:",k);
        scanf("%d",&c);
        fprintf(fi,"%d",c);
        printf("Day:%d Poultry income:",k);
        fprintf(fi,"\nDay:%d Poultry income:",k);
        scanf("%d",&d);
        fprintf(fi,"%d",d);

        printf("Day:%d Dairy west:",k);
        fprintf(fi,"\nDay:%d Dairy west:",k);
        scanf("%d",&e);
        fprintf(fi,"%d",e);
        printf("Day:%d Dairy income:",k);
        fprintf(fi,"\nDay:%d Dairy income:",k);
        scanf("%d",&f);
        fprintf(fi,"%d",f);

        asum+=a;bsum+=b;csum+=c;dsum+=d;esum+=e;fsum+=f;
        printf("\n\n\t\t Do you want to input another day enter (Y/N)??\t");
        fflush(stdin);
        scanf("%c",&x);
        loop=x;
        k++;
    }

    fprintf(fi,"\n\nTotal wast for fish:%d",asum);
    fprintf(fi,"\nTotal income for fish:%d",bsum);
    itf=bsum-asum;
    fprintf(fi,"\nTotal interest for fish:%d\n",itf);

    fprintf(fi,"\nTotal wast for poultry:%d",csum);
    fprintf(fi,"\nTotal income for poultry:%d",dsum);
    itp=dsum-csum;
    fprintf(fi,"\nTotal interest for poultry:%d\n",itp);

    fprintf(fi,"\nTotal wast for Dairy:%d",esum);
    fprintf(fi,"\nTotal income for Dairy:%d",fsum);
    itd=fsum-esum;
    fprintf(fi,"\nTotal interest for Dairy:%d\n",itd);

    tint=itf+itp+itd;
    fprintf(fi,"Total interest :%d\n\n",tint);
    fclose(fi);

    printf(" If you want to main menu Enter 0 \n\n\t\t0.Main menu :");
    scanf("%d",&p);
    if(p==0)
    {
        mainmenu();
    }
}

void output()
{
    system("cls");
    system("COLOR 70");
    FILE *fi;

    fi=fopen("Newfile.txt","a+");
    char singleline[100];

    while (!feof(fi))
    {
        fgets(singleline,100,fi);
        puts(singleline);
    }
    fclose(fi);
    int p;
    printf(" If you want to main menu Enter 0 \n\n\t\t0.Main menu :");
    scanf("%d",&p);
    if(p==0)
    {
        mainmenu();
    }

}

void area()
{
    system("cls");
    system("COLOR F0");

    printf("\n\tTotal area of this firm is 50 acre only.\n\t30 acre used for fishing pond, \n\t10 acre used for poultry shed &\n\t10 acre used for dairy shed.\n");

    int p;
    printf(" \n\t\tIf you want to main menu Enter 0 \n\n\t\t0.Main menu :");
    scanf("%d",&p);
    if(p==0)
    {
        mainmenu();
    }
}

int Delete()
{
    system("cls");
    int ret;

    ret = remove("Newfile.txt");

    if(ret == 0)
    {
        printf("\tFile deleted successfully");
    }
    else
    {
        printf("\tError: unable to delete the file");
    }


    int p;
    printf(" \n\t\t\tIf you want to main menu Enter 0 \n\n\t\t0.Main menu :");
    scanf("%d",&p);
    if(p==0)
    {
        mainmenu();
    }
    return 0;
}

#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    cout << "Enter File Name followed by -l for count & -w for word count: " << "\n";
     int noc=0,now=0,nol=1,choice;
     char s;
     FILE *fr;
     char ch;

     fr=fopen(argv[1],"r");

     if(fr==NULL)
     {
          cout<<"\n Invalid File Name. \n No such File or Directory ";
          exit(0);
     }
     ch=fgetc(fr);
     while(ch!=EOF)
     {
          if(ch!=' ' && ch!='\n')
               noc++;
          if(ch==' ')
               now++;
          if(ch=='\n')
          {
               nol++;
               now++;
          }
          ch=fgetc(fr);
     }
     fclose(fr);
     if(argv[2]=="l")
        choice=1;
     else
        choice=2;
     switch(choice){
 case 1: cout<<"\n Total No. of Characters  : "<<noc;
            break;
case 2:      cout<<"\n Total No. of Words       : "<<now;
break;

    }

     return 0;
}

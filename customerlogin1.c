#include<stdio.h>
int main()
{
  int logIn,check,m,stop,phoneNumber,movieCode;
  char passWord[10],userName[20],customerName[30];
  char cuserName[]={"anas"};
  char cpassword[]={"pass12"};
  do
  {
    printf("1 to Customer Login : \n");
  printf("2 to Customer resgister : \n");
  scanf("%d",&logIn);
 switch (logIn)
 {
 case 1:
    printf("User name: ");
    scanf("%s",userName);
    printf("Password: ");
    scanf("%s",passWord);


    if (strcmp(cuserName,userName) == 0 && strcmp(cpassword,passWord)==0)
    {
      printf("1 Check movie\n");
      printf("2 Buy Tickets\n");
      printf("3 Show time\n");
      printf("0 Back\n");
      scanf("%d",&check);


      switch (check)
      {
      case 1:
        printf("1 to Action move\n");
        printf("2 to Animation move\n");
        printf("3 to Romantic move\n");
        printf("4 to Triller movie move\n");
        printf("5 to Adventure move\n");
        printf("6 to Biograph move\n");
        scanf("%d",&m);


        switch (m)
        {
        case 1:
          printf(" 001 Bahubali\n");
          printf(" 002 Nemo\n");
          printf(" 003 Up\n");
          printf(" 004 Inside out\n");
          printf(" 005 Zootopia\n");
          printf(" 006 Toy story\n");
          printf(" 007 3 idiots\n");
          printf(" 008 India\n");
          printf(" 009 Bahubali 2\n");
          break;
        case 2:
          printf(" 001 Bahubali\n");
          printf(" 002 Nemo\n");
          printf(" 003 Up\n");
          printf(" 004 Inside out\n");
          printf(" 005 Zootopia\n");
          break;
        case 3:
          printf(" 001 Bahubali\n");
          printf(" 002 Nemo\n");
          printf(" 003 Up\n");
          printf(" 004 Inside out\n");
          printf(" 005 Zootopia\n");
          break;
        case 4:
          printf(" 001 Bahubali\n");
          printf(" 002 Nemo\n");
          printf(" 003 Up\n");
          printf(" 004 Inside out\n");
          printf(" 005 Zootopia\n");
          break;
        case 5:
          printf(" 001 Bahubali\n");
          printf(" 002 Nemo\n");
          printf(" 003 Up\n");
          printf(" 004 Inside out\n");
          printf(" 005 Zootopia\n");
          break;
        case 6:
          printf(" 001 Bahubali\n");
          printf(" 002 Nemo\n");
          printf(" 003 Up\n");
          printf(" 004 Inside out\n");
          printf(" 005 Zootopia\n");
          break;
        case 0:
          printf(" 0 To back ");
          break;
        case 7:
          printf(" 7 Show time ");
          break;
        case 8:
          printf(" 8 Buy tickets ");
          break;
        default:
          break;
        }
        break;
      case 2:
        printf("Enter your name:\n");
        scanf("%s",customerName);
        printf("Phone number : \n");
        scanf("%d",&phoneNumber);
        printf("Movie code : \n");
        scanf("%d",&movieCode);
        break;
      case 3:
        printf("3 to show time\n");
        break;
      case 4:
        printf("0 to back\n");
        break;
      
      default:
        break;
      }
    }
        else if (!(strcmp(cuserName,userName) == 0) && strcmp(cpassword,passWord)==0)
    {
      printf("Wrong username\n");
    }
    else if (strcmp(cuserName,userName) == 0 && !(strcmp(cpassword,passWord) == 0))
    {
      printf("Wrong password\n");
    }
    else if (!(strcmp(cuserName,userName) == 0) && !(strcmp(cpassword,passWord) == 0))
    {
      printf("Wrong username and password\n");
    } 

   break;



 case 2:
    printf("User name: ");
        
   break;
 
 default:
   printf("Wrong code ");
   break;
 } 
 printf("0 to stop\n");
 scanf("%d",&stop); } while (stop!=0);
  
  
  
}
  

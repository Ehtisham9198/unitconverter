#include <stdio.h>
#include<string.h>
int main()
{
    printf("            WELCOME\n");
    printf("HERE IS A SMALL UNIT CONVERTER  PRESENTED BY MOHD EHTISHAM\n");
    
    char u[20]={'T','L','M','I','t','A','l'};
    
    char s;
    int n,t,n1,n2,n21,n3,n4,n5,n6;
    float a,a1,a2,a21,a3,a4,a5,e,e1,e2,e3,e4,e5;
    
        printf("Please enter the type of unit you want to convert: \n");
    printf(" press T for Time\n press L for length\n press M for mass\n press I for electric current \n press t for thermodynamic temperature \n press A for amount of subtance/mole\n");
   
    scanf("%c",&s);
    for(int i=0;i<20;i++)
    {
        if(u[i]==s)
        n=i+1;
        else;
        t=0;
    } 
    switch(n)
    {
    
        case 1:
        
        printf("enter your choice:\n");
        printf("press 1 for HOUR TO MINUTES\n");
        printf("press 2 for HOUR TO SECONDS\n");
        printf("press 3 for MINUTES TO HOURS\n");
        printf("press 4 for  MINUTES TO SECONDS\n");
        printf("press 5 for SECOND  TO MINUTES\n");
        printf("press 6 for SECONDS TO HOURS\n");
        scanf("%d",&n1);
        printf("enter your value\n");
        scanf("%f",&e);
        
        switch(n1)
        {
            case 1:
            a=e*60;
            printf( " YOUR  ANSWER IS %f\n",a);
            break;
            case 2:
            a=e*3600;
             printf( " YOUR  ANSWER IS %f\n",a);
            
            break;
            case 3:
            a=(float)e/60;
             printf( " YOUR  ANSWER IS %f\n",a);
           
            break;
            case 4:
            a=e*60;
             printf( " YOUR  ANSWER IS %f\n",a);
            break;
            case 5:
            a=(float)e/60;
            printf( " YOUR  ANSWER IS %f\n",a);
            break;
            case 6:
            a=(float)e/3600;
            printf( " YOUR  ANSWER IS %f\n",a);
            break;
            default:
            printf("error");
            
            
        }
        break;
    
    case 2:
    printf("enter your choice\n press 1 for meter to feet\n press 2 for feet to meter \n press 3 for feet to inches \n press 4 for inches to feet\n press 5 for kilometer to m,cm,mm\n");
     scanf("%d",&n2);
     printf("enter your value\n");
        scanf("%f",&e1);
     
     switch(n2)
     {
        case 1:
        a1=(float)3.28*e1;
        printf( " YOUR  ANSWER IS %f\n",a1);
        break;
        case 2:
        a1=(float)e1/3.28;
        printf( " YOUR  ANSWER IS %f\n",a1);
        break;
        case 3:
        a1=e1*12;
        printf( " YOUR  ANSWER IS %f\n",a1);
        break;
        case 4:
        a1=(float)e1/12;
        printf( " YOUR  ANSWER IS %f\n",a1);
        break;
        case 5:
        printf("enter your conversion:\n press 1 for km to m\n press 2 for m to cm\n press 3 for cm to mm\n");
        scanf("%d",&n21);
        switch(n21)
        {
            case 1:
            a21=e1*1000;
            printf( " YOUR  ANSWER IS %f\n",a21);
              break;
              case 2:
              a21=e1*100;
              printf( " YOUR  ANSWER IS %f\n",a21);
              break;
              case 3:
              a21=e1*10;
              printf( " YOUR  ANSWER IS %f\n",a21);
              break;
        }
        default:
        printf("error");
        break;
    }
     break;
    
    
    case 3:
    
    printf("enter your choice \n press 1 for kg to g\n press 2 for g to mg \n press 3 for g to kg\n press 4 for mg to kg\n press 5 for mg to g \n press 6 for kg to mg\n");
    scanf("%d",&n3);
    printf("enter your value\n");
    scanf("%f",&e2);
    switch(n3)
    {
        case 1:
        a2=e2*1000;
         printf( " YOUR  ANSWER IS %f\n",a2);
        break;
        case 2:
        a2=e2*1000;
         printf( " YOUR  ANSWER IS %f\n",a2);
        break;
        case 3:
        a2=(float)e2/1000;
         printf( " YOUR  ANSWER IS %f\n",a2);
        break;
        case 4:
        a2=(float)e2/1000000;
         printf( " YOUR  ANSWER IS %f\n",a2);
        break;
        case 5:
        a2=(float)e2/1000;
         printf( " YOUR  ANSWER IS %f\n",a2);
        break;
        case 6:
        a2=e2*100000;
         printf( " YOUR  ANSWER IS %f\n",a2);
        break;
    }
     break;

     case 4:
     printf("enter your choice \n press 1 for ac to dc\n press 2 for dc to ac\n");
     scanf("%d",&n4);
     printf("enter your value \n");
     scanf("%f",&e3);
     switch(n4)
     {
         case 1:
         a3=(float)e3*0.636;
         printf( " YOUR  ANSWER IS %f\n",a3);
           break;
         case 2:
         a3=(float)e3*1.57;
         printf( " YOUR  ANSWER IS %f\n",a3);
        break;
     }
      break;
      
     case 5:
     printf("    NOTE:\n K stands for kelvin\n C stands for celsius\n F stands for farhenite\n");
     
     printf("enter your choice \n press 1 for K to C\n press 2 for C to F \n press 3 for C to K\n press 4 for F to K\n press 5 for F to C \n press 6 for K to F\n");
     scanf("%d",&n5);
     printf("enter your value\n");
     scanf("%f",&e4);
     switch(n5)
     {
         case 1:
         a4=e4-273;
         printf( " YOUR  ANSWER IS %f\n",a4);
        break;
        case 2:
        a4=(float)(e4*1.8)+32;
        printf( " YOUR  ANSWER IS %f\n",a4);
        break;
        case 3:
        a4= e4+273;
        printf( " YOUR  ANSWER IS %f\n",a4);
        break;
        case 4:
        a4=(float)(e4*0.55)+459.67;
        printf( " YOUR  ANSWER IS %f\n",a4);
        break;
         case 5:
         a4=(float)(e4-32)*0.55;
         printf( " YOUR  ANSWER IS %f\n",a4);
        break;
        case 6:
        a4=(float)((e4-273)*1.8)+32;
        printf( " YOUR  ANSWER IS %f\n",a4);
        break;
         
     }
      break;

     case 6:
     printf("enter your choice:\n press 1 for mole to mili mile\n press 2 for mili mole to mole\n");
     scanf("%d",&n6);
     printf("enter your value\n");
     scanf("%f",&e5);
     switch(n6)
     {
         case 1:
         a5=e5*1000;
         printf( " YOUR  ANSWER IS %f\n",a5);
        break;
        case 2:
        a5=(float)e5/1000;
        printf( " YOUR  ANSWER IS %f\n",a5);
        break;
        
     }
     default:
     printf("ERROR!!!!!! WRONG CHOICE");
      }
    }
    

    
    





#include<stdio.h>
int main(){
    //Pattern Question
    //Nested Loop
    //int m=2;
    //int n=2;
   /* for(int i=1;i<=m;i++){ //Rows
        for(int i=1;i<=n;i++){ //Column
            printf("*");
        }
        printf("\n");
    }*/
    /*int m=4;
    int n=4;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
       printf("\n");
    }*/
    //print the given pattern
    /*int m=4; //rows
    int n=5; // column
    for(int i=1;i<=5;i++){ //rows
        for(int j=1;j<=5;j++){ //column
            printf("%d ",i);
        }
        printf("\n");
    }*/
    //Alphadbet square
     /*int m=4; //rows
    int n=5; // column
    for(int i=1;i<=6;i++){ //rows
        for(int j=1;j<=6;j++){ //column
            printf("%c ",j+64);
        }
        printf("\n");
    }*/
    //Printing the pattern
    /*int m=4; //rows
    int n=4; // column
    for(int i=1;i<=7;i++){ //rows
        for(int j=1;j<=i;j++){ //column
            printf("*");
        }
        printf("\n");
    }*/
// Print the given Pattern
   /* int m=4; //rows
    int n=4; // column
    for(int i=1;i<=4;i++){ //rows
        for(int j=1;j<=i;j++){ //column
            printf("%c ",j+64);
        }
        printf("\n");
    }*/
    // Print the given Pattern
   /* int m=4; //rows
    int n=4; // column
    for(int i=1;i<=4;i++){ //rows
        for(int j=1;j<=i;j++){ //column
            printf("%d ",i);
        }
        printf("\n");
    }*/
    //Alphabet Mix triangle
    // Print the given Pattern
   /* int m=4; //rows
    int n=4; // column
    for(int i=1;i<=5;i++){ //rows
        for(int j=1;j<=i;j++){ //column
            if (i%2!=0){
                printf("%d ",j);
            }
            else{
                printf("%c ",j+64);
            }
        }
        printf("\n");
    }*/
    // Print the given Pattern
    //Star triangle ulta
   /* int m=4; //rows
    int n=4; // column
    for(int i=1;i<=4;i++){ //rows
        for(int j=4;j>=i;j--){ //column
            printf("*");
        }
        printf("\n");
    }*/
    //Print the pattern
  /*   int m=4; //rows
    int n=4; // column
    for(int i=1;i<=4;i++){ //rows
        for(int j=1;j<=n+1-i;j++){ //column
            printf("%d ",j);
        }
        printf("\n");
    }*/
        //Print the pattern
   /*  int m=4; //rows
    int n=4; // column
    for(int i=1;i<=4;i++){ //rows
        for(int j=1;j<=n+1-i;j++){ //column
            printf("%c ",j+64);
        }
        printf("\n");
    }*/
         //Print the pattern
    /* int m=4; //rows
    int n=4; // column
    for(int i=1;i<=4;i++){ //rows
        for(int j=1;j<=n+1-i;j++){ //column
            printf("%c ",i+64);
        }
        printf("\n");
    }*/
    //Odd Number Square
    /*  int m=4; //rows
    int n=4; // column
   
    for(int i=1;i<=4;i++){ //rows
        int a=1;
        for(int j=1;j<=4;j++){ //column
        printf("%d ",a);
        a=a+2;
        }
        printf("\n");
    }*/
    //Printing the Given Pattern
    //H.W
    /*  int m=4; //rows
    int n=4; // column
   
    for(int i=1;i<=4;i++){ //rows
        int a=1;
        for(int j=1;j<=4;j++){ //column
        printf("%d ",a);
        a=a+2;
        }
        printf("\n");
    }*/
     //Print the pattern 
     //Home work
      /*int m=4; //rows
    int n=4; // column
   
    for(int i=1;i<=4;i++){ //rows
        int a=1;
        for(int j=1;j<=n+1-i;j++){ //column
        printf("%d ",a);
        a=a+2;
        }
        printf("\n");
    }*/
     //Even Number Square
     //Print the pattern
     /* int m=4; //rows
    int n=4; // column
   
    for(int i=1;i<=4;i++){ //rows
        int a=2;
        for(int j=1;j<=4;j++){ //column
        printf("%d ",a);
        a=a+2;
        }
        printf("\n");
    }*/
     //Even number triangle+

    /*int m=4; //rows
    int n=4; // column
   
    for(int i=1;i<=3;i++){ //rows
        int a=2;
        for(int j=1;j<=i;j++){ //column
        printf("%d ",a);
        a=a+2;
        }
        printf("\n");
    }*/
     //Even number triangle reverse
    /*int m=3; //rows
    int n=3; // column
   
    for(int i=1;i<=3;i++){ //rows
        int a=2;
        for(int j=1;j<=n+1-i;j++){ //column
        printf("%d ",a);
        a=a+2;
        }
        printf("\n");
    }*/
    //Floyds triangle
    /*int m=3; //rows
    int n=3; // column
    int a=1;
    for(int i=1;i<=4;i++){ //rows
        for(int j=1;j<=i;j++){ //column
        printf("%d ",a);
        a=a+1;
        }
        printf("\n");*/
    //0 and 1 traingle
    int m=3; //rows
    int n=3; // column
    int a=1;
    for(int i=1;i<=4;i++){ //rows
        for(int j=1;j<=i;j++){
             if((i+j)%2==0){
                printf("%d ",1);
             }
             else
             printf("%d ",0);
        }
        printf("\n");
    }

    

















}
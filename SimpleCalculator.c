#include<stdio.h>
#include<math.h>

int has_error = 0;

void PrintMenu(){
   
   printf("\n\n--------Select the one of following operations------\n\n");
 
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Divide\n");
    printf("4. Multiply\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    }

int Divide(int x , int y){

 int result = 0;

 if(y <= 0 ){
    has_error = 1;
 }else{
    result = x / y;
  }

  return result;
 
}

int Modulus(int x , int y){

  int result = 0;

  if(y <= 0){
    has_error = 1;
  }else{
    result = x % y;
  }

  return result;
 
}

long power (long x , long y){

if( y == 1){
  return x;
 }

 if( y <= 0){
  return 0;
}

int result = 1;

 for(int i = 0; i < y; i++){

  result *= x;
 }

 return result;
 
}

int main(){ 

    int Method = 0;
    long Num1 , Num2;
    long result = 0;
    int has_result = 0;
    
    char choice = 'n';
    
    printf("\n!---------Simple Calculator---------!\n");

     while(1) { 

        if(has_result == 0 || choice == 'n' ){
        PrintMenu();

        printf("\n\nEnter Number of the operation : ");
        scanf("%d",&Method);             
        getchar();
     }      
        if(has_error == 0 && has_result == 1 && choice == 'y'){

        PrintMenu();

            printf("\nPrevious result of operation : %ld",result);
            
            printf("\n\nEnter Number of the operation : ");
            scanf("%d",&Method);
            getchar();
            
            printf("Enter number : ");
            scanf("%ld",&Num2);
            getchar();

            Num1 = result;
    
        }else if(has_error == 1 || (choice == 'y' && has_result == 1)){
            
           printf("Enter number : ");
            scanf("%ld",&Num2);
            getchar();

            Num1 = result;

            has_error = 0;
            
        }else{
            printf("\nEnter first number : ");
        scanf("%ld",&Num1);
        getchar();

        printf("Enter second number : ");
        scanf("%ld",&Num2);
        getchar();
        }
   
      //  if(has_result == 0 || choice == 'n') {
      //      printf("\nEnter first number : ");
      //   scanf("%ld",&Num1);
      //   getchar();

      //   printf("Enter second number : ");
      //   scanf("%ld",&Num2);
      //   getchar();
      //  }

       if(Method < 1 || Method > 6){
       printf("\n------Exiting Calculator------\n");
        break;
       }
       
       switch(Method){

        case 1://Add
          result = Num1 + Num2;
          break;

        case 2://subtract
         result = Num1 - Num2;
          break;

        case 3://Divide
         result = Divide(Num1,Num2);
          break;

        case 4://Multiply
         result = Num1 * Num2;
          break;

        case 5://Modulus
         result = Modulus(Num1 , Num2);
          break;

        case 6://Power
         result = power(Num1 , Num2);
         break;

       }

       if(has_error != 1){

       printf("\t\n--------->Result<---------\n%ld",result);
       
       has_result = 1;
       has_error = 0;

       printf("\n\nDo you want to continue operations on result(enter 'y' for yes or 'n' for no) : ");
        scanf("%c",&choice);
        getchar();
        
        if(has_result == 1 && choice != 'y' && choice !='n'){// valid choice input
        
        while(1){

        printf("invalid response, please enter valid response : ");
        scanf("%c",&choice);
        getchar();

        if(choice == 'y' || choice == 'n'){
            break;
        }
         choice = ' ';
        }
       }//validating choice input
       }else{

        printf("\nInvalid input for this operation, please try again with valid input\n");
       
       }
     }

 printf("\n \n");

    return 0;
  }


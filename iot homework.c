#include<stdio.h>
#include<math.h>
#define PI 3.14159

float TriangleArea(float b, float h){
    float answer;
    answer = 0.5*(b*h);
    printf("%f\n",answer);
    return answer;}


float SquareArea(float l, float L){
    float answer;
    answer = l*L;
    printf("%f\n",answer);
    return answer;}


float CircleArea(float r){
    float answer;
    answer = PI*pow(r,2);
    printf("%f\n",answer);
    return answer;}


int main(){
    float b,h,l,L,r,answer;
    int choice;
    char input;
    
     do
     {
        printf("\n\t*Welcome to Mouk's homework:)*\n");
        printf("Press 1 to choose Triangle\n");
        printf("Press 2 to choose Square\n");
        printf("Press 3 to choose Circle\n");
        printf("Press 4 to exit\n");

        printf("please choose\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Triangle Area");
            printf("enter the value of b :");
            scanf("%f",&b);
            printf("enter the value of h :");
            scanf("%f",&h);
            answer = TriangleArea(b,h);
            printf("the value of triangle area is : %f\n",answer);

            break;

        case 2:
            printf("Square Area");
            printf("enter the value of l :");
            scanf("%f",&l);
            printf("enter the value of L :");
            scanf("%f",&L);
            answer = SquareArea(l,L);
            printf("the value of square area is : %f\n",answer);

            break;

        case 3:
            printf("Circle Area");
            printf("enter the value of r :");
            scanf("%f",&r);
            answer = CircleArea(r);
            printf("the value of circle area is : %f\n",answer);

            break;

        case 4:
            printf("Do you want to exit?");
            scanf("  %c",&input);
            if(input == 'n'){
                printf("Continuing...\n");
            }else if(input == 'y'){
                printf("Exitting......\n");
                choice = 5;
            }else{
                printf("Invalid input, Continuing...");
            }
            break;
        
        default:
            printf("Invalid choice\n");

            break;
        }
        
        
    }while (choice != 5);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int tot1,tot2,tot3,tot4,obt1,obt2,obt3,obt4;
    float per1,per2,per3,per4,overall;

    printf("Aptitude\nTotal\n");
    scanf("%d",&tot1);
    printf("Obtained\n");
    scanf("%d",&obt1);
    printf("Logical Reasoning\nTotal\n");
    scanf("%d",&tot2);
    printf("Obtained\n");
    scanf("%d",&obt2);
    printf("Debugging\nTotal\n");
    scanf("%d",&tot3);
    printf("Obtained\n");
    scanf("%d",&obt3);
    printf("Programming\nTotal\n");
    scanf("%d",&tot4);
    printf(" Obtained\n");
    scanf("%d",&obt4);

    per1=(int)obt1/(float)tot1*100;
    per2=(int)obt2/(float)tot2*100;
    per3=(int)obt3/(float)tot3*100;
    per4=(int)obt4/(float)tot4*100;
    overall=(per1+per2+per3+per4)/4;

    printf("Aptitude is %.2f",per1);
     printf("\nLogical Reasoning is %.2f",per2);
      printf("\nDebugging is %.2f",per3);
       printf("\nProgramming is %.2f",per4);
        printf("\nOverall is %.2f",overall);
return 0;
}

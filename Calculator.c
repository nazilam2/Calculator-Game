//program description:Mathematical quiz with 5 maximum qestions.
//Author:Nazila M
//1 is used to select the number of qs,2 is used to start the quiz ,3 is used to see your results and 4 is used to exit program.
# include <stdio.h>
int main()
{
    //start of menue
    int i =0;
    int ans1,ans2,ans3,ans4,ans5;
    int correct=0;
    int wrong=0;
    int option=0;
    int question=0;
    int round=0;
    

    do
    {
        printf("\nHello welcome to the1 mathmatical quiz game\n");
        printf("\npress 1 Enter the number of questions to be asked for this round of the quiz(maximum of 5 questions allowed)\n");
        printf("\npress 2 Start and play quiz\n");
        printf("\npress 3 Display the number of questions that were answered (i) correctly and (ii)incorrectly for this round\n");
        printf("\npress 4 Exit Program\n");
        scanf("%d",&option); //waits for an input for 1, 2, 3 or 4

        switch (option)
        {
            case 1:
            {
            printf("\nHow many questions you want to be asked?\n\n");
            scanf("%d",&round);

            printf("\n press 2 to start and play quiz\n\n"); 
            //end of menue
            break;
        
            }//end of case 1
            case 2:
            {
              correct =0;
              wrong=0;
                
                if(round==1)
                {
                    correct =0;
                    wrong=0;
                    printf("Q.1: 4 + 6\n\n");
                    scanf("%d",&ans1);
                    
                    if (ans1 ==10)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;  
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 10\n\n");
                        wrong = wrong +1;
                    }
                } //end of round 1 and q1
                 
                if(round==2)
                {
                    correct =0;
                    wrong=0;
                    printf("Q.1: 4 + 6\n\n");
                    scanf("%d",&ans1);
                    
                    if(ans1 ==10)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;   
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 10\n\n");
                        wrong = wrong +1;  
                    }
                    

                    printf("Q.2: 5 * 5\n\n");
                    scanf("%d",&ans2);
                    
                    if(ans2 ==25)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1; 
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 25\n\n");
                        wrong = wrong + 1;
                    }   
                }  //end of round 2 and q2
                     
                if(round==3)
                {  
                    correct =0;
                    wrong=0;
                    printf("Q.1: 4 + 6\n\n");
                    scanf("%d",&ans1);
                    
                    if (ans1 ==10)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;   
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 10\n\n");
                        wrong = wrong + 1;
                    }
                    

                    printf("Q.2: 5 * 5\n\n");
                    scanf("%d",&ans2);
                    
                    if(ans2 ==25)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1; 
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 25\n\n"); 
                        wrong = wrong + 1;   
                         
                    }   
                    
                   
                    printf("Q.3: 6/2 \n\n");
                    scanf("%d",&ans3);

                    if(ans3==3)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1; 
                    }
                    else
                    {
                        printf("your answer is wrong:the correct answer is 3\n\n");
                        wrong = wrong + 1;   
                    }
                }//end of round 3 and q3

                if(round==4)
                {
                    correct =0;
                    wrong=0;
                    printf("Q.1: 4 + 6\n\n");
                    scanf("%d",&ans1);

                    if (ans1 ==10)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;   
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 10\n\n");
                        wrong = wrong + 1;
                    }


                    printf("Q.2: 5 * 5\n\n");
                    scanf("%d",&ans2);
                    
                    if(ans2 ==25)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1; 
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 25\n\n"); 
                        wrong = wrong +1;
                    }   
                    
                  
                    printf("Q.3: 6/2 \n\n");
                    scanf("%d",&ans3);

                    if(ans3==3)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1; 
                    }
                    else
                    {
                        printf("your answer is wrong:the correct answer is 3\n\n");
                        wrong = wrong + 1;

                    }


                    printf("Q.4: 20-6\n\n");
                    scanf("%d",&ans4);
                   
                    if(ans4 ==14)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;
                    }
                    else
                    {
                        printf("your answer is wrong:correct answer is 14\n\n");
                        wrong = wrong + 1;
                    }
                }//end of round 4 and q4

                if(round ==5)
                {
                    correct = 0;
                    wrong = 0;
                    printf("Q.1: 4 + 6\n\n");
                    scanf("%d",&ans1);
                    
                    if (ans1 ==10)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;  
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 10\n\n");
                        wrong = wrong + 1;
                    }
 

                    printf("Q.2: 5 * 5\n\n");
                    scanf("%d",&ans2);
                    
                    if(ans2 ==25)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;
                    }
                    else
                    {
                        printf("your answer is wrong: the correct answer is 25\n\n"); 
                         wrong = wrong + 1;
                    }


                    printf("Q.3: 6/2 \n\n");
                    scanf("%d",&ans3);   
                    
                    if(ans3==3)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;
                    }
                    else
                    {
                        printf("your answer is wrong:the correct answer is 3\n\n");
                         wrong = wrong + 1;
                    }//end of q 3


                    printf("Q.4: 20-6\n\n");
                    scanf("%d",&ans4);
                    
                    if(ans4 ==14)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;
                    }
                    else
                    {
                        printf("your answer is wrong:correct answer is 14\n\n");
                        wrong = wrong + 1;
                    }//end of q 4


                    printf("Q.5:50/10\n\n");
                    scanf("%d",&ans5);
                    

                    if(ans5 == 5)
                    {
                        printf("you got the correct answer!\n\n");
                        correct=correct+1;
                    }
                    else
                    {
                        printf("your answer is wrong:correct answer is 5\n\n");
                        wrong = wrong + 1;
                    }   
                } //end of round 5 and q5
                    
    
                printf("\n press 3 to see your results\n\n");
                break;
                
            }//end of case 2

            case 3:
            {
            
                printf("\nyou have got %d wrong\n", wrong);
                printf("\nyou have got %d correct\n", correct);

                break;
            }//end of case 3

            case 4:
            {
                printf("\nthe quiz has ended now");
                // number 4 is used to end the quiz

                break;
            }//end of case 4

            default:
            {
                printf("\nInvalid Entry,select from 1-4\n\n");
            }

        }//end of switch

        
    } //end of the do loop
    while (option !=4);

      
    return 0;
}//end of the program
#include <stdio.h>

int main() {
    printf("\t\t\t\t----------------------------------------------\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t|           WELCOME TO NCIT QUIZ             |\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t----------------------------------------------\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                                      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|      CREATED BY: BIRAT ARYAL         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                  LAXMAN KHATRI       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("WE HAVE ALTOGETHER 5 CATEGORIES.");
    printf("\n");
    printf("\n");
   printf("\t\t----------------------------------------------\n");
printf("\t\t|                                            |\n");
printf("\t\t|            1. History                      |\n");
printf("\t\t|                                            |\n");
printf("\t\t|            2. Geography                    |\n");
printf("\t\t|                                            |\n");
printf("\t\t|            3. Literature                   |\n");
printf("\t\t|                                            |\n");
printf("\t\t|            4. Maths and Science            |\n");
printf("\t\t|                                            |\n");
printf("\t\t|            5.  sports                      |\n");
printf("\t\t|                                            |\n");
printf("\t\t----------------------------------------------\n");
printf("\n");
top:
printf("CHOOSE YOUR CATEGORY(1-5)\n");
int a,score=0,wrong=0;
scanf("%d",&a);
 switch (a) {
        case 1:
            printf("\n\tYou have selected History.\n");
  printf("\n\tQuestion 1: Who was the first president of the United States?\n");
            printf("\n\tA. Thomas Jefferson\n\tB. George Washington\n\tC. John Adams\n\tD. Benjamin Franklin\n");
            char answer1;
            scanf(" %c", &answer1);
            if (answer1 == 'B' || answer1 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 2: who is cosidered as the first king of nepal?\n");
            printf("\n\tA. Birndra\n\tB. Ram Shah\n\tC. Bhuktaman\n\tD. Jung Bhadur Rana\n");
            char answer2;
            scanf(" %c", &answer2);
            if (answer2 == 'C' || answer2 == 'c') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is c.\n");
                wrong++;
            }
           
             printf("\n\tQuestion 3: Who was the first authentic king of nepal?\n");
            printf("\n\tA. Umrab\n\tB.Mandev\n\tC. Dhurbha\n\tD. Trichandra\n");
            char answer3;
            scanf(" %c", &answer3);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 4: When was the bir  hospital build?\n");
            printf("\n\tA. B.S 1997\n\tB.B.S 1999\n\tC. B.S 2010\n\tD. B.S 1980\n");
            char answer4;
            scanf(" %c", &answer4);
            if (answer4 == 'A' || answer4 == 'a') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is A.\n");
                 wrong++;
            }
                         printf("\n\tQuestion 5: Who is the  first nepali  to visit the uk?\n");
            printf("\n\tA. Trichadra\n\tB.Jung Bahadur Rana\n\tC. Bir Shamsher\n\tD. King Mahendra\n");
            char answer5;
            scanf(" %c", &answer5);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
            printf("|---------------------------------|\n");
            printf("|Your total score is: %d\t          |\n", score);
            printf("|---------------------------------|\n");
            printf("|Your total wrong is: %d\t          |\n", wrong); 
            printf("|---------------------------------|");
            break;
            
            
            
            
            
            case 2:
            printf("\n\tYou have selected Geography.\n");
  printf("\n\tQuestion 1: which is the tallest mountain in the world?\n");
            printf("\n\tA. annapurna\n\tB. mount everest\n\tC. makalu\n\tD. himchuli\n");
            
            scanf(" %c", &answer1);
            if (answer1 == 'B' || answer1 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 2: which is the latittude that runs through the center of the world ?\n");
            printf("\n\tA. center\n\tB.  west\n\tC. equator\n\tD. east\n");
           
            scanf(" %c", &answer2);
            if (answer2 == 'C' || answer2 == 'c') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is c.\n");
                 wrong++;
            }
           
             printf("\n\tQuestion 3: which is the longest river in the world?\n");
            printf("\n\tA. karnali\n\tB.the nile,Africa\n\tC. amazon\n\tD. koshi\n");
           
            scanf(" %c", &answer3);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 4: which is the largest island in the world?\n");
            printf("\n\tA. greenland\n\tB.iceland\n\tC. sahara\n\tD. poland\n");
           
            scanf(" %c", &answer4);
            if (answer4 == 'A' || answer4 == 'a') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is A.\n");
                 wrong++;
            }
                         printf("\n\tQuestion 5: which country produces largest almunium in the world?\n");
            printf("\n\tA.india\n\tB.jamaica\n\tC. uk\n\tD. russia\n");
            
            scanf(" %c", &answer5);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
            printf("|---------------------------------|\n");
            printf("|Your total score is: %d\t          |\n", score);
            printf("|---------------------------------|\n");
            printf("|Your total wrong is: %d\t          |\n", wrong); 
            printf("|---------------------------------|");
            break;
            
            
            
            
            case 3:
            printf("\n\tYou have selected Literature .\n");
  printf("\n\tQuestion 1: Mr.Freeze is the arch-enemy of a famous superhero of a comic book. what is the name of that superhero?\n");
            printf("\n\tA. interstailer\n\tB.  Batman\n\tC. avenger\n\tD. avatar\n");
            
            scanf(" %c", &answer1);
            if (answer1 == 'B' || answer1 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 2: in which book of the holy bible did the death of moses take place ?\n");
            printf("\n\tA. ved\n\tB.  mahabharat\n\tC. Deuteronomy\n\tD. bhagwatgeeta\n");
           
            scanf(" %c", &answer2);
            if (answer2 == 'C' || answer2 == 'c') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is c.\n");
                 wrong++;
            }
           
             printf("\n\tQuestion 3: who is the author of the classic masterpieces 'annna karenina'?\n");
            printf("\n\tA. R.D Laing\n\tB. Leo Tolstony\n\tC. Ptolemy\n\tD. Jane Austen\n");
           
            scanf(" %c", &answer3);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 4:name the female novelist who has authored 'sense and sensibility'?\n");
            printf("\n\tA. jane austen\n\tB.ptolemy\n\tC. leo tolstoy\n\tD. billy crystal\n");
           
            scanf(" %c", &answer4);
            if (answer4 == 'A' || answer4 == 'a') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is A.\n");
                 wrong++;
            }
                         printf("\n\tQuestion 5: who is the author of'roots' that inspired a Tv blockbuster?\n");
            printf("\n\tA.jane austen\n\tB.Alex Haley\n\tC. Exorcist\n\tD. billy crystal\n");
            
            scanf(" %c", &answer5);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
            printf("|---------------------------------|\n");
            printf("|Your total score is: %d\t          |\n", score);
            printf("|---------------------------------|\n");
            printf("|Your total wrong is: %d\t          |\n", wrong); 
            printf("|---------------------------------|");
    
            break;
            
            
            
             
            case 4:
            printf("\n\tYou have selected maths and science.\n");
  printf("\n\tQuestion 1: log1 is equal to?\n");
            printf("\n\tA. 1\n\tB.  0\n\tC. infinity\n\tD. -1\n");
            
            scanf(" %c", &answer1);
            if (answer1 == 'B' || answer1 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 2: father of science ?\n");
            printf("\n\tA. Nikola Tesla\n\tB.  Netwon\n\tC. Albert Enstein\n\tD. jon ven\n");
           
            scanf(" %c", &answer2);
            if (answer2 == 'C' || answer2 == 'c') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is c.\n");
                 wrong++;
            }
           
             printf("\n\tQuestion 3: 2+2 is equal to?\n");
            printf("\n\tA. 5\n\tB.  4\n\tC. 5\n\tD.  6\n");
           
            scanf(" %c", &answer3);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
             printf("\n\tQuestion 4:3+3?\n");
            printf("\n\tA. 6\n\tB.\n\tC. 2\n\tD. 3\n");
           
            scanf(" %c", &answer4);
            if (answer4 == 'A' || answer4 == 'a') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is A.\n");
                 wrong++;
            }
                         printf("\n\tQuestion 5:unit of resistor?\n");
            printf("\n\tA.delta\n\tB. ohm\n\tC. gamma\n\tD.  sec\n");
            
            scanf(" %c", &answer5);
            if (answer3 == 'B' || answer3 == 'b') {
                printf("\n\tCorrect answer! You get 1 point.\n");
                score++;
            } else {
                printf("\n\tWrong answer! The correct answer is B.\n");
                 wrong++;
            }
            printf("|---------------------------------|\n");
            printf("|Your total score is: %d\t          |\n", score);
            printf("|---------------------------------|\n");
            printf("|Your total wrong is: %d\t          |\n", wrong); 
            printf("|---------------------------------|");
    
            break;
            
 }
      
    return 0;
}


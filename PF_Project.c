
#include <stdio.h>
int main() {
    printf("Welcome !");
    char name[20];
    int score = 0;
    float negative_Marking= 0  ;
    float total_marks ;
    char answer;
    char grade ;
    printf("\nEnter Your Name :");
    scanf("%s", name);
    printf("Welcome %s!", name);
    printf("\n1. Calculus\n2. Programming Fundamental\n3. Ideology Of Pakistan");
    int n;
    printf("\nEnter Your Choice :");
    scanf("%d", &n);
    switch(n) {
        case 1: {
            char calculus[5][100] = {
                "What is Derivative of x Square?",
                "What is Integration?",
                "What is Limit?",
                "If f(x) = 2, then x = 3 is ....?",
                "Derivative of Sinx is ...?",
            };
            char calculusOptions[5][4][100] = {
                  {"x", "2x", "x*x", "2"},
                  {"Inverse","Straight","None","Both"},
                  {"Approx","Exact","Error","None"},
                  {"0","1","3","2"},
                  {"Cosx","Tanx","Secx","-Cosx"},
                  };
            char C_Key[5]={'B','A','A','D','A'};
            for(int i = 0; i < 5; i++) {
            printf("\nQ%d. %s", i+1, calculus[i]);
            for(int j = 0; j < 4; j++) {
            printf("\n%c. %s", 'A'+j, calculusOptions[i][j]);
            }
              printf("\nEnter Answer: ");
              scanf(" %c", &answer);

              if(answer == C_Key[i]) {
              printf("Correct!");
              score++;
              }

             else {
               printf("Wrong!");
              negative_Marking = negative_Marking - 0.25;
            }
        }
        total_marks = score + negative_Marking;
            break;
        }
        case 2: {
            char programming_q[5][100] = {
                "#include refers to ....?",
                "main() we call as ...?",
                "For repetition we use ...",
                "Which method is convenient to check conditions?",
                "Break keyword is used for ....?",
            };
            char programming_options[5][4][100] = {
                  {"Preprocessor Directive", "Loop", "Function", "Variable"},
                  {"Main Function", "Header File", "Loop", "Operator"},
                  {"Loops", "Arrays", "Pointers", "Conditions"},
                  {"Switch Statement", "Printf", "Scanf", "Return"},
                  {"Terminate Loop", "Start Loop", "Declare Variable", "Print Output"},

                  };
            char P_key[5]={'A','A','A','A','A'};
            for(int i = 0; i < 5; i++) {
            printf("\nQ%d. %s", i+1, programming_q[i]);
             for(int j = 0; j < 4; j++) {
             printf("\n%c. %s", 'A'+j, programming_options[i][j]);
            }
              printf("\nEnter Answer: ");
              scanf(" %c", &answer);
              if(answer == P_key[i]) {
              printf("Correct!");
              score++;
              }

             else {
               printf("Wrong!");
               negative_Marking = negative_Marking - 0.25;
            }
        }
        total_marks = score +negative_Marking;
                break;
        }

        case 3: {
            char Ideology_pakistan[5][100] = {
                "In which year did Minto-Morley Reforms occur?",
                "Who rejected Nehru Report?",
                "Which person approved that India and Pakistan are separate?",
                "President of Pakistan ...?",
                "Prime Minister of Pakistan ...?"
            };
            char Ideology_Options[5][4][100] = {
                {"1909", "1919", "1935", "1947"},
                {"Allama Iqbal", "Muhammad Ali Jinnah", "Mahatma Gandhi", "Liaquat Ali Khan"},
                {"Lord Mountbatten", "Lord Curzon", "Lord Wavell", "Lord Minto"},
                {"Asif Ali Zardari", "Arif Alvi", "Mamnoon Hussain", "Pervez Musharraf"},
                {"Imran Khan", "Liaquat Ali Khan", "Nawaz Sharif", "Yousaf Raza Gillani"},
            };
            char I_Key[5]={'A','B','A','A','B'};
            for(int i = 0; i < 5; i++) {

            printf("\nQ%d. %s", i+1, Ideology_pakistan[i]);

             for(int j = 0; j < 4; j++) {
             printf("\n%c. %s", 'A'+j, Ideology_Options[i][j]);
            }

              printf("\nEnter Answer: ");
              scanf(" %c", &answer);

              if(answer == I_Key[i]) {
              printf("Correct!");
              score++;
              }

             else {
               printf("Wrong!");
               negative_Marking = negative_Marking - 0.25;
            }
        }
        total_marks = score + negative_Marking;
            break;
        }
        default:
            printf("Invalid Choice!");

    }
    if(total_marks >= 4 && total_marks <= 5 ){
        grade = 'A';
    }
    else if(total_marks >= 3){
        grade = 'B';
    }
    else if(total_marks >= 2){
        grade = 'C';
    }
    else{
        grade = 'F';
    }

    printf("\n(Result Is Here )");
    printf("\nName : %s",name);
    printf("\nNegative Marking : %.2f",negative_Marking);
    printf("\nPositive Score : %d",score);
    printf("\nTotal : %.2f",total_marks);
    printf("\nGrade : %c",grade);
    return 0;
}









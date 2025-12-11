#include"election.h"

int main(){
    while(1){
         printf("Voting System");
		char input;
        scanf(" %c",&input);

        switch(input){
            case '1':
                studentPanel();
                break;
            case '2':
                adminPanel();
                break;
            case '3':
                return 0;
            default:
                printf("\nInvalid option");
                getch();
        }
    }
    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

#define MAX_LENGTH 50

// Feature function 
void main_menu(void);
void loading_system(void);
void multiplayer();
void player_1();
void printHangman(int wrong);
void singleplayer();
void scoreboard();
void scoreboard_singleplayer();
void scoreboard_multiplayer();
void query_kata(void);


// User Interface function
void orang(void);
void opsi (void);
void player1_logo(void);
void mainmenu_frame(void);
void author_logo(void);
void frame(void);

void game_over (int score, int correct, int wrong);
void player2_logo(void);
void singleplayer_logo(void);
char* getCurrentDate();
char* getCurrentTime();


// String Modification Function
void gotoxy(int x, int y){ printf("\033[%d;%dH", y, x); }
void clearScreen() { system("cls"); }
void green(void){ printf("\033[0;32m"); }
void green_bold(){ printf("\033[1;32m"); }
void reset(void){ printf("\033[0m");} 
void yellow(void){printf("\033[1;33m");}
void red(void){printf("\033[1;41m");getchar();}
void bold(void){ printf("\033[1m");} 

// Time Function

char* getCurrentDate() {
    static char dateString[11];
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);                  // Mendapatkan waktu saat ini
    localTime = localtime(&currentTime); // Konversi waktu saat ini ke struct tm

    strftime(dateString, sizeof(dateString), "%d/%m/%Y", localTime); // Memformat waktu saat ini ke dalam string

    return dateString;
}
char* getCurrentTime() {
    static char timeString[9];
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);                  // Mendapatkan waktu saat ini
    localTime = localtime(&currentTime); // Konversi waktu saat ini ke struct tm

    strftime(timeString, sizeof(timeString), "%X", localTime); // Memformat waktu saat ini ke dalam string

    return timeString;
}

// Art Div
void gantung (int salah) {
    if (salah == 0) {

            bold();
            gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      \n");
            gotoxy(9,8);
            printf("| |/ /       \n");
            gotoxy(9,9);
            printf("| | /        \n");
            gotoxy(9,10);
            printf("| |/         \n");
            gotoxy(9,11);
            printf("| |          \n");
            gotoxy(9,12);
            printf("| |          \n");
            gotoxy(9,13);
            printf("| |          \n");
            gotoxy(9,14);
            printf("| |         \n");
            gotoxy(9,15);
            printf("| |       \n");
            gotoxy(9,16);
            printf("| |      \n");
            gotoxy(9,17);
            printf("| |      \n");
            gotoxy(9,18);
            printf("| |         \n");
            gotoxy(9,19);
            printf("| |           \n");
            gotoxy(9,20);
            printf("| |           \n");
            gotoxy(9,21);
            printf("| |          \n");
            gotoxy(9,22);
            printf("| |         \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n"); 
            
            reset();   
    } else if (salah == 1) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        \n");
            gotoxy(9,15);
            printf("| |        \n");
            gotoxy(9,16);
            printf("| |      \n");
            gotoxy(9,17);
            printf("| |      \n");
            gotoxy(9,18);
            printf("| |          \n");
            gotoxy(9,19);
            printf("| |          \n");
            gotoxy(9,20);
            printf("| |          \n");
            gotoxy(9,21);
            printf("| |          \n");
            gotoxy(9,22);
            printf("| |         \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");
            reset();
    } else if (salah == 2) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          \n");
            gotoxy(9,19);
            printf("| |          \n");
            gotoxy(9,20);
            printf("| |          \n");
            gotoxy(9,21);
            printf("| |          \n");
            gotoxy(9,22);
            printf("| |          \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");
            reset();
    } else if (salah == 3) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          ||'|| \n");
            gotoxy(9,19);
            printf("| |          || || \n");
            gotoxy(9,20);
            printf("| |          || || \n");
            gotoxy(9,21);
            printf("| |          || || \n");
            gotoxy(9,22);
            printf("| |         \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");
            reset();
    } else if (salah == 4) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          ||'|| \n");
            gotoxy(9,19);
            printf("| |          || || \n");
            gotoxy(9,20);
            printf("| |          || || \n");
            gotoxy(9,21);
            printf("| |          || || \n");
            gotoxy(9,22);
            printf("| |         / | | \\ \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");

            reset();
    } else if (salah == 5) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          ||'|| \n");
            gotoxy(9,19);
            printf("| |          || || \n");
            gotoxy(9,20);
            printf("| |          || || \n");
            gotoxy(9,21);
            printf("| |          || || \n");
            gotoxy(9,22);
            printf("| |         / | | \\ \n");
            gotoxy(9,23);
             printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");

            yellow();
            gotoxy(50,25);
            printf("Hangged Man : !!! PLEASE MATE HELP ME !!!");
            

            reset();
    }
}
void printHangman(int wrong) {
    if (wrong == 0) {

            bold();
            gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      \n");
            gotoxy(9,8);
            printf("| |/ /       \n");
            gotoxy(9,9);
            printf("| | /        \n");
            gotoxy(9,10);
            printf("| |/         \n");
            gotoxy(9,11);
            printf("| |          \n");
            gotoxy(9,12);
            printf("| |          \n");
            gotoxy(9,13);
            printf("| |          \n");
            gotoxy(9,14);
            printf("| |         \n");
            gotoxy(9,15);
            printf("| |       \n");
            gotoxy(9,16);
            printf("| |      \n");
            gotoxy(9,17);
            printf("| |      \n");
            gotoxy(9,18);
            printf("| |         \n");
            gotoxy(9,19);
            printf("| |           \n");
            gotoxy(9,20);
            printf("| |           \n");
            gotoxy(9,21);
            printf("| |          \n");
            gotoxy(9,22);
            printf("| |         \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n"); 
            
            reset();   
    } else if (wrong == 1) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        \n");
            gotoxy(9,15);
            printf("| |        \n");
            gotoxy(9,16);
            printf("| |      \n");
            gotoxy(9,17);
            printf("| |      \n");
            gotoxy(9,18);
            printf("| |          \n");
            gotoxy(9,19);
            printf("| |          \n");
            gotoxy(9,20);
            printf("| |          \n");
            gotoxy(9,21);
            printf("| |          \n");
            gotoxy(9,22);
            printf("| |         \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");
            reset();
    } else if (wrong == 2) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          \n");
            gotoxy(9,19);
            printf("| |          \n");
            gotoxy(9,20);
            printf("| |          \n");
            gotoxy(9,21);
            printf("| |          \n");
            gotoxy(9,22);
            printf("| |          \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");
            reset();
    } else if (wrong == 3) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          ||'|| \n");
            gotoxy(9,19);
            printf("| |          || || \n");
            gotoxy(9,20);
            printf("| |          || || \n");
            gotoxy(9,21);
            printf("| |          || || \n");
            gotoxy(9,22);
            printf("| |         \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");
            reset();
    } else if (wrong == 4) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          ||'|| \n");
            gotoxy(9,19);
            printf("| |          || || \n");
            gotoxy(9,20);
            printf("| |          || || \n");
            gotoxy(9,21);
            printf("| |          || || \n");
            gotoxy(9,22);
            printf("| |         / | | \\ \n");
            gotoxy(9,23);
            printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");

            reset();
    } else if (wrong == 5) {
        bold();
        gotoxy(9,5);
            printf(" ___________.._______\n");
            gotoxy(9,6);
            printf("| .__________))______|\n");
            gotoxy(9,7);
            printf("| | / /      || \n");
            gotoxy(9,8);
            printf("| |/ /       || \n");
            gotoxy(9,9);
            printf("| | /        ||.-''.\n");
            gotoxy(9,10);
            printf("| |/         |/  _  \\ \n");
            gotoxy(9,11);
            printf("| |          ||  `/,| \n");
            gotoxy(9,12);
            printf("| |          (\\`_.' \n");
            gotoxy(9,13);
            printf("| |         .-`--'. \n");
            gotoxy(9,14);
            printf("| |        /Y . . Y\\ \n");
            gotoxy(9,15);
            printf("| |       // |   | \\ \\ \n");
            gotoxy(9,16);
            printf("| |      //  | . |  \\ \n");
            gotoxy(9,17);
            printf("| |     ')   |   |   (` \n");
            gotoxy(9,18);
            printf("| |          ||'|| \n");
            gotoxy(9,19);
            printf("| |          || || \n");
            gotoxy(9,20);
            printf("| |          || || \n");
            gotoxy(9,21);
            printf("| |          || || \n");
            gotoxy(9,22);
            printf("| |         / | | \\ \n");
            gotoxy(9,23);
             printf("''''''''''''''''''''''''''| \n");
            gotoxy(9,24);
            printf("|'|'''''''''''''''''''''|'|\n");
            gotoxy(9,25);
            printf("| |                     | |\n");
            gotoxy(9,26);
            printf(": :                     : : \n");
            gotoxy(9,27);
            printf(". .                     . .\n");

            yellow();
            gotoxy(50,25);
            printf("Hangged Man : !!! PLEASE MATE HELP ME !!!");
            

            reset();
    }
}
void loading_system(void){
    int i;
    char ch;
    system("cls");
    printf(
        "PLEASE WAIT....\n\nTry To Entering Program....");
    for (i = 0; i < 200000000; i++) {
        i++;
        i--;
    }
 
    gotoxy(30, 10);
    printf("Program Enter Succsessfuly....");
    gotoxy(0, 20);
 
    printf("Press Enter to Next..");
    getch();

    sleep(0.5);

    reset();

    author_logo();


}

void author_logo(void){
   
    clearScreen();
    frame();
    
    gotoxy(40,12);
    green();
    printf("   _____ _  _     ____ _  _     _      _____    ______ _____ \n"); 
    gotoxy(40,13);
    printf("  / ____| || |   / /_ | || |   | |    |  __ \\  |____  | ____| \n");
    gotoxy(40,14);
    printf(" | |  __| || |_ / / | | || |_  | |    | |  | |     / /| |__   \n");
    gotoxy(40,15);
    printf(" | | |_ |__   _/ /  | |__   _| | |    | |  | |    / / |___ \\  \n");
    gotoxy(40,16);
    printf(" | |__| |  | |/ /   | |  | |   | |____| |__| |   / /   ___) | \n");
    gotoxy(40,17);
    printf("  \\_____|  |_/_/    |_|  |_|   |______|_____/   /_/   |____/  \n");
    reset();                                                                 

    yellow();
    gotoxy(8,12);
    printf("  ,-.       _,---._ __ / \\ \n");
    gotoxy(8,13);
    printf(" /  )    .-'       `.//   \\ \n");
    gotoxy(8,14);
    printf("(  (   ,'          `/      /\n");
    gotoxy(8,15);
    printf(" \\  `-'           \'\\      / |\n");
    gotoxy(8,16);
    printf("  `.              ,\\ \\   /  | \n");
    gotoxy(8,17);
    printf("   /`.          ,'-`----Y   | \n");
    gotoxy(8,18);
    printf("  (            ;        |   ' \n");
    gotoxy(8,19);
    printf("  |  ,-.    ,-'         |  / \n");
    gotoxy(8,20);
    printf("  |  | (   |     amajon | / \n");
    gotoxy(8,21);
    printf("  )  |  \\  `.___________|/ \n");
    gotoxy(8,22);
    printf("  `--'   `--' \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    reset ();

    sleep(3);

    system("cls");

    frame();

    orang();

    green_bold();
    gotoxy(40,5);
    printf("  _    _ \n");
    gotoxy(40,6);                                          
    printf(" | |  | |\n");
    gotoxy(40,7);                                         
    printf(" | |__| | __ _ _ __   __ _ _ __ ___   __ _ _ __ \n"); 
    gotoxy(40,8);  
    printf(" |  __  |/ _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\  \n");
    gotoxy(40,9); 
    printf(" | |  | | (_| | | | | (_| | | | | | | (_| | | | | \n");
    gotoxy(40,10);
    printf(" |_|  |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
    gotoxy(40,11);
    printf("                      __/ |                       \n");
    gotoxy(40,12);
    printf("                     |___/                        \n");
    reset();

    gotoxy(50,11);
    printf("   _____ \n");      
    gotoxy(50,12); 
    printf("  / ____| \n");    
    gotoxy(50,13);                     
    printf(" | |  __  __ _ _ __ ___   ___  ___ \n");
    gotoxy(50,14);
    printf(" | | |_ |/ _` | '_ ` _ \\ / _ \\/ __| \n");
    gotoxy(50,15);
    printf(" | |__| | (_| | | | | | |  __/\\__ \\ \n");
    gotoxy(50,16);
    printf("  \\_____|\\__,_|_| |_| |_|\\___||___/ \n");

    gotoxy(55,20);
    printf("<<<<< Press Enter To Start >>>>> ");

    getchar();

    system("cls");

    main_menu();


}

void frame(void){

gotoxy(2,3);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
for (int i = 4; i < 30 ; i++){
        gotoxy(2,i);
        printf("\xDB\xDB\xB2 ");
        gotoxy(131,i);
        printf("\xB2\xDB\xDB ");
    }
gotoxy(2,30);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

}

void mainmenu_frame(void){
    frame();
    gotoxy(38,4);

    for (int i = 4; i < 30 ; i++){
        gotoxy(38,i);
        printf("\xDB\xDB\xB2 ");
    }

}

void orang (void){
    green_bold();
    gotoxy(9,5);
    printf(" ___________.._______\n");
    gotoxy(9,6);
    printf("| .__________))______|\n");
    gotoxy(9,7);
    printf("| | / /      || \n");
    gotoxy(9,8);
    printf("| |/ /       || \n");
    gotoxy(9,9);
    printf("| | /        ||.-''.\n");
    gotoxy(9,10);
    printf("| |/         |/  _  \\ \n");
    gotoxy(9,11);
    printf("| |          ||  `/,| \n");
    gotoxy(9,12);
    printf("| |          (\\`_.' \n");
    gotoxy(9,13);
    printf("| |         .-`--'. \n");
    gotoxy(9,14);
    printf("| |        /Y . . Y\\ \n");
    gotoxy(9,15);
    printf("| |       // |   | \\ \\ \n");
    gotoxy(9,16);
    printf("| |      //  | . |  \\ \n");
    gotoxy(9,17);
    printf("| |     ')   |   |   (` \n");
    gotoxy(9,18);
    printf("| |          ||'|| \n");
    gotoxy(9,19);
    printf("| |          || || \n");
    gotoxy(9,20);
    printf("| |          || || \n");
    gotoxy(9,21);
    printf("| |          || || \n");
    gotoxy(9,22);
    printf("| |         / | | \\ \n");
    gotoxy(9,23);
    printf("'''''''''''|_`-' `-' |''''| \n");
    gotoxy(9,24);
    printf("|'|'''''''\\ \\       ''|'|\n");
    gotoxy(9,25);
    printf("| |        \\ \\        | |\n");
    gotoxy(9,26);
    printf(": :         \\ \\       : : \n");
    gotoxy(9,27);
    printf(". .          `'       . .\n");
reset();

}
void main_menu(void){
    
    mainmenu_frame();
    orang();

    gotoxy(61,5);
    printf("  __  __       _         __  __  \n");
    gotoxy(61,6);                
    printf(" |  \\/  |     (_)       |  \\/  |  \n");     
    gotoxy(61,7);            
    printf(" | \\  / | __ _ _ _ __   | \\  / | ___ _ __  _   _ \n");
    gotoxy(61,8);
    printf(" | |\\/| |/ _` | | '_ \\  | |\\/| |/ _ \\ '_ \\| | | | \n");
    gotoxy(61,9);
    printf(" | |  | | (_| | | | | | | |  | |  __/ | | | |_| | \n");
    gotoxy(61,10);
    printf(" |_|  |_|\\__,_|_|_| |_| |_|  |_|\\___|_| |_|\\__,_| \n");

    gotoxy(74,13);
    printf("\xDB\xDB\xB2 1. SinglePlayer  \xB2\xDB\xDB");
    gotoxy(74,15);
    printf("\xDB\xDB\xB2 2. Multiplayer   \xB2\xDB\xDB");
    gotoxy(74,17);
    printf("\xDB\xDB\xB2 3. Scoreboard    \xB2\xDB\xDB");
    gotoxy(74,19);
    printf("\xDB\xDB\xB2 4. Word List     \xB2\xDB\xDB");
    gotoxy(74,21);
    printf("\xDB\xDB\xB2 5. Quit          \xB2\xDB\xDB");

    int opsi;
    gotoxy(74,25);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%d",&opsi);

    switch (opsi){
        case 1 : 
            singleplayer();
        break;
        case 2 :
            multiplayer();
        break;

        case 3 :
            scoreboard();
        break; 

        case 4 :
            query_kata();
        break;

        case 5 :

            system("cls");
            frame();

            int opsional;
            gotoxy(44,13);
            printf("Are you sure wanna quit ( 1 [Yes], 2 [No] ) \n");
            gotoxy(44,15);
            printf("\xDB\xDB\xB2 >>> ");
            scanf("%d",&opsional);

            if (opsional == 1){
                system("cls");
                frame();
                gotoxy(18,13);
                printf(" _____ _                 _     __   __           ______          ______ _             _ \n");          
                gotoxy(18,14);   
                printf("|_   _| |               | |    \\ \\ / /           |  ___|         | ___ \\ |           (_) \n");      
                gotoxy(18,15);     
                printf("  | | | |__   __ _ _ __ | | __  \\ V /___  _   _  | |_ ___  _ __  | |_/ / | __ _ _   _ _ _ __   __ _ \n");
                gotoxy(18,16);
                printf("  | | | '_ \\ / _` | '_ \\| |/ /   \\ // _ \\| | | | |  _/ _ \\| '__| |  __/| |/ _` | | | | | '_ \\ / _` | \n");
                gotoxy(18,17);
                printf("  | | | | | | (_| | | | |   <    | | (_) | |_| | | || (_) | |    | |   | | (_| | |_| | | | | | (_| | \n");
                gotoxy(18,18);
                printf("  \\_/ |_| |_|\\__,_|_| |_|_|\\_\\   \\_/\\___/ \\__,_| \\_| \\___/|_|    \\_|   |_|\\__,_|\\__, |_|_| |_|\\__, | \n");
                gotoxy(18,19);
                printf("                                                                                 __/ |         __/ |           \n");
                gotoxy(18,20);
                printf("                                                                                |___/         |___/             \n\n\n\n\n\n\n\n\n\n\n\n");

                sleep (3);
                clearScreen();



            }
            else {
                clearScreen();
                main_menu();
            }
        break;
    }


}

// singleplayer Div
void singleplayer_logo(void){
    frame();

    bold();
    gotoxy(18,12);
    printf(" $$$$$$\\  $$\\                     $$\\                     $$\\    \n");      
    gotoxy(18,13);                               
    printf("$$  __$$\\ \\__|                    $$ |                    $$ |    \n");      
    gotoxy(18,14);                              
    printf("$$ /  \\__|$$\\ $$$$$$$\\   $$$$$$\\  $$ | $$$$$$\\   $$$$$$\\  $$ | $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\  \n");
    gotoxy(18,15);
    printf("\\$$$$$$\\  $$ |$$  __$$\\ $$  __$$\\ $$ |$$  __$$\\ $$  __$$\\ $$ | \\____$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\  \n");
    gotoxy(18,16);
    printf(" \\____$$\\ $$ |$$ |  $$ |$$ /  $$ |$$ |$$$$$$$$ |$$ /  $$ |$$ | $$$$$$$ |$$ |  $$ |$$$$$$$$ |$$ |  \\__| \n");
    gotoxy(18,17);
    printf("$$\\   $$ |$$ |$$ |  $$ |$$ |  $$ |$$ |$$   ____|$$ |  $$ |$$ |$$  __$$ |$$ |  $$ |$$   ____|$$ | \n");     
    gotoxy(18,18);
    printf("\\$$$$$$  |$$ |$$ |  $$ |\\$$$$$$$ |$$ |\\$$$$$$$\\ $$$$$$$  |$$ |\\$$$$$$$ |\\$$$$$$$ |\\$$$$$$$\\ $$ |  \n");  
    gotoxy(18,19);  
    printf(" \\______/ \\__|\\__|  \\__| \\____$$ |\\__| \\_______|$$  ____/ \\__| \\_______| \\____$$ | \\_______|\\__|  \n");    
    gotoxy(18,20);
    printf("                        $$\\   $$ |              $$ |                    $$\\   $$ |               \n");     
    gotoxy(18,21);
    printf("                        \\$$$$$$  |              $$ |                    \\$$$$$$  |              \n");  
    gotoxy(18,22);    
    printf("                         \\______/               \\__|                     \\______/                \n");  
    reset();

    sleep(3);

    clearScreen();

    frame();
    bold();
    gotoxy(18,7);
    printf(" $$$$$$\\  $$\\                     $$\\                     $$\\    \n");      
    gotoxy(18,8);                               
    printf("$$  __$$\\ \\__|                    $$ |                    $$ |    \n");      
    gotoxy(18,9);                              
    printf("$$ /  \\__|$$\\ $$$$$$$\\   $$$$$$\\  $$ | $$$$$$\\   $$$$$$\\  $$ | $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\  \n");
    gotoxy(18,10);
    printf("\\$$$$$$\\  $$ |$$  __$$\\ $$  __$$\\ $$ |$$  __$$\\ $$  __$$\\ $$ | \\____$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\  \n");
    gotoxy(18,11);
    printf(" \\____$$\\ $$ |$$ |  $$ |$$ /  $$ |$$ |$$$$$$$$ |$$ /  $$ |$$ | $$$$$$$ |$$ |  $$ |$$$$$$$$ |$$ |  \\__| \n");
    gotoxy(18,12);
    printf("$$\\   $$ |$$ |$$ |  $$ |$$ |  $$ |$$ |$$   ____|$$ |  $$ |$$ |$$  __$$ |$$ |  $$ |$$   ____|$$ | \n");     
    gotoxy(18,13);
    printf("\\$$$$$$  |$$ |$$ |  $$ |\\$$$$$$$ |$$ |\\$$$$$$$\\ $$$$$$$  |$$ |\\$$$$$$$ |\\$$$$$$$ |\\$$$$$$$\\ $$ |  \n");  
    gotoxy(18,14);  
    printf(" \\______/ \\__|\\__|  \\__| \\____$$ |\\__| \\_______|$$  ____/ \\__| \\_______| \\____$$ | \\_______|\\__|  \n");    
    gotoxy(18,15);
    printf("                        $$\\   $$ |              $$ |                    $$\\   $$ |               \n");     
    gotoxy(18,16);
    printf("                        \\$$$$$$  |              $$ |                    \\$$$$$$  |              \n");  
    gotoxy(18,17);    
    printf("                         \\______/               \\__|                     \\______/                \n"); 

    reset();

}

void singleplayer(){
    clearScreen();
    singleplayer_logo();
    
    bold();
    gotoxy(52,21);
    printf("\xDB\xDB\xB2 Please input your name \xB2\xDB\xDB");
    
    char singleplayer_name[30];
    gotoxy(52,23);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%s", singleplayer_name);

    reset();
    sleep (2);
    clearScreen();
    frame();

    
    
    char words[][10] = {"hello", "world", "program", "coding","clock","bag","ruler","cupboard","roof","door",
                        "country","land","House","car","motorcycle","curtain","card","payment","bill","money"};
    char word[10];
    int wrong;
    int correct;
    int score = 0;
    int killed = 0;
    int playing = 1;
    
    srand(time(0));
    while (playing) {
        
        wrong = 0;
        correct = 0;
        // Randomly select a word from the array
        strcpy(word, words[rand() % 20]);
        int wordLength = strlen(word);
        char guessedWord[wordLength + 1];
        for (int i = 0; i < wordLength; i++) {
            guessedWord[i] = '_';
        }
        guessedWord[wordLength] = '\0';

        // Start the game
        while (wrong < 6 && correct < wordLength) {
            system("cls");
            frame();
            
            gotoxy(50,13);
            printf("#########################################################");
            gotoxy(50,14);
            printf("#                                                       #");
            gotoxy(50,15);
            printf("#                                                       #");
            gotoxy(50,16);
            printf("#                                                       #");
            gotoxy(50,17);
            printf("#########################################################");

            gotoxy(50,9);
            printf("#########################################################");
            gotoxy(50,10);
            printf("#                                                       #");
            gotoxy(50,11);
            printf("#########################################################");

            gotoxy(50,19);
            printf("#########################################################");
            gotoxy(50,20);
            printf("#                                                       #");
            gotoxy(50,21);
            printf("#########################################################");
            
            printHangman(wrong);
            
            

            gotoxy(53,10);
            printf("\xDB\xDB\xB2 Username >>> %s",singleplayer_name);

            gotoxy(53,15);
            printf("Word: %s\n", guessedWord);
            gotoxy(76,15);
            printf("Guesses left >>> [%d]\n", 6 - wrong);

            int total_score = (score * 10) + (correct * 2 );

            gotoxy(50,6);
            printf("\xDB\xDB\xB2 %s %s", getCurrentDate(),getCurrentTime());
            gotoxy(80,6);
            printf("\xDB\xDB\xB2 Current Score >>> [ %d ]",total_score);
            gotoxy(55,20);
            printf("\xDB\xDB\xB2 Enter a letter >>>  ");

            char letter;
            scanf(" %c", &letter);

            int found = 0;
            for (int i = 0; i < wordLength; i++) {
                if (word[i] == letter) {
                    guessedWord[i] = letter;
                    correct++;
                    found = 1;
                }
            }

            if (!found) {
                wrong++;
                printf("Wrong guess!\n");
            }
        }

        // Print the result
        if (correct == wordLength) {
            clearScreen();
            frame();
            gotoxy(31,7);
            printf(" __     __            _____                     _   _    _ _ \n");
            gotoxy(31,8);            
            printf(" \\ \\   / /           / ____|                   | | | |  | (_) \n");
            gotoxy(31,9);          
            printf("  \\ \\_/ /__  _   _  | (___   __ ___   _____  __| | | |__| |_ _ __ ___ \n"); 
            gotoxy(31,10);  
            printf("   \\   / _ \\| | | |  \\___ \\ / _` \\ \\ / / _ \\/ _` | |  __  | | '_ ` _ \\  \n");
            gotoxy(31,11);
            printf("    | | (_) | |_| |  ____) | (_| |\\ V /  __/ (_| | | |  | | | | | | | | \n");
            gotoxy(31,12);
            printf("    |_|\\___/ \\__,_| |_____/ \\__,_| \\_/ \\___|\\__,_| |_|  |_|_|_| |_| |_| \n");

            gotoxy(25,16);
            printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

            gotoxy(41,18);
            printf("Congratulation you saved him and The word is %s\n", word);
            score++;
        } else {
            clearScreen();
            frame();

            gotoxy(35,7);
            printf(" __     __           _  ___ _ _          _   _    _ _    \n");     
            gotoxy(35,8);  
            printf(" \\ \\   / /          | |/ (_) | |        | | | |  | (_) \n");    
            gotoxy(35,9);     
            printf("  \\ \\_/ /__  _   _  | ' / _| | | ___  __| | | |__| |_ _ __ ___  \n");
            gotoxy(35,10);
            printf("   \\   / _ \\| | | | |  < | | | |/ _ \\/ _` | |  __  | | '_ ` _ \\  \n");
            gotoxy(35,11);
            printf("    | | (_) | |_| | | . \\| | | |  __/ (_| | | |  | | | | | | | | \n");
            gotoxy(35,12);
            printf("    |_|\\___/ \\__,_| |_|\\_\\_|_|_|\\___|\\__,_| |_|  |_|_|_| |_| |_| \n");

            gotoxy(25,16);
            printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
            gotoxy(25,20);
            printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
            gotoxy(49,18);
            printf(" YOU KILL HIM and The word is %s\n", word);                                                               
            killed++;
        }

        // Ask if the player wants to play again
        gotoxy(41,22);
        printf("\xDB\xDB\xB2 Did you wanna play again? [1 for yes, 0 for no] \xB2\xDB\xDB");
        gotoxy(41,24);
        printf("\xDB\xDB\xB2 >>> ");
        scanf("%d", &playing);
        
        

        
    }
    game_over(score,killed,correct);

    clearScreen();
    frame();
    int opsional;
    
    gotoxy(44,13);
    printf("\xDB\xDB\xB2 Save the final score [ 1 = Yes / 2 = No ]\n");
    gotoxy(44,15);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%d",&opsional);

    int total_score = (score * 10) + (correct * 2 );

    if(opsional == 1 ){
        FILE *file;
        file = fopen("score.csv", "a+");
        fprintf(file, "\xDB\xDB\xB2 %s %s \xB2\xDB\xDB \xDB\xDB\xB2 %s \xB2\xDB\xDB \xDB\xDB\xB2  %d  \xB2\xDB\xDB  \n",getCurrentDate(),getCurrentTime(),singleplayer_name,total_score);
        fclose(file);

        clearScreen();
        frame();
        gotoxy(44,13);
        printf("Saving data to database. please wait....");
        
        sleep(2);

        clearScreen();
        frame();
        gotoxy(44,13);
        printf("Your Data is saved");
        gotoxy(44, 13);
        printf("Press Enter to Continue....");
        getch();

        clearScreen();
        main_menu();
    }
    else {
        clearScreen();
        main_menu();
    }

    
}
void game_over (int score, int killed, int correct){

    clearScreen();
    frame();

    // 24,5

    bold();
    gotoxy(24,5);
    printf("  /$$$$$$                                           /$$$$$$      \n");           
    gotoxy(24,6);                    
    printf(" /$$__  $$                                         /$$__  $$     \n");    
    gotoxy(24,7);                           
    printf("| $$  \\__/  /$$$$$$  /$$$$$$/$$$$   /$$$$$$       | $$  \\ $$ /$$    /$$ /$$$$$$   /$$$$$$  \n");   
    gotoxy(24,8);  
    printf("| $$ /$$$$ |____  $$| $$_  $$_  $$ /$$__  $$      | $$  | $$|  $$  /$$//$$__  $$ /$$__  $$      \n");
    gotoxy(24,9);
    printf("| $$|_  $$  /$$$$$$$| $$ \\ $$ \\ $$| $$$$$$$$      | $$  | $$ \\  $$/$$/| $$$$$$$$| $$  \\__/     \n"); 
    gotoxy(24,10);
    printf("| $$  \\ $$ /$$__  $$| $$ | $$ | $$| $$_____/      | $$  | $$  \\  $$$/ | $$_____/| $$   \n");         
    gotoxy(24,11);
    printf("|  $$$$$$/|  $$$$$$$| $$ | $$ | $$|  $$$$$$$      |  $$$$$$/   \\  $/  |  $$$$$$$| $$  \n");          
    gotoxy(24,12);
    printf(" \\______/  \\_______/|__/ |__/ |__/ \\_______/       \\______/     \\_/    \\_______/|__/   \n");         
                                                                                             
    gotoxy(21,14);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

    gotoxy(50,16);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
    gotoxy(50,17);
    printf("\xDB\xDB\xB2                        \xB2\xDB\xDB");
    gotoxy(50,18);
    printf("\xDB\xDB\xB2       Your Score       \xB2\xDB\xDB");
    gotoxy(50,19);
    printf("\xDB\xDB\xB2                        \xB2\xDB\xDB");
    gotoxy(50,20);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

    int total_score = (score * 10) + (correct * 2 );

    gotoxy(50,22);
    printf("\xDB\xDB\xB2 Saved        >>>   %d   \xB2\xDB\xDB", score);
    gotoxy(50,24);
    printf("\xDB\xDB\xB2 killed       >>>   %d   \xB2\xDB\xDB", killed);

    if (total_score <= 0){
        gotoxy(50,26);
        printf("\xDB\xDB\xB2 last point   >>>   0   \xB2\xDB\xDB");
    } else {
        gotoxy(50,26);
        printf("\xDB\xDB\xB2 last point   >>>  %d   \xB2\xDB\xDB",total_score);
    }
   
    
    gotoxy(48,28);
    printf("<<< Press Enter to Continue >>>");

    getch();

    //clearScreen();
    //main_menu();
    
    /*int n;
    scanf("%d",&n);
    if (n == 1){
        clearScreen();
        main_menu();
    }
    else{
        clearScreen();
        main_menu();
    }

    */

}

// Multiplayer Div. 
void player_1() {
    system("cls");
    frame();
    
    player1_logo();
    
    bold();
    gotoxy(52,21);
    printf("\xDB\xDB\xB2 Please input your name \xB2\xDB\xDB");
    
    char multiplayer_name1[30];
    gotoxy(52,23);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%s", multiplayer_name1);

    reset();

    char words[MAX_LENGTH];
    clearScreen();
    frame();
    player1_logo();
    
    gotoxy(52,21);
    printf("\xDB\xDB\xB2 Player 2 input word \xB2\xDB\xDB");
    gotoxy(52,23);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%s", words);

    reset();

    sleep (2);
    clearScreen();
    frame();
    int wrong;
    int correct;
    int alive = 0;
    int killed = 0;
    int playing = 1;
    
    wrong = 0;
    correct = 0;
    
    int wordLength = strlen(words);
    char guessedWord[wordLength + 1];
    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    // Start the game
    while (wrong < 6 && correct < wordLength) {
        system("cls");
        frame();
        
        bold();
        gotoxy(50,13);
        printf("#########################################################");
        gotoxy(50,14);
        printf("#                                                       #");
        gotoxy(50,15);
        printf("#                                                       #");
        gotoxy(50,16);
        printf("#                                                       #");
        gotoxy(50,17);
        printf("#########################################################");

        gotoxy(50,9);
        printf("#########################################################");
        gotoxy(50,10);
        printf("#                                                       #");
        gotoxy(50,11);
        printf("#########################################################");

        gotoxy(50,19);
        printf("#########################################################");
        gotoxy(50,20);
        printf("#                                                       #");
        gotoxy(50,21);
        printf("#########################################################");
        
        printHangman(wrong);
            
            

        gotoxy(53,10);
        printf("\xDB\xDB\xB2 Username >>> %s", multiplayer_name1);

        gotoxy(53,15);
        printf("Word: %s\n", guessedWord);
        gotoxy(76,15);
        printf("Guesses left >>> [%d]\n", 6 - wrong);

        int total_score = (alive * 10) + (correct * 2 );

        gotoxy(50,6);
        printf("\xDB\xDB\xB2 %s %s", getCurrentDate(),getCurrentTime());
        gotoxy(80,6);
        printf("\xDB\xDB\xB2 Current Score >>> [ %d ]",total_score);
        gotoxy(55,20);
        printf("\xDB\xDB\xB2 Enter a letter >>>  ");
        
        char letter;
        scanf(" %c", &letter);

        int found = 0;
        for (int i = 0; i < wordLength; i++) {
            if (words[i] == letter) {
                guessedWord[i] = letter;
                correct++;
                found = 1;
            }
        }

        if (!found) {
            wrong++;
            //printf("Wrong guess!\n");
        }
    }

    // Print the result
    if (correct == wordLength) {
        clearScreen();
        frame();
        gotoxy(31,7);
        printf(" __     __            _____                     _   _    _ _ \n");
        gotoxy(31,8);            
        printf(" \\ \\   / /           / ____|                   | | | |  | (_) \n");
        gotoxy(31,9);          
        printf("  \\ \\_/ /__  _   _  | (___   __ ___   _____  __| | | |__| |_ _ __ ___ \n"); 
        gotoxy(31,10);  
        printf("   \\   / _ \\| | | |  \\___ \\ / _` \\ \\ / / _ \\/ _` | |  __  | | '_ ` _ \\  \n");
        gotoxy(31,11);
        printf("    | | (_) | |_| |  ____) | (_| |\\ V /  __/ (_| | | |  | | | | | | | | \n");
        gotoxy(31,12);
        printf("    |_|\\___/ \\__,_| |_____/ \\__,_| \\_/ \\___|\\__,_| |_|  |_|_|_| |_| |_| \n");

        gotoxy(25,16);
        printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

        gotoxy(41,18);
        printf("Congratulation you saved him and The word is %s\n", words);
        getch();
        alive++;
        } 
    else {
        clearScreen();
        frame();

        gotoxy(35,7);
        printf(" __     __           _  ___ _ _          _   _    _ _    \n");     
        gotoxy(35,8);  
        printf(" \\ \\   / /          | |/ (_) | |        | | | |  | (_) \n");    
        gotoxy(35,9);     
        printf("  \\ \\_/ /__  _   _  | ' / _| | | ___  __| | | |__| |_ _ __ ___  \n");
        gotoxy(35,10);
        printf("   \\   / _ \\| | | | |  < | | | |/ _ \\/ _` | |  __  | | '_ ` _ \\  \n");
        gotoxy(35,11);
        printf("    | | (_) | |_| | | . \\| | | |  __/ (_| | | |  | | | | | | | | \n");
        gotoxy(35,12);
        printf("    |_|\\___/ \\__,_| |_|\\_\\_|_|_|\\___|\\__,_| |_|  |_|_|_| |_| |_| \n");

        gotoxy(25,16);
        printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
        gotoxy(25,20);
        printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
        gotoxy(49,18);
        printf(" YOU KILL HIM and The word is %s\n", words);      
        getch();                                                         
        killed++;
    }

    int total_score = (alive * 10) + (correct * 2);
    //clearScreen();
    //printf("%d",player1_totalscore);

    // player2\\\\\\\\.////////////////////////////////////////////////////////////////////////////////

    clearScreen();
    frame();
    player2_logo();
    
    bold();
    gotoxy(52,21);
    printf("\xDB\xDB\xB2 Please input your name \xB2\xDB\xDB");
    
    char nama_orang[30];
    gotoxy(52,23);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%s", nama_orang);

    reset();

    char kata[MAX_LENGTH];
    clearScreen();
    frame();
    player2_logo();
    

    gotoxy(52,21);
    printf("\xDB\xDB\xB2 Player 1 input word \xB2\xDB\xDB");
    gotoxy(52,23);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%s", kata);

    reset();

    sleep (2);
    clearScreen();
    frame();
    int salah;
    int bener;
    int hidup = 0;
    int mati = 0;
    int main = 1;
    
    salah = 0;
    bener = 0;
    
    int panjanghuruf = strlen(kata);
    char tebak_huruf[panjanghuruf + 1];
    for (int i = 0; i < panjanghuruf; i++) {
        tebak_huruf[i] = '_';
    }
    tebak_huruf[panjanghuruf] = '\0';

    // Start the game
    while (salah < 6 && bener < panjanghuruf) {
        system("cls");
        frame();
            
        gotoxy(50,13);
        printf("#########################################################");
        gotoxy(50,14);
        printf("#                                                       #");
        gotoxy(50,15);
        printf("#                                                       #");
        gotoxy(50,16);
        printf("#                                                       #");
        gotoxy(50,17);
        printf("#########################################################");

        gotoxy(50,9);
        printf("#########################################################");
        gotoxy(50,10);
        printf("#                                                       #");
        gotoxy(50,11);
        printf("#########################################################");

        gotoxy(50,19);
        printf("#########################################################");
        gotoxy(50,20);
        printf("#                                                       #");
        gotoxy(50,21);
        printf("#########################################################");
        
        gantung(salah);
            
            

        gotoxy(53,10);
        printf("\xDB\xDB\xB2 Username >>> %s", nama_orang);

        gotoxy(53,15);
        printf("Word: %s\n", tebak_huruf);
        gotoxy(76,15);
        printf("Guesses left >>> [%d]\n", 6 - salah);

        int total_skor = (hidup * 10) + (bener * 2 );

        gotoxy(50,6);
        printf("\xDB\xDB\xB2 %s %s", getCurrentDate(),getCurrentTime());
        gotoxy(80,6);
        printf("\xDB\xDB\xB2 Current Score >>> [ %d ]",total_skor);
        gotoxy(55,20);
        printf("\xDB\xDB\xB2 Enter a letter >>>  ");
        
        char huruf;
        scanf(" %c", &huruf);

        int ketemu = 0;
        for (int i = 0; i < panjanghuruf; i++) {
            if (kata[i] == huruf) {
                tebak_huruf[i] = huruf;
                bener++;
                ketemu= 1;
            }
        }

        if (!ketemu) {
            salah++;
            printf("Wrong guess!\n");
        }
    }

    // Print the result
    if (bener == panjanghuruf) {
       clearScreen();
        frame();
        gotoxy(31,7);
        printf(" __     __            _____                     _   _    _ _ \n");
        gotoxy(31,8);            
        printf(" \\ \\   / /           / ____|                   | | | |  | (_) \n");
        gotoxy(31,9);          
        printf("  \\ \\_/ /__  _   _  | (___   __ ___   _____  __| | | |__| |_ _ __ ___ \n"); 
        gotoxy(31,10);  
        printf("   \\   / _ \\| | | |  \\___ \\ / _` \\ \\ / / _ \\/ _` | |  __  | | '_ ` _ \\  \n");
        gotoxy(31,11);
        printf("    | | (_) | |_| |  ____) | (_| |\\ V /  __/ (_| | | |  | | | | | | | | \n");
        gotoxy(31,12);
        printf("    |_|\\___/ \\__,_| |_____/ \\__,_| \\_/ \\___|\\__,_| |_|  |_|_|_| |_| |_| \n");

        gotoxy(25,16);
        printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

        gotoxy(41,18);
        printf("Congratulation you saved him and The word is %s\n", kata);
        getch();
        hidup++;
        } 
    else {
        clearScreen();
        frame();

        gotoxy(35,7);
        printf(" __     __           _  ___ _ _          _   _    _ _    \n");     
        gotoxy(35,8);  
        printf(" \\ \\   / /          | |/ (_) | |        | | | |  | (_) \n");    
        gotoxy(35,9);     
        printf("  \\ \\_/ /__  _   _  | ' / _| | | ___  __| | | |__| |_ _ __ ___  \n");
        gotoxy(35,10);
        printf("   \\   / _ \\| | | | |  < | | | |/ _ \\/ _` | |  __  | | '_ ` _ \\  \n");
        gotoxy(35,11);
        printf("    | | (_) | |_| | | . \\| | | |  __/ (_| | | |  | | | | | | | | \n");
        gotoxy(35,12);
        printf("    |_|\\___/ \\__,_| |_|\\_\\_|_|_|\\___|\\__,_| |_|  |_|_|_| |_| |_| \n");

        gotoxy(25,16);
        printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
        gotoxy(25,20);
        printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
        gotoxy(49,18);
        printf(" YOU KILL HIM and The word is %s\n", kata);      
        getch();                                                         
        mati++;
    }

    if (hidup < alive){
        clearScreen();
        frame();

        gotoxy(18,13);        
        printf("$$$$$$$\\  $$\\                                                 $$\\         $$\\      $$\\ $$\\     \n");     
        gotoxy(18,14);  
        printf("$$  __$$\\ $$ |                                              $$$$ |        $$ | $\\  $$ |\\__|     \n");    
        gotoxy(18,15);  
        printf("$$ |  $$ |$$ | $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\        \\_$$ |        $$ |$$$\\ $$ |$$\\ $$$$$$$\\  \n"); 
        gotoxy(18,16); 
        printf("$$$$$$$  |$$ | \\____$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\         $$ |        $$ $$ $$\\$$ |$$ |$$  __$$\\  \n");
        gotoxy(18,17); 
        printf("$$  ____/ $$ | $$$$$$$ |$$ |  $$ |$$$$$$$$ |$$ |  \\__|        $$ |        $$$$  _$$$$ |$$ |$$ |  $$ | \n");
        gotoxy(18,18); 
        printf("$$ |      $$ |$$  __$$ |$$ |  $$ |$$   ____|$$ |              $$ |        $$$  / \\$$$ |$$ |$$ |  $$ | \n");
        gotoxy(18,19); 
        printf("$$ |      $$ |\\$$$$$$$ |\\$$$$$$$ |\\$$$$$$$\\ $$ |            $$$$$$\\       $$  /   \\$$ |$$ |$$ |  $$ | \n");
        gotoxy(18,20); 
        printf("\\__|      \\__| \\_______| \\____$$ | \\_______|\\__|            \\______|      \\__/     \\__|\\__|\\__|  \\__| \n");
        gotoxy(18,21); 
        printf("                        $$\\   $$ |                                                                   \n");
        gotoxy(18,22); 
        printf("                        \\$$$$$$  |                                                                 \n");  
        gotoxy(18,23); 
        printf("                         \\______/                                                           \n");

    }
    else if (hidup > alive){
        clearScreen();
        frame();
        gotoxy(18,13);
        printf("$$$$$$$\\  $$\\                                                $$$$$$\\        $$\\      $$\\ $$\\  \n");   
        gotoxy(18,14);       
        printf("$$  __$$\\ $$ |                                              $$  __$$\\       $$ | $\\  $$ |\\__|  \n");    
        gotoxy(18,15);    
        printf("$$ |  $$ |$$ | $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\        \\__/  $$ |      $$ |$$$\\ $$ |$$\\ $$$$$$$\\  \n");
        gotoxy(18,16);
        printf("$$$$$$$  |$$ | \\____$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\        $$$$$$  |      $$ $$ $$\\$$ |$$ |$$  __$$\\  \n");
        gotoxy(18,17);
        printf("$$  ____/ $$ | $$$$$$$ |$$ |  $$ |$$$$$$$$ |$$ |  \\__|      $$  ____/       $$$$  _$$$$ |$$ |$$ |  $$ | \n");
        gotoxy(18,18);
        printf("$$ |      $$ |$$  __$$ |$$ |  $$ |$$   ____|$$ |            $$ |            $$$  / \\$$$ |$$ |$$ |  $$ | \n");
        gotoxy(18,19);
        printf("$$ |      $$ |\\$$$$$$$ |\\$$$$$$$ |\\$$$$$$$\\ $$ |            $$$$$$$$\\       $$  /   \\$$ |$$ |$$ |  $$ | \n");
        gotoxy(18,20);
        printf("\\__|      \\__| \\_______| \\____$$ | \\_______|\\__|            \\________|      \\__/     \\__|\\__|\\__|  \\__| \n");
        gotoxy(18,21);
        printf("                        $$\\   $$ |        \n");                                                             
        gotoxy(18,22);
        printf("                        \\$$$$$$  |          \n");                                                           
        gotoxy(18,23);
        printf("                         \\______/            \n");                                             
             
    }
    else {
        clearScreen();
        frame();
        gotoxy(46,13);
        printf("$$$$$$$\\  $$$$$$$\\   $$$$$$\\  $$\\      $$\\  \n");
        gotoxy(46,14);
        printf("$$  __$$\\ $$  __$$\\ $$  __$$\\ $$ | $\\  $$ | \n");
        gotoxy(46,15);
        printf("$$ |  $$ |$$ |  $$ |$$ /  $$ |$$ |$$$\\ $$ | \n");
        gotoxy(46,16);
        printf("$$ |  $$ |$$$$$$$  |$$$$$$$$ |$$ $$ $$\\$$ | \n");
        gotoxy(46,17);
        printf("$$ |  $$ |$$  __$$< $$  __$$ |$$$$  _$$$$ | \n");
        gotoxy(46,18);
        printf("$$ |  $$ |$$ |  $$ |$$ |  $$ |$$$  / \\$$$ | \n");
        gotoxy(46,19);
        printf("$$$$$$$  |$$ |  $$ |$$ |  $$ |$$  /   \\$$ | \n");
        gotoxy(46,20);
        printf("\\_______/ \\__|  \\__|\\__|  \\__|\\__/     \\__| \n");
        
    }

    sleep(3);

    clearScreen();
    frame();

    // 24,5

    bold();
    gotoxy(24,5);
    printf("  /$$$$$$                                           /$$$$$$      \n");           
    gotoxy(24,6);                    
    printf(" /$$__  $$                                         /$$__  $$     \n");    
    gotoxy(24,7);                           
    printf("| $$  \\__/  /$$$$$$  /$$$$$$/$$$$   /$$$$$$       | $$  \\ $$ /$$    /$$ /$$$$$$   /$$$$$$  \n");   
    gotoxy(24,8);  
    printf("| $$ /$$$$ |____  $$| $$_  $$_  $$ /$$__  $$      | $$  | $$|  $$  /$$//$$__  $$ /$$__  $$      \n");
    gotoxy(24,9);
    printf("| $$|_  $$  /$$$$$$$| $$ \\ $$ \\ $$| $$$$$$$$      | $$  | $$ \\  $$/$$/| $$$$$$$$| $$  \\__/     \n"); 
    gotoxy(24,10);
    printf("| $$  \\ $$ /$$__  $$| $$ | $$ | $$| $$_____/      | $$  | $$  \\  $$$/ | $$_____/| $$   \n");         
    gotoxy(24,11);
    printf("|  $$$$$$/|  $$$$$$$| $$ | $$ | $$|  $$$$$$$      |  $$$$$$/   \\  $/  |  $$$$$$$| $$  \n");          
    gotoxy(24,12);
    printf(" \\______/  \\_______/|__/ |__/ |__/ \\_______/       \\______/     \\_/    \\_______/|__/   \n");         
                                                                                             
    gotoxy(21,14);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

    gotoxy(30,16);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
    gotoxy(30,17);
    printf("\xDB\xDB\xB2                        \xB2\xDB\xDB");
    gotoxy(30,18);
    printf("\xDB\xDB\xB2    Player 1 Score      \xB2\xDB\xDB");
    gotoxy(30,19);
    printf("\xDB\xDB\xB2                        \xB2\xDB\xDB");
    gotoxy(30,20);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

    gotoxy(30,22);
    printf("\xDB\xDB\xB2 Saved        >>>   %d   \xB2\xDB\xDB", alive);
    gotoxy(30,24);
    printf("\xDB\xDB\xB2 killed       >>>   %d   \xB2\xDB\xDB", killed);

    if (total_score <= 0){
        gotoxy(30,26);
        printf("\xDB\xDB\xB2 last point   >>>   0   \xB2\xDB\xDB");
    } else {
        gotoxy(30,26);
        printf("\xDB\xDB\xB2 last point   >>>  %d   \xB2\xDB\xDB",total_score);
    }


    /// player 2

    int skor_akhir = (hidup * 10) + (bener * 2);
    gotoxy(77,16);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
    gotoxy(77,17);
    printf("\xDB\xDB\xB2                        \xB2\xDB\xDB");
    gotoxy(77,18);
    printf("\xDB\xDB\xB2     Player 2 Score     \xB2\xDB\xDB");
    gotoxy(77,19);
    printf("\xDB\xDB\xB2                        \xB2\xDB\xDB");
    gotoxy(77,20);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

    gotoxy(77,22);
    printf("\xDB\xDB\xB2 Saved        >>>   %d   \xB2\xDB\xDB", hidup);
    gotoxy(77,24);
    printf("\xDB\xDB\xB2 killed       >>>   %d   \xB2\xDB\xDB", mati);

    if (total_score <= 0){
        gotoxy(77,26);
        printf("\xDB\xDB\xB2 last point   >>>   0   \xB2\xDB\xDB");
    } else {
        gotoxy(77,26);
        printf("\xDB\xDB\xB2 last point   >>>  %d   \xB2\xDB\xDB",skor_akhir);
    }
    gotoxy(50,28);
    printf("<<< Press Enter to Continue >>>");
    getch();

    clearScreen();
    frame();
    int opsional;
    
    gotoxy(44,13);
    printf("\xDB\xDB\xB2 Save the final score [ 1 = Yes / 2 = No ]\n");
    gotoxy(44,15);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%d",&opsional);

    if (opsional == 1){
        FILE *file;
        file = fopen("multiplayerscore.csv", "a+");

        if(hidup < alive){
            fprintf(file, "\xDB\xDB\xB2 %s %s \xB2\xDB\xDB \xDB\xDB\xB2      %s VS %s    \xB2\xDB\xDB \xDB\xDB\xB2      %s      \xB2\xDB\xDB \n",getCurrentDate(),getCurrentTime(),multiplayer_name1,nama_orang,multiplayer_name1);
        }
        else if(hidup > alive){
            fprintf(file, "\xDB\xDB\xB2 %s %s \xB2\xDB\xDB \xDB\xDB\xB2      %s VS %s    \xB2\xDB\xDB  \xDB\xDB\xB2     %s      \xB2\xDB\xDB\n",getCurrentDate(),getCurrentTime(),multiplayer_name1,nama_orang,nama_orang);
        }
        else {
            fprintf(file, "\xDB\xDB\xB2 %s %s \xB2\xDB\xDB \xDB\xDB\xB2      %s VS %s    \xB2\xDB\xDB  \xDB\xDB\xB2    draw     \xB2\xDB\xDB\n",getCurrentDate(),getCurrentTime(),multiplayer_name1,nama_orang);
        }
       
        fclose(file);

        clearScreen();
        frame();
        gotoxy(44,13);
        printf("Saving data to database. please wait....");
        
        sleep(2);

        clearScreen();
        frame();
        gotoxy(44,13);
        printf("Your Data is saved");
        gotoxy(44, 13);
        printf("Press Enter to Continue....");
        getch();

        clearScreen();
        main_menu();
    }
    else{
        clearScreen();
        main_menu();
    }


    //printf("%d,%d,%d\n",hidup,mati,skor_akhir);

    //printf("%d,%d,%d",alive,killed,total_score);

    
}
void player1_logo(void){
    
    gotoxy(35,7);
    printf("$$$$$$$\\  $$\\                                                 $$\\ \n");
    gotoxy(35,8);        
    printf("$$  __$$\\ $$ |                                              $$$$ | \n");
    gotoxy(35,9);       
    printf("$$ |  $$ |$$ | $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\        \\_$$ |  \n");  
    gotoxy(35,10);    
    printf("$$$$$$$  |$$ | \\____$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\         $$ | \n");    
    gotoxy(35,11);   
    printf("$$  ____/ $$ | $$$$$$$ |$$ |  $$ |$$$$$$$$ |$$ |  \\__|        $$ | \n");  
    gotoxy(35,12);    
    printf("$$ |      $$ |$$  __$$ |$$ |  $$ |$$   ____|$$ |              $$ | \n");
    gotoxy(35,13);       
    printf("$$ |      $$ |\\$$$$$$$ |\\$$$$$$$ |\\$$$$$$$\\ $$ |            $$$$$$\\  \n");  
    gotoxy(35,14);    
    printf("\\__|      \\__| \\_______| \\____$$ | \\_______|\\__|            \\______| \n");  
    gotoxy(35,15);    
    printf("                        $$\\   $$ |                                 \n");      
    gotoxy(35,16); 
    printf("                        \\$$$$$$  |                           \n ");         
    gotoxy(35,17);   
    printf("                         \\______/                             \n");
}
void multiplayer(){

    system("cls");
    frame();
    gotoxy(38,4);

    gotoxy(18,12);    
    printf(" /$$      /$$           /$$   /$$     /$$           /$$ \n");
    gotoxy(18,13);                                       
    printf("| $$$    /$$$          | $$  | $$    |__/          | $$ \n"); 
    gotoxy(18,14);                                      
    printf("| $$$$  /$$$$ /$$   /$$| $$ /$$$$$$   /$$  /$$$$$$ | $$  /$$$$$$  /$$   /$$  /$$$$$$   /$$$$$$ \n"); 
    gotoxy(18,15);
    printf("| $$ $$/$$ $$| $$  | $$| $$|_  $$_/  | $$ /$$__  $$| $$ |____  $$| $$  | $$ /$$__  $$ /$$__  $$ \n");
    gotoxy(18,16);
    printf("| $$  $$$| $$| $$  | $$| $$  | $$    | $$| $$  \\ $$| $$  /$$$$$$$| $$  | $$| $$$$$$$$| $$  \\__/ \n");
    gotoxy(18,17);
    printf("| $$\\  $ | $$| $$  | $$| $$  | $$ /$$| $$| $$  | $$| $$ /$$__  $$| $$  | $$| $$_____/| $$  \n");
    gotoxy(18,18);     
    printf("| $$ \\/  | $$|  $$$$$$/| $$  |  $$$$/| $$| $$$$$$$/| $$|  $$$$$$$|  $$$$$$$|  $$$$$$$| $$   \n");   
    gotoxy(18,19);
    printf("|__/     |__/ \\______/ |__/   \\___/  |__/| $$____/ |__/ \\_______/ \\____  $$ \\_______/|__/ \n"); 
    gotoxy(18,20);    
    printf("                                         | $$                     /$$  | $$              \n");      
    gotoxy(18,21);
    printf("                                         | $$                    |  $$$$$$/            \n");  
    gotoxy(18,22);      
    printf("                                         |__/                     \\______/           \n\n\n\n\n\n\n\n\n\n ");         
        
    sleep(3);

    player_1();
    
}

void player2_logo (){

gotoxy(35,7);
printf("$$$$$$$\\  $$\\                                                $$$$$$\\  \n");
gotoxy(35,8);
printf("$$  __$$\\ $$ |                                              $$  __$$\\  \n");
gotoxy(35,9);
printf("$$ |  $$ |$$ | $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\        \\__/  $$ | \n");
gotoxy(35,10);
printf("$$$$$$$  |$$ | \\____$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\        $$$$$$  | \n");
gotoxy(35,11);
printf("$$  ____/ $$ | $$$$$$$ |$$ |  $$ |$$$$$$$$ |$$ |  \\__|      $$  ____/ \n");
gotoxy(35,12);
printf("$$ |      $$ |$$  __$$ |$$ |  $$ |$$   ____|$$ |            $$ |   \n");   
gotoxy(35,13);
printf("$$ |      $$ |\\$$$$$$$ |\\$$$$$$$ |\\$$$$$$$\\ $$ |            $$$$$$$$\\ \n");
gotoxy(35,14);
printf("\\__|      \\__| \\_______| \\____$$ | \\_______|\\__|            \\________| \n");
gotoxy(35,15);
printf("                        $$\\   $$ |                                    ");
gotoxy(35,16);
printf("                        \\$$$$$$  |                                    ");
gotoxy(35,17);
printf("                         \\______/               \n");

}


// Scorboard funct.
void scoreboard (){
    clearScreen();
    frame();

    gotoxy(18,13);
    printf(" $$$$$$\\   $$$$$$\\   $$$$$$\\  $$$$$$$\\  $$$$$$$$\\ $$$$$$$\\   $$$$$$\\   $$$$$$\\  $$$$$$$\\  $$$$$$$\\  \n");
    gotoxy(18,14);
    printf("$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\  \n");
    gotoxy(18,15);
    printf("$$ /  \\__|$$ /  \\__|$$ /  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$ /  $$ |$$ /  $$ |$$ |  $$ |$$ |  $$ | \n");
    gotoxy(18,16);
    printf("\\$$$$$$\\  $$ |      $$ |  $$ |$$$$$$$  |$$$$$\\    $$$$$$$\\ |$$ |  $$ |$$$$$$$$ |$$$$$$$  |$$ |  $$ | \n");
    gotoxy(18,17);
    printf(" \\____$$\\ $$ |      $$ |  $$ |$$  __$$< $$  __|   $$  __$$\\ $$ |  $$ |$$  __$$ |$$  __$$< $$ |  $$ | \n");
    gotoxy(18,18);
    printf("$$\\   $$ |$$ |  $$\\ $$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ | \n");
    gotoxy(18,19);
    printf("\\$$$$$$  |\\$$$$$$  | $$$$$$  |$$ |  $$ |$$$$$$$$\\ $$$$$$$  | $$$$$$  |$$ |  $$ |$$ |  $$ |$$$$$$$  | \n");
    gotoxy(18,20);
    printf(" \\______/  \\______/  \\______/ \\__|  \\__|\\________|\\_______/  \\______/ \\__|  \\__|\\__|  \\__|\\_______/ \n");

    sleep(3);

    clearScreen();
    frame();
    gotoxy(18,7);
    printf(" $$$$$$\\   $$$$$$\\   $$$$$$\\  $$$$$$$\\  $$$$$$$$\\ $$$$$$$\\   $$$$$$\\   $$$$$$\\  $$$$$$$\\  $$$$$$$\\  \n");
    gotoxy(18,8);
    printf("$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\  \n");
    gotoxy(18,9);
    printf("$$ /  \\__|$$ /  \\__|$$ /  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$ /  $$ |$$ /  $$ |$$ |  $$ |$$ |  $$ | \n");
    gotoxy(18,10);
    printf("\\$$$$$$\\  $$ |      $$ |  $$ |$$$$$$$  |$$$$$\\    $$$$$$$\\ |$$ |  $$ |$$$$$$$$ |$$$$$$$  |$$ |  $$ | \n");
    gotoxy(18,11);
    printf(" \\____$$\\ $$ |      $$ |  $$ |$$  __$$< $$  __|   $$  __$$\\ $$ |  $$ |$$  __$$ |$$  __$$< $$ |  $$ | \n");
    gotoxy(18,12);
    printf("$$\\   $$ |$$ |  $$\\ $$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ | \n");
    gotoxy(18,13);
    printf("\\$$$$$$  |\\$$$$$$  | $$$$$$  |$$ |  $$ |$$$$$$$$\\ $$$$$$$  | $$$$$$  |$$ |  $$ |$$ |  $$ |$$$$$$$  | \n");
    gotoxy(18,14);
    printf(" \\______/  \\______/  \\______/ \\__|  \\__|\\________|\\_______/  \\______/ \\__|  \\__|\\__|  \\__|\\_______/ \n");


    gotoxy(13,16);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");

    int choose;

    gotoxy(48,18);
    printf("\xDB\xDB \xB2 Choose gameplay mode \xB2 \xDB\xDB");
    gotoxy(50,20);
    printf("\xDB\xDB\xB2 1. Singleplayer mode");
    gotoxy(50,22);
    printf("\xDB\xDB\xB2 2. Multiplayer mode");
    gotoxy(50,24);
    printf("\xDB\xDB\xB2 3. return main menu");
    gotoxy(50,28);
    printf("\xDB\xDB\xB2 >>> ");
    scanf("%d",&choose);
    
    switch (choose){
        case 1 :
            sleep(3);
            scoreboard_singleplayer();
        break;

        case 2 : 
            clearScreen();
            scoreboard_multiplayer();
        break;

        case 3 :
            clearScreen(); 
            main_menu();
        break;
    }
    


}

void scoreboard_singleplayer(){

    clearScreen();
    frame();
    
    gotoxy(50,5);
    printf("\xDB\xDB\xB2 Singleplayer Scoreboard \xB2\xDB\xDB"); 

    gotoxy(48,8);
    printf(" Time/Date ");

    gotoxy(69,8);
    printf(" Username ");

    gotoxy(83,8);
    printf(" Points \n");

    

    

    FILE *file;
    char buffer[255];

    file = fopen("score.csv", "r");
    if(file == NULL) {
        printf("Error opening file!\n");
        clearScreen();
        main_menu();
    }
    while(fgets(buffer, 255, file) != NULL) {
        
        printf("\n \t\t\t\t       %s", buffer);

        
    }

    fclose(file);

    gotoxy(48,27);
    printf("\xDB\xDB\xB2 Press enter to Scoreboard Menu \xB2\xDB\xDB");
    getch();
    clearScreen();
    scoreboard();


}
void scoreboard_multiplayer(){
    clearScreen();
    frame();
    
    gotoxy(50,5);
    printf("\xDB\xDB\xB2 Multiplayer Scoreboard \xB2\xDB\xDB"); 

    gotoxy(33,8);
    printf(" Time/Date ");

    gotoxy(58,8);
    printf(" Player 1 VS Player 2 ");

    gotoxy(90,8);
    printf(" Winner \n");

    

    

    FILE *file;
    char buffer[255];

    file = fopen("multiplayerscore.csv", "r");
    if(file == NULL) {
        printf("Error opening file!\n");
        clearScreen();
        main_menu();
    }
    while(fgets(buffer, 255, file) != NULL) {
        
        printf("\n \t\t        %s", buffer);

        
    }

    fclose(file);

    gotoxy(48,27);
    printf("\xDB\xDB\xB2 Press enter to Scoreboard Menu \xB2\xDB\xDB");
    getch();
    clearScreen();
    scoreboard();

}

//Help funct.

void query_kata (){

    
    clearScreen();
    frame();

    gotoxy(55,5);
    bold();
    printf("\xDB\xDB \xB2 Wordlist \xB2 \xDB\xDB");
    reset();
    
    char sentences[][100]= {"hello", "world", "program", "coding","clock","bag","ruler","cupboard","roof","door",
                            "country","land","house","car","motorcycle","curtain","card","payment","bill","money"};
    
    int n = sizeof(sentences) / sizeof(sentences[0]);
    
      for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(sentences[i], sentences[j]) > 0) {
                char temp[100];
                strcpy(temp, sentences[i]);
                strcpy(sentences[i], sentences[j]);
                strcpy(sentences[j], temp);
            }
        }
    }

     
    //int column = 0;
    for (int i = 0; i < n; i++) {
        int k = i + 7;
        gotoxy(20,k);
        printf("%d. %s\n", i+1, sentences[i]);
        
    }

    gotoxy(48,27);
    printf("\xDB\xDB\xB2 Press enter to Main Menu \xB2\xDB\xDB");
    getch();
    clearScreen();
    main_menu();



}


int main (){
    system ("cls");
    loading_system();
   //singleplayer();
    //scoreboard_multiplayer();
   //orang_nodead_art();
   //player_1();
    //query_kata();
}
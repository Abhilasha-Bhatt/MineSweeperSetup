#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 9
char board[9][9],dboard[9][9];
void initialize(int n,char a[][n]){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=' ';
}
void placemines(){
    srand(time(NULL));
    int i=0;
    while(i<10){
        int r=rand()%size;
        int c=rand()%size;
        if(board[r][c]!='*'){
            board[r][c]='*';
            i++;
    }
}}
void placenumbers(){
    int dx[]={-1,-1,-1,0,1,1,1,0};
    int dy[]={-1,0,1,1,1,0,-1,-1};
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(board[i][j]=='*')
                continue;
            int c=0;
            for(int k=0;k<8;k++){
                int row=i+dx[k];
                int col=j+dy[k];
                if(row>=0&&row<size&&col>=0&&col<size&&board[row][col]=='*')
                    c++;
            }
            board[i][j]=c+'0';
}}}
void display(int n,char a[][n]){
    printf("\n   ");
    for(char i='a';i<='i';i++)
        printf("| \033[33m%c\033[0m ",i);
        printf("|\n");
        printf("  +-------------------------------------+\n");
        for(char i='a';i<='i';i++){
        printf(" \033[33m%c\033[0m ",i);
        for(int j=0;j<n;j++){
            if(a[i-'a'][j]=='*')
            printf("| \033[32m%c\033[0m ",a[i-'a'][j]);
            else if(a[i-'a'][j]=='F')
            printf("| \033[31m%c\033[0m ",a[i-'a'][j]);
            else if(a[i-'a'][j]=='0')
            printf("| \033[34m%c\033[0m ",a[i-'a'][j]);
            else
            printf("| \033[35m%c\033[0m ",a[i-'a'][j]);
        }
        printf("|\n");
        printf("  +-------------------------------------+\n");
}}
void openadj(int row,int col){
    if(!(row>=0&&row<9&&col>=0&&col<9)||dboard[row][col]!=' '){
        return;
    }
    dboard[row][col]=board[row][col];
    if(board[row][col]!='0'){
        return;
    }
    else{
        for(int x=-1;x<=1;x++){
            for(int y=-1;y<=1;y++)
                if(x!=row||y!=col&&dboard[row][col]==' ')
                    openadj(row+x,col+y);
        }
    }
}
int opencell(int row,int col){
    if(board[row][col]=='*'){
        dboard[row][col]='*';
        return 1;}
    else{
        openadj(row,col);
        return 0;
    }
}
void flagcell(int row,int col,int* flag){
    if(dboard[row][col]==' '){
        dboard[row][col]='F';
        (*flag)--;}
    else if(dboard[row][col]=='F')
        dboard[row][col]=' ';
}
int win(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j] != '*' && dboard[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}
void play(){
    int loss=0;char ch=' ';
    int flag=5;
    do{
    system("cls");
    
printf(".___________. __  .___  ___.  _______    .___________.  ______      .______    __           ___   ____    ____\n");
printf("|           ||  | |   \\/   | |   ____|   |           | /  __  \\     |   _  \\  |  |         /   \\  \\   \\  /   /\n");
printf("`---|  |----`|  | |  \\  /  | |  |__      `---|  |----`|  |  |  |    |  |_)  | |  |        /  ^  \\  \\   \\/   /\n");
printf("    |  |     |  | |  |\\/|  | |   __|         |  |     |  |  |  |    |   ___/  |  |       /  /_\\  \\  \\_    _/\n");  
printf("    |  |     |  | |  |  |  | |  |____        |  |     |  `--'  |    |  |      |  `----. /  _____  \\   |  |\n");     
printf("    |__|     |__| |__|  |__| |_______|       |__|      \\______/     | _|      |_______|/__/     \\__\\  |__|\n");    
 printf("\n\n\n");

        printf("\nFLAGS LEFT= %d\n",flag);
        display(size,dboard);
        char row,col;    
        printf("Enter row and column (a-i): ");
        scanf(" %c %c",&row,&col);
        fflush(stdin);
        if(!(row>='a'&&row<='i'&&col>='a'&&col<='i'))
            printf("\t\t\n!!INVALID INPUT!!");
        else{
            printf("Enter 'O' to open the cell and 'F' to flag or unflag the cell or 'Q' to quit: ");
            fflush(stdin);
            scanf(" %c",&ch);
            if(ch=='O'){
                loss=opencell(row-'a',col-'a');
                if(loss){
                    system("cls");
                    printf("\nFLAGS LEFT= %d\n",flag);
                    display(size,dboard);
                    printf(" __  __   __ __   ___   __ __      __ __  ____  ______       ____       ___ ___  ____  ____     ___   __  __\n");                             
printf("|  ||  | |  |  | /   \\ |  |  |    |  |  ||    ||      |     /    |     |   |   ||    ||    \\   /  _] |  ||  |\n");                        
printf("|  ||  | |  |  ||     ||  |  |    |  |  | |  | |      |    |  o  |     | _   _ | |  | |  _  | /  [_  |  ||  |\n");                           
printf("|__||__| |  ~  ||  O  ||  |  |    |  _  | |  | |_|  |_|    |     |     |  \\_/  | |  | |  |  ||    _] |__||__|\n");                           
printf(" __  __  |___, ||     ||  :  |    |  |  | |  |   |  |      |  _  |     |   |   | |  | |  |  ||   [_   __  __\n");                             
printf("|  ||  | |     ||     ||     |    |  |  | |  |   |  |      |  |  |     |   |   | |  | |  |  ||     | |  ||  |\n");                            
printf("|__||__| |____/  \\___/  \\__,_|    |__|__||____|  |__|      |__|__|     |___|___||____||__|__||_____| |__||__|\n");                            
printf("\n\n\n");
break;
                }
            }
            else if(ch=='F'){
                if(flag!=0&&(dboard[row-'a'][col-'a']==' '||dboard[row-'a'][col-'a']=='F'))
                flagcell(row-'a',col-'a',&flag);
                else if(flag==0){
                    printf("\t\t\n!!NO MORE FLAGS LEFT!!");
                }
                else    printf("\t\t!!TRY VALID MOVE!!");
            }
        }
    }while(loss!=1&&win()!=1&&ch!='Q');
    system("cls");
    printf("\nFLAGS LEFT= %d\n",flag);
        display(size,dboard);
    if(loss) {  printf(" __  __   __ __   ___   __ __      __ __  ____  ______       ____       ___ ___  ____  ____     ___   __  __\n");                             
printf("|  ||  | |  |  | /   \\ |  |  |    |  |  ||    ||      |     /    |     |   |   ||    ||    \\   /  _] |  ||  |\n");                        
printf("|  ||  | |  |  ||     ||  |  |    |  |  | |  | |      |    |  o  |     | _   _ | |  | |  _  | /  [_  |  ||  |\n");                           
printf("|__||__| |  ~  ||  O  ||  |  |    |  _  | |  | |_|  |_|    |     |     |  \\_/  | |  | |  |  ||    _] |__||__|\n");                           
printf(" __  __  |___, ||     ||  :  |    |  |  | |  |   |  |      |  _  |     |   |   | |  | |  |  ||   [_   __  __\n");                             
printf("|  ||  | |     ||     ||     |    |  |  | |  |   |  |      |  |  |     |   |   | |  | |  |  ||     | |  ||  |\n");                            
printf("|__||__| |____/  \\___/  \\__,_|    |__|__||____|  |__|      |__|__|     |___|___||____||__|__||_____| |__||__|\n");                            
printf("\n\n\n");
    }
    else if(win){   
        printf("\n\n __   __  __ __   ___   __ __      __    __  ____  ____    __  __\n");
printf("|  ||  | |  |  | /   \\ |  |  |    |  |__|  ||    ||    \\  |  ||  |\n");
printf("|  ||  | |  |  ||     ||  |  |    |  |  |  | |  | |  _  | |  ||  |\n");
printf("|__||__| |  ~  ||  O  ||  |  |    |  |  |  | |  | |  |  | |__||__|\n");
printf(" __  __  |___, ||     ||  :  |    |  `  '  | |  | |  |  |  __  __\n");
printf("|  ||  | |     ||     ||     |     \\      /  |  | |  |  | |  ||  |\n");
printf("|__||__| |____/  \\___/  \\__,_|      \\_/\\_/  |____||__|__| |__||__|\n\n\n");

    }
    else if(ch=='Q') printf("\n\t\t!!QUITING GAME!!\n");
    printf("\n ___  ___  _____  _____  __  __  _____   _____  __ __  _____  _____  ___  ___\n/   \\/   \\/   __\\/  _  \\/  \\/  \\/   __\\ /  _  \\/  |  \\/   __\\/  _  \\/   \\/   \\\n\\___/\\___/|  |_ ||  _  ||  \\/  ||   __| |  |  |\\  |  /|   __||  _  <\\___/\\___/\n<___><___>\\_____/\\__|__/\\__ \\__/\\_____/ \\_____/ \\___/ \\_____/\\__|\\_/<___><___>\n");
}
int main(){
    initialize(size,board);
    initialize(size,dboard);
    placemines();
    placenumbers();
    int loss=0;char ch=' ';
    int flag=5;   int c;
    do{
    system("cls");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n:                                                                         :\n: ___  ___ __ __  __  ____     __  __    __  ____  ____ ____   ____ ____  :\n: ||\\\\//|| || ||\\ || ||       (( \\ ||    || ||    ||    || \\\\ ||    || \\\\ :\n: || \\/ || || ||\\\\|| ||==      \\\\  \\\\ /\\ // ||==  ||==  ||_// ||==  ||_// :\n: ||    || || || \\|| ||___    \\_))  \\V/\\V/  ||___ ||___ ||    ||___ || \\\\ :\n:                                                                         :\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n\n");
    printf("PRESS [1] TO KNOW RULES OF GAME\nPRESS [2] TO PLAY GAME\nPRESS [0] TO EXIT\nENTER YOUR CHOICE: ");
    scanf("%d",&c);
    switch(c){
        case 1:
                system("cls");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n:                                                                         :\n: ___  ___ __ __  __  ____     __  __    __  ____  ____ ____   ____ ____  :\n: ||\\\\//|| || ||\\ || ||       (( \\ ||    || ||    ||    || \\\\ ||    || \\\\ :\n: || \\/ || || ||\\\\|| ||==      \\\\  \\\\ /\\ // ||==  ||==  ||_// ||==  ||_// :\n: ||    || || || \\|| ||___    \\_))  \\V/\\V/  ||___ ||___ ||    ||___ || \\\\ :\n:                                                                         :\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n\n");
                printf("\n\t\t~~~RULES FOR GAME~~~\n");
                printf("-> Goal: Uncover all non-mine cells without hitting a mine.\n-> Revealing: Numbers show nearby mines; empty cells reveal neighbors.\n-> Flags: You have 5 flags to mark suspected mines.\n-> Win: Reveal all safe cells to win; hitting a mine ends the game.\n");
                printf("PRESS [1] TO CONTINUE\nPRESS [0] TO EXIT\nENTER YOUR CHOICE: ");
                scanf("%d",&c);
                break;
        case 2:
            play();
            while(c!=0){
            printf("Enter 0 to exit: ");
            scanf("%d",&c);
            }
            break;
    }
    }while(c!=0&&c!=2);
}
#include <stdio.h>
#include <stdlib.h>

/*

    this is a simple C vulnerable windows program for practicing and learning windows exploitation.
    this made for beginners in windows exploitation development and reversing binary world like me.
    fell free to use it or edit it

*/

const int NAMESIZE = 20;

void readFile(char filename[NAMESIZE]){
    //read a file
    char cmd[] = "type ";
    printf(".. Reading the File %s..\n", filename);
    strcat(cmd, filename); //strcat function take the second argument and added it on the variable which in first argument
    system(cmd); //system function basicly execute the commands on the computer
    printf("\n#########################################################\n");
}

void deleteFile(char filename[NAMESIZE]){
    // delete a file
    char cmd[] = "del ";
    strcat(cmd, filename);
    system(cmd);
    printf("the File %s deleted successfully.\n", filename);
    printf("#########################################################\n");
}

void copyFile(char filename[NAMESIZE], char newFilename[NAMESIZE]){
    //copy a file to other new file
    char cmd[] = "copy ";
    strcat(filename, " ");
    strcat(filename, newFilename);
    strcat(cmd, filename);
    system(cmd);
    printf("the File copied successfully to %s .\n", filename);
    printf("#########################################################\n");
}

int main()
{
    printf("#########################################################\n");
    printf("##### welcome in the vulnerable application testing #####\n");
    printf("##### deal with files program                       #####\n");
    printf("##### for reading a file write 'r'                  #####\n");
    printf("##### for reading a file write 'd'                  #####\n");
    printf("##### for copying a file write 'c'                  #####\n");
    printf("#########################################################\n");
    char option;
    printf("######## Enter An Option (r/d/c): ");
    scanf("%c", &option);
    char file[100];
    printf("######## Enter the path of your file: ");
    scanf("%s", &file);
    if (option == 'r'){
        readFile(file);
    }
    else if (option == 'd'){
        deleteFile(file);
    }
    else if (option == 'c'){
        char newname[100];
        printf("######## Enter new file name: ");
        scanf("%s", newname);
        copyFile(file, newname);
    }
    else {
        printf("######## Unknown option for the file: %s ######## ", file);
    }
    return 0;
}

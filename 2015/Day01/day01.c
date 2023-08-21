#include <stdio.h>

int main() {
    //create pointer to file to ingest given information from problem
    FILE *inputFile;
    int currentChar;
    int count = 0;
    int position = 0;

    //open the given input file in "read" mode
    inputFile = fopen("input.txt","r");

    while(1) {
        //get current char to start evaulation
        currentChar = fgetc(inputFile);

        //check if we are at end of file
        //and execute finishing code
        if (feof(inputFile)) {
            if (count > 0) {
                printf("\nSanta needs to go %i floors up!\n", count);
                break;
            }
            else if (count < 0) {
                printf("\nSanta needs to go %i floors down!\n", count);
                break;
            }
            else {
                printf("\nEither the file was empty or Santa needs to go nowhere...\n");
                break;
            }
        }
        
        if (currentChar == '(') {
            count++;
        }
        else {
            count--;
        }

        position++;

        //part 2 addition
        if (count == -1) {
            printf("\nPosition %i\n", position);
        }
    }

    //close the file in use now that it is not needed
    fclose(inputFile);
    
    return 0;
}

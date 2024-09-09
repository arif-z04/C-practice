#include <stdio.h>


int main(){

    // File pointer
    FILE *fh_output;

    fh_output = fopen("01_program.txt", "w");
    // fopen("File name", "mode");
    // modes: r=reading, rb=binary reading (for existing file)            
    //        w=writing, wb=binary writing
    //        a=appending, ab=binary appending
    //        r+ = reading and writing, rb+ = binary reading and writing
    //        (for existing file)
    //        w+ = reading and writing, wb+ = binary reading and writing 
    //        a+/ab+ = Read
    fputs("Pussy\n", fh_output);
    fclose(fh_output);
    
    return 0;
}
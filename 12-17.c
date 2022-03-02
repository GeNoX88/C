#include <stdio.h>

int main(void)
{
    struct data
    {
        char name[10];
        int math;
    } student[3] = {{"Andy", 100}, {"Cinna", 99}, {"Max", 60}};
    // printf("\n%s: %d\n%s: %d\n%s: %d\n", student->name, student->math, (student + 1)->name, (student + 1)->math, (student + 2)->name, (student + 2)->math);

    FILE *fptr = fopen("student.bin", "wb");

    if (fptr != NULL)
    {
        fwrite(student, sizeof(student), 1, fptr);
        printf("writing\n");
    }
    else
    {
        printf("fopen function failed, fptr==NULL\n");
    }
    int fc = fclose(fptr);
    if (fc == 0)
    {
        printf("fclose succeed\n");
    }
    else
    {
        printf("fclose fail\n");
    }
    //***********************************************************
    fptr = fopen("student.bin", "rb");
    struct data tmp[3];
    if (fptr != NULL)
    {
        fread(tmp, sizeof(tmp), 1, fptr);
        // fwrite(&a, sizeof(int), 1, fptr);
        // fwrite(&b, sizeof(int), 1, fptr);
        printf("reading\n%s: %d\n%s: %d\n%s: %d\n", tmp->name, tmp->math, (tmp + 1)->name, (tmp + 1)->math, (tmp + 2)->name, (tmp + 2)->math);
    }
    else
    {
        printf("fopen function failed, fptr==NULL\n");
    }
    fc = fclose(fptr);
    if (fc == 0)
    {
        printf("fclose succeed");
    }
    else
    {
        printf("fclose fail");
    }
}
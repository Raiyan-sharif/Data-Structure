#include <cstdio>

struct Student {
    int id;
    char name[20];
    int marks;
};

void option() {
    printf("press %d for getting data of the 10 students.\n", 1);
    printf("press %d for getting the highest and Lowest mark student.\n", 2);
    printf("press %d for searching any student.\n", 3);
    printf("\nEnter your choice: ");
}
int StrLen(char s[]) {
    int c= 0;
    for(int i = 0; s[i] != '\0'; ++i) {
        c++;
    }
    return c;
}

int is_equal(char s1[], char s2[]) {
    if( StrLen(s1) != StrLen(s2) ) {
        return 0;
    }
    else {
        for(int i = 0; s1[i] != '\0'; ++i) {
            if(s1[i] != s2[i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {

    Student std1[10];
    printf("Input data for 10 students :\n");

    for(int i = 0; i < 10; ++i) {

                printf("Enter student id: ");
                scanf("%d", &std1[i].id);
                printf("Enter student name: ");
                scanf("%s", &std1[i].name[0]);
                printf("Enter student marks: ");
                scanf("%d", &std1[i].marks);
            }

    while(1) {


        int n;
        option();
        scanf("%d", &n);

        if(n==1){

            for(int i = 0; i < 10; ++i) {
                printf("Studen ID: %d\n", std1[i].id);
                printf("Studen Name: %s\n", std1[i].name);
                printf("Studen Marks: %d\n", std1[i].marks);
            }
            }
        if(n==2){
            int maximum, minimum, index_of_max, index_of_min;

            for(int i = 0; i < 10; ++i) {
                if(!i) {
                    maximum = std1[i].marks;
                    index_of_max = i;
                }
                else {
                    if( maximum < std1[i].marks ) {
                        maximum = std1[i].marks;
                        index_of_max = i;
                    }
                }
            }

            for(int i = 0; i < 10; ++i) {
                if(!i) {
                    minimum = std1[i].marks;
                    index_of_min = i;
                }
                else {
                    if( minimum > std1[i].marks ) {
                        minimum = std1[i].marks;
                        index_of_min = i;
                    }
                }
            }

            printf("Highest mark: %s (%d marks)\n", std1[index_of_max].name, std1[index_of_max].marks);
            printf("Lowest  mark: %s (%d marks)\n", std1[index_of_min].name, std1[index_of_min].marks);
            }
        if(n==3){
            char name[20];
            int i;
            printf("Enter name of the student: ");
            scanf("%s", &name[0]);
            for(i = 0; i < 10; ++i) {
                if( is_equal(std1[i].name, name) ) {
                    printf("Student found!\n");
                    printf("Id: %d\n", std1[i].id);
                    printf("Name: %s\n", std1[i].name);
                    printf("Marks: %d\n", std1[i].marks);

                }
            }
            if(i == 10) {
                printf("Student not found!\n");
            }
        }


    }

    return 0;
}


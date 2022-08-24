#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>


#define MAX_NAME_LENGTH 20
#define MAX_STUDENTS 20

typedef struct {
   uint8_t grade;
   char name[MAX_NAME_LENGTH];
} student_t;

typedef struct {
   size_t count;
   student_t students[MAX_STUDENTS];
} roster_t;


roster_t roster;

void init_roster(roster_t *importedRoster){
    *importedRoster = roster;
}


int add_student(roster_t *importedRoster, char name[], int grade){
    int is_valid = 0;
    student_t student;
    student.grade = grade;

    if(importedRoster->count > 0){
        for(int i = 0; i < importedRoster->count; i++){
            printf("student name %s and %s and %d\n", importedRoster->students[i].name, name, (importedRoster->students[i].name == name));
            
            if(importedRoster->students[i].grade == grade && importedRoster->students[i].name == name){
                
                return 0;
            }
        }
    }


    
    strcpy(student.name, name);
    importedRoster->students[importedRoster->count] = student; 
    importedRoster->count += 1;
    return 1;
}

static void test_student_added_to_roster(void)
{
   roster_t expected = { 1, { (student_t){ 2, "Aimee" } } };
   roster_t actual;
   init_roster(&actual);
   add_student(&actual, "Aimee", 2);
   printf("is it fine %d", add_student(&actual, "Aimee", 2));
}


int main(){
    test_student_added_to_roster();
    // printf("data %s", roster.students[0].name);

    return 0;
}
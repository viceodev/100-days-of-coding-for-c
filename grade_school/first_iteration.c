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

roster_t roster_init;

void init_roster(roster_t *importedRoster){
    *importedRoster = roster_init;
}


void bubble_sort(roster_t *roster){
    int count = roster->count - 1;

    for(int outer = count; outer >= 0; outer--){
        for(int inner = count; inner >= 0; inner--){
            if(
                (roster->students[inner].grade < roster->students[outer].grade) 

                || 

                (roster->students[inner].name[0] < roster->students[inner].name[0])
            ){

                student_t temp_var = roster->students[inner];
                roster->students[inner] = roster->students[outer];
                roster->students[outer] = temp_var;
            }
        }
    }
}

int add_student(roster_t *importedRoster, char name[], int grade){
    int is_valid = 0;
    int is_same_name = 0;
    student_t student;
    student.grade = grade;

    if(importedRoster->count > 0){
        for(int i = 0; i < importedRoster->count; i++){
            int count = 0;

            if(name[0] == importedRoster->students[i].name[0]){
                is_same_name = 1;
            }

            while(name[count] || importedRoster->students[i].name[count]){

                student.name[count] = name[count];


                if((importedRoster->students[i].name[count] == name[count]) && is_same_name){
                    is_same_name = 1;
                }else{
                    is_same_name = 0;
                }

                count++;
            }
        }
    }else{
        strcpy(student.name, name);
    }

    if(is_same_name){
        return 0;
    }else{
        importedRoster->students[importedRoster->count] = student; 
        importedRoster->count += 1;
        bubble_sort(importedRoster);
        return 1;
    }    
}

roster_t get_grade(roster_t *roster, uint8_t desired_grade){
    if(roster->count > 0){
        roster_t desired_grade_roster;

        for(int i = 0; i < roster->count; i++){
            if(roster->students[i].grade == desired_grade){
                desired_grade_roster.students[desired_grade_roster.count] = roster->students[i];
                desired_grade_roster.count++;
            }
        }

        return desired_grade_roster;
    }else{
        return *roster;
    }
}

static void test_student_added_to_roster(void)
{
   roster_t expected = { 1, { (student_t){ 2, "Aimee" } } };
   roster_t actual;
   init_roster(&actual);
   printf("is it fine %d\n", add_student(&actual, "Aimeee", 2));
   printf("is it fine %d\n", add_student(&actual, "Aimeee", 2));
   printf("name second %s", actual.students[1].name);
}

static void test_students_are_sorted_by_grades_and_then_by_names_in_roster(void)
{
    roster_t expected = { 7,
                            { (student_t){ 1, "Anna" }, (student_t){ 1, "Barb" },
                            (student_t){ 1, "Charlie" },
                            (student_t){ 2, "Alex" }, (student_t){ 2, "Peter" },
                            (student_t){ 2, "Zoe" }, (student_t){ 3, "Jim" } } };
    roster_t actual;
    init_roster(&actual);
    add_student(&actual, "Peter", 2);
    add_student(&actual, "Anna", 1);
    add_student(&actual, "Barb", 1);
    add_student(&actual, "Zoe", 2);
    add_student(&actual, "Alex", 2);
    add_student(&actual, "Jim", 3);
    add_student(&actual, "Charlie", 1);
  
    for(int i = 0; i < actual.count; i++){
        printf("My Name is %s and my grade is %d. I am at index %d\n", actual.students[i].name, actual.students[i].grade, i);
    }
}

static void test_grade_empty_if_no_students_in_grade(void)
{
   uint8_t desired_grade = 1;
   roster_t roster;
   init_roster(&roster);
   add_student(&roster, "Peter", 2);
   add_student(&roster, "Zoe", 2);
   add_student(&roster, "Alex", 2);
   add_student(&roster, "Jim", 3);
   roster_t actual = get_grade(&roster, 2);

    printf("count is %d", actual.count);
}

int main(){
    // test_student_added_to_roster();
    // test_students_are_sorted_by_grades_and_then_by_names_in_roster();
    test_grade_empty_if_no_students_in_grade();
    // printf("data %s", roster.students[0].name);

    return 0;
}
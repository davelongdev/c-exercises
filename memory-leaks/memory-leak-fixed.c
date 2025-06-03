// a program with the memory leak on line 31 fixed to run valgrind on

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_EMPLLOYEES 1000

struct employee_t {
    int id;
    int income;
    bool staff;
};

int initialize_employee(struct employee_t *e) {
    static int numEmployees = 0;
    numEmployees++;

    e->id = numEmployees;
    e->income = 0;
    e->staff = false;

    return numEmployees;
}

int main() {

    // this value came from the database header
    int n = 4;

    struct employee_t *employees = malloc(sizeof(struct employee_t)*n);
    if (employees == NULL) {
        printf("the allocator failed\n");
        return -1;
    }

    for (int i =0; i <n; i++) {
        int id = initialize_employee(&employees[i]);
        printf("new employee, ID is %d\n", id);
    }
    
    free(employees);
    employees = NULL;
}

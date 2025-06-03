#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

struct employee_t {
   int id;
   int income;
   bool staff;
};

void initialize_employee(struct employee_t *e) {
   e->id = 0;
   e->income = 0;
   e->staff = true;
}

int main() {
   struct employee_t employees[MAX_EMPLOYEES];

   initialize_employee(&employees[0]);

   printf("employee 0 id: %d\n", employees[0].id);
   printf("number of employees in employees array: %lu\n", sizeof(employees)/sizeof(employees[0]));

   return 0;
}

// int main() {
//    int x = 3;
//    int *px = &x;
//
//    printf("%d\n", *px);
//    printf("%p", px);
// }

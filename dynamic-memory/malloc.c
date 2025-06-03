#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct employee_t {
   int id;
   int income;
   bool staff;
};

void initialize_employee(struct employee_t *e) {
   e->id = 0;
   e->income = 0;
   e->staff = false;

   return;
}

int main() {

   // this value could come from the database
   int n = 4;
   struct employee_t *employees = malloc(
      sizeof(struct employee_t)*n
      );

   // check to make sure that pointer is not null (if malloc fails)
   if (employees == NULL) {
      printf("the allocator failed");
      return -1;
   }

   initialize_employee(&employees[0]);
   
   printf("%d\n", employees[0].income);

   free(employees);
   employees = NULL;

   return 0;
}

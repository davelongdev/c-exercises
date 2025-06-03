#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct employee_t {
   int id;
   int income;
   bool staff;
};

int initialize_employee(struct employee_t *e) {

   // initialize static var
   static int numEmployees = 0;

   // incriment static var
   numEmployees++;

   e->id = numEmployees;
   e->income = 0;
   e->staff = false;

   return numEmployees;
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

   for (int i = 0; i < n; i++) {
      int id = initialize_employee(&employees[i]);
      printf("new employee, ID is %d\n", id);
   }

   free(employees);
   employees = NULL;

   return 0;
}

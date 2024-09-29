#include <stdio.h>
#include <stdbool.h>

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
   struct employee_t Ralph;

   initialize_employee(&Ralph);

   printf("%d\n", Ralph.staff);

   return 0;
}

// int main() {
//    int x = 3;
//    int *px = &x;
//
//    printf("%d\n", *px);
//    printf("%p", px);
// }

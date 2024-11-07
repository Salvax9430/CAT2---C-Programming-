#include <stdio.h>
#include <string.h>

//Reg: CT101/G/23627/24
//AUTHOR: SIFUNA SIMIYU BRAMUEL 
//DATE: 6/11/2024

struct Employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
    
};

int main() {
    
    struct Employee employee;

    
    strcpy(employee.name, "John Doe");
    employee.id=1234;
    employee.salary = 55000.50;
    strcpy(employee.department, "Human Resources");
    strcpy(employee.email, "john.doe@company.com");

    
    printf("Name: %s\n", employee.name);
    printf("id: %d\n", employee.id);
    printf("Department: %s\n", employee.department);
    printf("Salary: %.2f\n", employee.salary);
    printf("Email: %s\n", employee.email);

    return 0;
}

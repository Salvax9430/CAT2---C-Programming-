#include <stdio.h>

//Reg: CT101/G/23627/24
//Author: Sifuna Simiyu Bramuel 
//Date: 7/11/2024

int main() {
    float Hoursworked, Hourlywage, Grosspay, Netpay, Taxes;
    float overtimehours , overtimepay ;
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &Hoursworked);
    printf("Enter hourly wage: ");
    scanf("%f", &Hourlywage);
    
    
    if (Hoursworked > 40) {
        overtimehours = (Hoursworked - 40);
        
       overtimepay = (overtimehours * Hourlywage * 1.5);
       
        Grosspay = ((40 * Hourlywage) + overtimepay);
        
    } else {
        Grosspay = (Hoursworked * Hourlywage);
    }
    
    
    if (Grosspay <= 600) {
        Taxes = (Grosspay * 0.15);
        
    } else {
        Taxes = ((600 * 0.15) + ((Grosspay - 600) * 0.20));
    }
    
    
    Netpay = (Grosspay - Taxes);
    
    
    
    
    printf("Hours worked: %.2f\n", Hoursworked);
    
    printf("Overtime hours: %.2f\n", overtimehours);
    
    printf("Gross pay: $%.2f\n", Grosspay);
    
    printf("Taxes: $%.2f\n", Taxes);
    
    printf("Net pay: $%.2f\n", Netpay);
    
    
    return 0;
}

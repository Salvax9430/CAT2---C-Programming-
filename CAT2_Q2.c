#include <stdio.h>

// Reg : CT101/G/23627/24
//Author: Bramuel sifuna simiyu 
// Date:7/11/2024

int main() {
    
    int scores[2][2] = { {65, 92},{35, 70},{84, 72},
        {59, 67}  };
        
    for (int k = 0; k < 2; k++) {
    
        for (int m = 0; m < 2; m++) {
        
            printf("%d ", scores[k][m]);
        }
        printf("\n");
    }

    return 0;
    }
        
 
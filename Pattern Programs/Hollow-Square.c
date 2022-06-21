/*
 Hollow Square

 given a side length create a hollow square of LxL
*/

#include <stdio.h>
#include <string.h>

 
// helper func
void println(int len);

// Solution :
int main(){
    
    int len;

    printf("Please enter the side length of the square\n");
    scanf("%d", &len);
    
    char gap[len];

    memset(gap, ' ', len);
    gap[len] = '\0';

    println(len);
    
    for(int i = 0; i < len; i++)
        printf("*%s*\n", gap);
                 
    println(len);

    return 0;
}

// helper func
void println(int len){
    printf(" ");
    for(int i = 0; i < len; i++)
        printf("*");
        
    printf("\n");

}
 

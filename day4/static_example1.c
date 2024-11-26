#include <stdio.h>
int nonStaticFunction() {
    int i = 0;
    i += 4;
    return i;
}
int staticFunction() {
    static int i = 0;
    i += 4;
    return i;
}
int main() {
    int var = 0;
    
    /*  itr 1  : 
        initial: i = 0
        i += 4
        return 4
        control goes out to the caller function:
            function returns 4
            function end
        i reset to i = 0    // As non static variable scope is limited to the function as it leaves the function its value is reset.
        
        
        itr 2  : 
        initial: i = 0      // as i is non static it is created again
        i += 4
        return 4
        control goes out to the caller function:
            function returns 4
            function end
        i reset to i = 0
    */

    var = nonStaticFunction();
    printf("Var = %d \n", var);
    var = nonStaticFunction();
    printf("Var = %d \n", var);
    var = nonStaticFunction();
    printf("Var = %d \n", var);
    var = nonStaticFunction();
    printf("Var = %d \n", var);


    /*  
        itr 1  : 
        initial: i = 0
        i += 4
        return 4
        control goes out to the caller function:
            function returns 4
            function end
        i reset to i = 4

        itr 2  : 
        initial: i = 4      // as i is static it is not created again
        i += 4
        return 8
        control goes out to the caller function:
            function returns 4
            function end
        i reset to i = 8    // as i is static variable its scope is limited to the program and not to its function so it will not reset/created again until program completes. 
    */

    var = staticFunction();
    printf("Var = %d \n", var);
    var = staticFunction();
    printf("Var = %d \n", var);
    var = staticFunction();
    printf("Var = %d \n", var);
    var = staticFunction();
    printf("Var = %d \n", var);
}


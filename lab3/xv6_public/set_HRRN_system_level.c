#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int priority = atoi(argv[1]);
    set_HRRN_system_level(priority);
    exit();
} 

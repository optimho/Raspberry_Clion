#include <iostream>
#include <unistd.h>
#include <cstring>

int main(){

    char hostname[255];
    memset(hostname,0, sizeof(hostname));
    gethostname(hostname, sizeof(hostname));

    std::cout<<"Hello from host "<<hostname<<std::endl;


}

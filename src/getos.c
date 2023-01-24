#include "./getos.h"
char* get_path(){
    return getenv("PATH");
}
char* get_user(){
    return getenv("USER");
}
long uptime(){
    struct sysinfo s_info;
    int error = sysinfo(&s_info);
    if(error != 0){
        printf("code error\n");
    }
    return s_info.uptime/60;
}

#include "./src/getos.c"
int main(int argc,char** argv,char** argEnviroument){
    get_ascci();
    printf("                           %s\n",get_path());
    printf("%s                           %s\n",get_ascci(),get_user());
    printf("                           %ld minutes\n",uptime());
}

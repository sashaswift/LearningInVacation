#include "tool.h"
void invisiblePn(){
    printf("请输入密码（长度为1~8）：");
    int i=0;
    while((pn[i]=getch())!='\r'){
        putchar('*');
        i++;
    }
    pn[i]='\0';
    printf("\n");
}
void invisiblePnForManager(){
    printf("请输入密码（长度为1~19）：");
    int i=0;
    while((Pn[i]=getch())!='\r'){
        putchar('*');
        i++;
    }
    Pn[i]='\0';
    printf("\n");
}
 time_t stringToTime(char *s){
   struct tm date1;
    time_t tresult;
    char *date;
    date=strtok(s,"-");
    date1.tm_year=atoi(date)-1900;
    date=strtok(NULL,"-");
    date1.tm_mon=atoi(date)-1;
    date=strtok(NULL,"-");
    date1.tm_mday=atoi(date);
    date1.tm_hour=0;
    date1.tm_min=0;
    date1.tm_sec=0;
    date1.tm_isdst=0;
    tresult=mktime(&date1);
    return tresult;
 }
void stringfortime(time_t tt){
    struct tm *TT;
    char string[50];
    TT=localtime(&tt);
    strftime(string,sizeof(string),"%Y-%m-%d %H:%M:%S",localtime(&tt));
    printf("%s",string);

}

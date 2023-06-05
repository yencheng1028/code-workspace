#include <stdio.h>

int main(void)
{
    printf("gcc guide.c -o guide \n");
    printf("-o 表示輸出要變成哪個檔名 \n");

    printf("cd 資料夾");
    printf("git init");
    printf("touch 開新檔案");
    
    //printf(" git status \n");
    printf("git add . ");
    printf("git commit -m \" {名稱} \" ");
    printf("code . "); //開啟vscode
    printf("git log 查看commit 記錄");
    //github create new repository
    printf("git remote add origin https://github.com/yencheng1028/homework-code.git");
    // 遠端數據庫 名稱{master} 
    printf("git push -u origin master");

    printf(" ");
        
    return 0;
}
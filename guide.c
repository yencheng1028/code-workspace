#include <stdio.h>

int main(void)
{
    printf("gcc guide.c -o guide \n");
    printf("-o 表示輸出要變成哪個檔名 \n");

    printf("cd 資料夾");
    printf("git init");
    printf("touch 開新檔案");
    //printf("code . "); // 開啟vscode
    // printf(" git status \n");
    printf("git add . ");
    printf("git commit -m \" {名稱} \" ");
    
    printf("git log 查看commit 記錄");
    //github create new repository
    printf("註冊遠端儲存庫: git remote add origin {遠端儲存庫網址}");
    printf("git push -u origin master");
    /*
        更新資料到遠端 master 分支：git push -u origin master
        -u 是指他預設會推到哪個遠端數據庫服務
        origin 可以改它的遠端數據庫名稱，例如 git push -u github69 master
    */
    printf("git log ");
    printf("git checkout {編號} ");
    printf(" git checkout master");
    
    printf(" ");
        
    return 0;
}
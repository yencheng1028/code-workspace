#include <stdio.h>

int main(void)
{
    printf("cd 資料夾");
    printf("gcc guide.c -o guide \n");

// -o 表示輸出要變成哪個檔名

    printf("cd 資料夾");
    printf("git init");
    printf("touch 新檔名");

//printf("code . "); // 開啟vscode
//printf(" git status \n");

    printf("git add . ");
    printf("git add [檔名] ");
    // 加入索引目錄 .加全部檔案

    printf("git commit -m [名稱] ");
    printf("git log ");

// 查看commit 記錄
//  github create new repository
//  註冊遠端儲存庫

    printf(" git remote add origin {遠端儲存庫網址}");
    printf("git push -u origin master");

/*
        更新資料到遠端 master 分支：git push -u origin master
        -u 是指他預設會推到哪個遠端數據庫服務
        origin 可以改它的遠端數據庫名稱，例如 git push -u github69 master
*/
    printf("git log ");
    printf("git checkout {編號} "); // 回頭觀看版本內容
    printf(" git checkout master(分支名稱)"); // 返回最新的版本
    printf(" ");
    printf(" ");



    printf(" ");

    return 0;
}
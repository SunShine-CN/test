#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int a;
    cout << "hello world" << endl;
    printf("sunjun is good!\n");
    scanf("%d",&a);
    printf("%d u\r\n",a);
    system("pause");
    return 0;
}




/*
git init    初始化本地仓库
git config --global user.name   配置用户名
git config --global user.email  配置邮箱
git remote add origin code@github.com   绑定本地和远程仓库
git pull    拉取远程仓库的变化同步本地的状态
git add     确认本地仓库的变化到本地缓存区
git commit  确认本地缓存区的内容，可以准备push
git push    提交本地仓库到远程仓库
git status  确认本地缓存区的状态
git diff --cached查看已缓存的改动
git diff HEAD查看全部改动
git diff --stat显示摘要
git commit -m ""
git commit -am ""
git reset HEAD -- 文件名
git rm
git branch name创建分支
git checkout name切换分支
git checkout -b name切换分支并立即切换到该分支
git merge 合并分支
git branch -d name删除分支
git tag -a 注解 给历史记录打上一个标签
git log --graph查看历史中什么时候出现的分支，合并
git remote查看本地仓库下存储的远端仓库
git remote add 别名 仓库地址 添加仓库地址
git fetch从远端下载新分支和数据
git pull从远端提取数据并合并到当前分支
git branch --set-upstream-to=远程主机名/远程分支名 本地分支名
git checkout -b 本地分支名 远程主机名/远程分支名
git push -u 远程主机名 本地分支名



git push 远程主机名 本地分支名：远程分支名      
可以省略远程分支名，表示将本地分支推送到远程建立了联系的分支上
如：git push origin master
命令表示将本地的master分支推送到origin的master分支
如果主机上master分支不存在，那么就会被新建
如果省略本地分支名，则表示删除远程分支


git push origin表示将当前分支推送到远程上有联系的分支上
如果当前分支只有一个追踪分支那么主机名都可以省略

如果当前分支与多个主机存在联系，那么可以用
git push -u origin master

*/

/*
 * if条件
 */

int main(){
    int inp;
    scanf("%d", &inp);

    if(inp <10){
        printf("kull %d", inp);
    }
    else {
        printf("no\n");
    }
    return 0;
}

// 1.比较（关系）运算符如== ,<， 优先级比加减低，但是比赋值高
//      如7>3+4 // 3+4先算
// 2.== 和!= 的优先级最低，如==优先级低于<

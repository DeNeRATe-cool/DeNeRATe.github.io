//data producer
#include <iostream>
#include <cstdio> 
#include <cstring>
#include <algorithm>
#include <cmath>

#define LL long long
#define FOR(i,A,B) for(int i=A;i<=B;i++)
#define BOR(i,A,B) for(int i=A;i>=B;i--)
#define FOR_SIDE(i,A) for(int i=Head[A];i;i=Next[i])
#define Cl(X,Y) memset((X),(Y),sizeof(X))
#define Lowbit(X) (X&(-X))
#define INF 0x3f3f3f3f
using namespace std;
const int MAXn=1e5+10;

int main() {
//  File();
    char Name[MAXn];//制造出来的数据的名字
    int Num=50;//制造数据组数
    srand(time(NULL));
    FOR(i,1,Num) {
        sprintf(Name,"%d.in",i);
        freopen(Name,"w",stdout);
        /*
        int Temp=rand();
        printf("%d\n",Temp);
        */ //这里是输出文件的主程序
        fclose(stdin);

        sprintf(Name,"%d.out",i);
        freopen(Name,"w",stdout);
        /*
        printf("%d\n",Temp);
        */ //这里是通过算法得到最终答案的主程序
        fclose(stdin);
    }
//  fclose(stdin); fclose(stdout);
    system("pause");
    return 0;
}
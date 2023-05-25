#include<bits/stdc++.h>
#define print std::cout
#define scan std::cin
#define fi first
#define se second
int n, m, xs, ys, xe, ye;
char arr[1001][1001];
bool visited[1001][1001];
int way[1001][1001];
int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
void bfs(int a, int b){
    std::queue<std::pair<int, int>> q;
    q.push({a, b});
    way[a][b]  = 0;
    while (!q.empty()){
        std::pair<int, int> tmp = q.front();
        //std::cout<<tmp.fi<<" "<<tmp.se<<"\n";
        q.pop();
        visited[tmp.fi][tmp.se] = 1;
        for (int i = 0; i<4; i++){
            int newx = tmp.fi + dx[i];
            int newy = tmp.se + dy[i];
//            std::cout<<newx<<" "<<newy<<"\n";
            if (arr[newx][newy] == '.' && visited[newx][newy] == 0 && newx >= 0 && newx <= n && newy >= 0 && newy <= m){
                q.push({newx, newy});
                way[newx][newy] = way[tmp.fi][tmp.se] + 1;
                visited[newx][newy] = 1;
            }
            if (arr[newx][newy] == 'C'){
                std::cout<<way[tmp.fi][tmp.se]+1;
                return;
            }
        }
    }
}


int main(){
    std::ios::sync_with_stdio(false);
    scan.tie(NULL);
    scan>>n>>m;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            scan>>arr[i][j];
            if (arr[i][j] == 'B'){
                xs = i;
                ys = j;
            }
        }
    }
    bfs(xs, ys);
//    for (int i = 1; i<=n; i++){
//        for (int j = 1; j<=m; j++){
//            print<<way[i][j]<<" ";
//        }
//        print<<"\n";
//    }
}

#include<iostream>
#include<list>
#include<vector>
#include<stack>

using namespace std;

class Tree {
    private:
        int nodes;
        int far;
        int max_path_length;
        int length;
        int start_node, end_node;
        list<int> *adj;
        vector<bool> visited;
        vector<int> longest_path;

    public:
        Tree () {
        }
        Tree (int nodes) {
            max_path_length = 0;
            far = 0;
            length = 0;
            adj = new list<int> [nodes];
            visited.resize(nodes, false);
            this->nodes = nodes;
        }

        void add (int src, int dst) {
            adj[src].push_back(dst);
            adj[dst].push_back(src);
        }
        void DFS_GoFarthest (int src) {

            visited[src] = true;
            for (auto& itr : adj[src]) {
                if (!visited[itr]) {
                    length++;
                    DFS_GoFarthest(itr);
                    length--;
                }
            }
            if (length > max_path_length) {
                max_path_length = length;
                far = src;
            }
        }
        void DFS_FindPath (int src) {

            visited[src] = true;
            for (auto& itr : adj[src]) {
                if (!visited[itr]) {
                    longest_path.push_back(itr);
                    if (itr == end_node) {

                        max_path_length = longest_path.size();
                        return ;
                    }
                    DFS_FindPath(itr);
                    longest_path.pop_back();
                }
            }
        }
        void MarkUnvisited () {
            fill(visited.begin(), visited.end(), false);
        }

        void Reset_PathLengths () {
            length = 0;
            max_path_length = 0;
        }

        int Get_FarthestNode () {
            return far;
        }

        int mx () {
            return max_path_length;
        }

        void st (int arg_start_node, int arg_end_node) {
            start_node = arg_start_node;
            end_node   = arg_end_node;
            longest_path.push_back(start_node);
        }
};
Tree t(100003);
int main()
{

    int n;
    cin >> n;
    for (int i=1; i<=n-1; i++){
        int x, y;
        cin >> x >> y;
        t.add(x, y);
    }

    int start_node, end_node;
    t.DFS_GoFarthest(1);
    start_node = t.Get_FarthestNode();
    t.MarkUnvisited();
    t.Reset_PathLengths();
    t.DFS_GoFarthest(start_node);
    end_node = t.Get_FarthestNode();
    t.st(start_node, end_node);
    t.MarkUnvisited();
    t.DFS_FindPath(start_node);

    cout << t.mx() -1;

    return 0;
}

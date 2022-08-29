#include<iostream>
using namespace std;
int ans = 0;
class Trie{
	private :
		static const int ALSZ = 26;
	public :
		struct trie_node{
			trie_node *child_node[ALSZ];
			int isEnd;
		};
		trie_node *new_node(void){
			trie_node *pnode = new trie_node;
			pnode -> isEnd = 0;
			for (int i = 0; i<ALSZ; i++){
				pnode -> child_node[i] = nullptr;
			}
			return pnode;
		}
		trie_node *root = new_node();
		void insert(string key){
			trie_node *crawl_node = root;
			int dem = 1;
			for (int i = 0; i<key.length(); i++){
				int idx = key[i] - 'a';
				if (!crawl_node->child_node[idx]){
					crawl_node->child_node[idx] = new_node();
				}
				crawl_node = crawl_node->child_node[idx];
				dem += crawl_node->isEnd;
			}
			crawl_node -> isEnd ++;
			ans = max(ans, dem);
		}
};
class Solution{
	private : 
		string s;
		int n;
	public :
		void input(){
			cin>>n;
		}
		Trie T;
		void solve();
		void output(){
			cout<<ans;
		}
};
void Solution::solve(){
	while (n--){
		cin>>s;
		T.insert(s);
	}
}
int main(){
	Solution sol;
	sol.input();
	sol.solve();
	sol.output();
}
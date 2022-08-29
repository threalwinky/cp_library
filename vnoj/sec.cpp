#include<iostream>
using namespace std;
class trie{
	private : 
		static const int ALSZ = 26;
	public :
		struct trie_node{
			trie_node *child_node[ALSZ];
			int isEnd1, isEnd2;
		};
		trie_node *new_node(){
			trie_node *pnode = new trie_node;
			pnode -> isEnd1 = 0;
			pnode -> isEnd2 = 0;
			for (int i = 0; i<ALSZ; i++)
				pnode -> child_node[i] = NULL;
			return pnode;
		}
		trie_node *root = new_node();
		void insert(string key){
			trie_node *crawl_node = root;
			for (int i = 0; i<key.length(); i++){
				int idx = key[i] - '0';
				if (!crawl_node -> child_node[idx])
					crawl_node -> child_node[idx] = new_node();
				crawl_node = crawl_node -> child_node[idx];
				crawl_node -> isEnd1++;
			}
			crawl_node -> isEnd2++;
		}
		int count(string key){
			int ans = 0;
			trie_node *crawl_node = root;
			for (int i = 0; i<key.length(); i++){
				int idx = key[i] - '0';
				ans += crawl_node -> isEnd2;
				if (!crawl_node -> child_node[idx]){
					
					return ans;
				}
				crawl_node = crawl_node ->child_node[idx];
			}
			ans += crawl_node ->isEnd1;
			return ans;
		}
};
string inp(){
	int n;string tmp;
	cin>>n;
	for (int i = 0; i<n; i++){
		char c;
		cin>>c;
		tmp+=c;
	}
	return tmp;
}
class Solution{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
	//declare variable;
	trie T; int n, m;
	public :
	//handle
		void input(){
			cin>>n>>m;
		}
		string s;
		void solve();
		void output(){
			for (int i = 0; i<m; i++){
				s = inp();
				cout<<T.count(s)<<"\n";
			}
		}
};
void Solution::solve(){
	for (int i = 0; i<n; i++){
		s = inp();
		T.insert(s);
	}
}
main(){
	Solution sol;
	sol.FIO();
	sol.input();
	sol.solve();
	sol.output();
}
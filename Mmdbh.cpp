#include<iostream>
#include<vector>
int main()
{
		int n;
	cin>>n;
	vector<int> array(n);
	for(auto& i:array){
		cin>>i;
	}
	sort(array.begin(),array.end());
	int k;
	cin>>k;
	vector<int> sub;
	vector<int> add;
	for(int i=0;i<n;i++){
		if(array[i]-k<0){
			continue;
		}
		else{
			sub.push_back(array[i]-k);
		}
	}
	for(int i=0;i<n;i++){
		add.push_back(array[i]+k);
	}
	int min=*min_element(add.begin(),add.end());
	int max=*max_element(sub.begin(),sub.end());
	cout<<max-min<<endl;
}

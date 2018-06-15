#include<iostream>
#include<vector>
using namespace std;
 void rotate(vector<int>& nums, int k) {
        int index=k,len = nums.size(),temp,temp2;
        for(int i=0;i<len;i++){
            while(index>=len)
                index%=len;
            if(i==0){
                temp = nums[index];
                nums[index]=nums[0];
            }
            else{
                temp2 = nums[index];
                nums[index]=temp;
                temp = temp2;
            }
            index+=k;
	    for (int i=0;i<len;i++)
		    cout<<nums[i]<<" ";
	    cout<<endl;
        }
        return ;
    }
int main(){
	int n,m,k;
	cin>>n>>k;
	vector<int> res;
	for(int i=0;i<n;i++){
		cin>>m;
		res.push_back(m);
	}
	rotate(res,k);
	for(int i=0;i<n;i++)
		cout<<res[i]<<" ";
}

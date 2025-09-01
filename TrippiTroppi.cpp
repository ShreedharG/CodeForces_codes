#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    vector<string> num_str(n);
    for(int i=0;i<n;i++)
        getline(cin, num_str[i]);

    for(int k=0;k<n;k++){
        string input_str = num_str[k];
        int str_size = input_str.size();
        int i = 0;
        string ans = "";

        while(i<str_size){
            while (i<str_size && input_str[i]==' ')
                i++;
            
            if(i<str_size && input_str[i] != ' '){
                ans += input_str[i];
                i++;
            }
            
            while(i<str_size && input_str[i] != ' ')
                i++;            
        }
        
        for(int j=0;j<ans.size();j++)
            cout << ans[j];
        
        cout << endl;
    }   

    return 0;
}
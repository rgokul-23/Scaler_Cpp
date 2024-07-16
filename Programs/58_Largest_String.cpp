#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // Read N Strings Find Largest string
    int N; char current[1000];//As per constraints
    cin >> N;
    cin.get(); //Consume /n after N input to avoid wasting one iteration
    char largest[1000];
    int lar_len=0;
    for(int i=0;i<N;i++){
        cin.getline(current,1000,'\n');
        cout<<current<<endl;
        int cur_len;
        cur_len=strlen(current);
        if(cur_len > lar_len){
            lar_len=cur_len;
            strcpy(largest,current);
        }
    }
    cout<<"Output :"<<endl;
    cout<<largest<<endl;
    cout<<lar_len<<endl;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
//Accepting and storing values for first array
cout<<"Enter the limit of the first array: ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
//Accepting and storing for second array
cout<<"Enter the limit of the second array: ";
cin>>m;
int arr2[m];
for(int i=0; i<m; i++){
    cin>>arr2[i];
}
//Concatenating the elements into the new array
/**int rep[n+m];
for(int i=0; i<n; i++){
    rep[i]=arr[i];
}
for(int i=0; i<m; i++){
    rep[n+i]=arr2[i];
}
for(int i=0; i<n+m; i++){
    cout<<rep[i];
}
**/
vector<int>rep;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(arr[i]==arr2[j]){
            rep.push_back(arr[i]);
            break;
        }
    }
}
if(rep.empty()){
    cout<<"No intersection found";
}
else{
    cout<<"Intersection of the two arrays is"<<endl;
    for(int i=0; i<=rep.size(); i++){
        cout<<rep[i]<<endl;
    }
}
return 0;
}

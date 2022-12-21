#include <iostream>

using namespace std;
void sort(int *a,int n){
for (int i=0;i<n-1;i++){
    for (int j=i+1;j<n;j++)
    if(a[i]<a[j]){
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}
}
int main()
{
    //int myInt = 5;

}
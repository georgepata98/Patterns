#include <iostream>
using namespace std;
int main()
{
int n, aux=0;
int m=3;  //inaltimea trunchiului
cout << "baza mare a bradului: "; cin >> n;

if(n%2==1) {
for(int i=1; i<=(n/2+1)+m; i++)
{
  for(int j=1; j<=n; j++)
  {
    if(n/2+1-aux>0) {
	    if(j<n/2+1-aux || j>n/2+1+aux) cout << " ";
	    else cout << "8";
    }
    else {
		  if(j==n/2+1) cout << "8";
		  else cout << " "; 
    }
  }
  aux++;
  cout << endl;
}}

aux=0;
if(n%2==0) {
for(int i=1; i<=n/2+m; i++)
{
  for(int j=1; j<=n; j++)
  {
    if(n/2-aux>0) {
		  if(j<n/2-aux || j>n/2+aux) cout << " ";
		  else cout << "8";
    }
    else {
		  if(j==n/2) cout << "8";
		  else cout << " ";
    }
  }
  aux++;
  cout << endl;
}}

return 0;
}

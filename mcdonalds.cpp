#include <iostream>
using namespace std;
int main()
{
int cifra1, cifra2;
char c[6][4];  //matrice 6x4
char k[6][4];  //matrice 6x4

cout << "alege prima cifra: "; cin >> cifra1;
cout << "alege a doua cifra: "; cin >> cifra2;

if(cifra1==1) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==2) {
      if(j<=2) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
  	}
    else {
      if(j==2) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra1==2) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
      if(j<=3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
    if(i==2) {
      if(j==3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
    if(i==4 || i==5) {
      if(j==1) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra1==3) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
    	if(j<=3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
    else {
      if(j==3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra1==4) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1) {
      if(j==1) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
    if(i==2) {
      if(j==1 || j==3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
    if(i==3) {
      if(j<=3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
    if(i>3) {
      if(j==3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra1==5) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
      if(j<=3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
    if(i==2) {
      if(j==1) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
  	}
    if(i==4 || i==5) {
    	if(j==3) c[i-1][j-1]='@'; //cout << "@";
      else c[i-1][j-1]=' '; //cout << " ";
    }
  }
	//cout << endl;
}}

if(cifra1==6) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
			if(j<=3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		if(i==2) {
			if(j==1) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		if(i==4 || i==5) {
			if(j==1 || j==3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra1==7) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1) {
			if(j<=3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		if(i==2) {
			if(j==3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		if(i>2) {
			if(j==2) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra1==8) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
			if(j<=3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		else {
			if(j==1 || j==3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra1==9) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
			if(j<=3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		if(i==2) {
			if(j==1 || j==3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		if(i==4 || i==5) {
			if(j==3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra1==0) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==6) {
			if(j<=3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
		else {
			if(j==1 || j==3) c[i-1][j-1]='@'; //cout << "@";
			else c[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra2==1) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==2) {
      if(j<=2) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
  	}
    else {
      if(j==2) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra2==2) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
      if(j<=3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
    if(i==2) {
      if(j==3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
    if(i==4 || i==5) {
      if(j==1) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra2==3) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
    	if(j<=3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
    else {
      if(j==3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra2==4) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1) {
      if(j==1) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
    if(i==2) {
      if(j==1 || j==3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
    if(i==3) {
      if(j<=3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
    if(i>3) {
      if(j==3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
  }
  //cout << endl;
}}

if(cifra2==5) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
      if(j<=3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
    if(i==2) {
      if(j==1) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
  	}
    if(i==4 || i==5) {
    	if(j==3) k[i-1][j-1]='@'; //cout << "@";
      else k[i-1][j-1]=' '; //cout << " ";
    }
  }
	//cout << endl;
}}

if(cifra2==6) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
			if(j<=3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		if(i==2) {
			if(j==1) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		if(i==4 || i==5) {
			if(j==1 || j==3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra2==7) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1) {
			if(j<=3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		if(i==2) {
			if(j==3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		if(i>2) {
			if(j==2) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra2==8) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
			if(j<=3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		else {
			if(j==1 || j==3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra2==9) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==3 || i==6) {
			if(j<=3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		if(i==2) {
			if(j==1 || j==3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		if(i==4 || i==5) {
			if(j==3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}

if(cifra2==0) {
for(int i=1; i<=6; i++)
{
  for(int j=1; j<=4; j++)
  {
    if(i==1 || i==6) {
			if(j<=3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
		else {
			if(j==1 || j==3) k[i-1][j-1]='@'; //cout << "@";
			else k[i-1][j-1]=' '; //cout << " ";
		}
  }
	//cout << endl;
}}


for(int i=1; i<=6; i++)
{
	for(int j=1; j<=8; j++)
	{
		if(j<=4) cout << c[i-1][j-1];
		else cout << k[i-1][j-5];
	}
	cout << endl;
}

return 0;
}
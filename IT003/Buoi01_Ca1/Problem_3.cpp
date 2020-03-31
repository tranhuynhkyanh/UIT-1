#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define BASE 1000000
map<LL, LL> F;

LL Fibo(LL n) {
	if (F.count(n)) return F[n];
	LL k=n/2;
	if (n%2==0) { //TH1: n=2*k
		return F[n] = (Fibo(k)*Fibo(k) + Fibo(k-1)*Fibo(k-1)) % BASE;
	} else { //TH2: n=2*k+1
		return F[n] = (Fibo(k)*Fibo(k+1) + Fibo(k-1)*Fibo(k)) % BASE;
	}
}

main(){
	LL n;
	F[0] = F[1] = 1;
    cin >> n;
	cout << Fibo(n-1) << endl;
}

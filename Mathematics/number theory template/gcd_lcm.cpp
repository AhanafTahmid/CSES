//Euclidean’s theorem
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

int main()
{

	int a = 4, b = 8;
	cout <<"The GCD of the two numbers is "<<gcd(a, b);//goshagu
	cout <<"The lcm of the two numbers is "<<lcm(a, b);//loshagu

    //Built in
    cout<<__gcd(a,b)<<endl;
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
}
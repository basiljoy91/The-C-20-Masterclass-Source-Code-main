#include<iostream>

using namespace std;

template <typename T>

T add (T a, T b){
	return a+b;
}

int main(){
	char a_0 = {10};
	char a_1 = {20};
	auto result_a = add(a_0, a_1);
	cout << "result_a: " << static_cast<int>(result_a) << endl;

	int b_1 = {20};
	int b_2 = {30};
	auto resutl_b = add(b_1, b_2);
	cout << "result_b: " << resutl_b << endl;

	double c_10 = {1.11};
	double c_11 = {2.22};
	auto result_c = add(c_10, c_11);
	cout << "result_c: " << result_c << endl;

	return 0;



}

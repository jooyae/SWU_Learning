#include <iostream> 
using namespace std;

int cnt = 0; // 이동 횟수에 이용.

void Hanoi(int n, char from, char temp, char to) 
// n : 원반개수, from : 원래 위치, temp : 임시 장소, to :목적지
{

	// 프로그램을 완성하세요
	// ......

}


void main()
{
	int n; //원반의 수
	
	cout << "원반의 갯수를 입력하세요 : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n개의 원반을 'A'에서 'C'로 이동

	cout << "전체 원반 이동 수(원반수 : " << n << ") = " << cnt << endl;
}
/*
問題文
すぬけ君は，数直線上の位置 x に住んでいます． また，位置 a,b にはそれぞれ出前を行っている店 A,B が存在します．
すぬけ君は，店 A,B のうち，より近いほうから出前をとることにしました． どちらの店がすぬけ君の住んでいる位置により近いかを求めてください．
ただし，数直線上の 2 点 s,t の間の距離は |s−t| で表されます．
*/

#include<iostream>
#include<cmath>

int main() {
	int x, a, b;
	std::cin >> x >> a >> b;

	std::cout << (std::abs(x - a) < std::abs(x - b) ? 'A' : 'B') << std::endl; 

	return 0;
}
//#include <iostream>
//#include <algorithm>
//#include <string>
//#define CARD_COUNT			52
//
//using namespace std;
///*int main()
//{
//	int Pocket[52] = { 0, };// 공간 52개- 0부터 시작 , int i를 선언하고 int Pocket[i]로 선언은 불가
//	//int Pocket[52] = {0,}; -> 초기화, 각 배열에 0으로 초기화한다.->초기화 안하면 쓰레기값이 생긴다.
//
//	for (int Index = 0; Index < 52; Index++)// 언리얼에서는 i 말고 대문자로 시작하는 변수 사용
//	{
//		Pocket[Index] = Index + 1; //Pocket안에 Index를 대입한다. Index+1하는 이유는 초기값을 1로 변경하기 위해서다.
//
//	}
//	//난수 생성 시 - 메르센 트위스터를 활용할 것
//	int Temp = 0;
//	for (int Count = 0; Count < 52 * 100<-섞는 ㅗ힛수; Count++)//섞기
//	{
//		int First = rand() % 52;
//		int Second = rand() % 52;
//		Temp = Pocket[First];
//		Pocket[First] = Pocket[Second];
//		Pocket[Second] = Temp;
//	}
//
//
//	return 0;
//}
//*/
//
////int Percent = rand() % 100;
////cout << Percent << endl;
////if Percent >= 0 && Percent < 200)
////{
////}
//
//
////절차지향 - 섞고 뽑는다
//
//int Deck[CARD_COUNT] = { 0, };// 덱을 52 배열로한다.
//
//void Initialize()// 초기화
//{
//	srand((unsigned int)time(NULL));//srand - random값에 시드(시간)를 설정
//	for (int Index = 0; Index < CARD_COUNT; Index++)
//		//Index 초기화, 52보다 작음, 1씩 더한다.
//
//	{
//		Deck[Index] = Index + 1;//초기값이 0이라 1 더한다.
//	}
//
//}
//
//
//void Shuffle()// 섞기 
//{
//	int Temp = 0;
//	for (int count = 0; count < CARD_COUNT * 1000; count++)
//	{
//		//난수의 한정
//		int First = rand() % CARD_COUNT;// 첫째, 52를 나눠 섞는다.
//		int Second = rand() % CARD_COUNT;// 둘째 ,52를 나눠 섞는다
//		
//		//first = second가 되게 하는 절차(결과적으로)
//		Temp = Deck[First];//Temp= Deck
//		Deck[First] = Deck[Second];
//		Deck[Second] = Temp;
//	}
//}
//
//void CardPrint()// 카드의 속성 정의
//{	
//	//Heart, Clover, Space, diamond
//	int CardType = Deck[0] / 13; // 나눈 나머지가 4
//	int CardNumber = Deck[0] % 13 + 1;// 13장의 숫자카드
//	int Score =  CardNumber
//
//	if CardType = Deck[0] /
//
//
//}
//
//
//void Print()//출력
//{
//	//난수를 13까지 한정
//
//
//
//	
//	
//
//
//
//
//
//
//
//	int blackjack = 13 + 1;
//	int computer;
//	int player;
//
//	
//	cout << Deck[0] % blackjack << ",";//첫번째 배열에 13를 나눈 나머지+1를 뽑는다.
//	cout << Deck[1] % blackjack << endl;
//	cout << "=============" << endl;
//	cout << Deck[2] % blackjack << ",";
//	cout << Deck[3] % blackjack << endl;
//	
//
//
//	//computer = Deck[0] + Deck[1];
//	//player = Deck[2] + Deck[3];
//
//
//	/*if (computer>21)
//	{
//		cout << "player win" << endl;
//	}
//	else if (player>21)
//	{
//		cout << "Player lose" << endl;
//	}
//	else if (player>=computer)
//	{
//		cout << "player win" << endl;
//	}
//	else
//	{
//		cout << "player win" << endl;
//	}*/
//
//
//
//
//
//
//
//}
//
//
//
//int main()//함수 세개의 실행
//{
//	Initialize() ;
//	Shuffle() ;
//	Print() ;
//
//	
//	
//	return 0;
//	return 0 ;
//}

#include <iostream>
#include <algorithm>
#include <string>

#define CARD_COUNT		52

using namespace std;

//global variable
int Deck[CARD_COUNT] = { 0, };// 배열의 모든 자리에 0으로 초기화한다.

void Initialize()//초기화
{
	srand((unsigned int)time(NULL));//시간을 기준을 랜덤 설정

	for (int Index = 0; Index < CARD_COUNT; Index++)
	{
		Deck[Index] = Index;
		//배열 모든 초기값이 0이었기 때문에 각 자리마다 순서대로 Index값을 넣어준다. 
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < CARD_COUNT * 1000; Count++)// 섞는걸 반복한다.
	{
		int First = rand() % CARD_COUNT; // 첫째 주소 자리 (Index)
		int Second = rand() % CARD_COUNT;// 둘째 주소 자리(Index)
		Temp = Deck[First];// Temp는 첫째 주소자리의 수를 피신시키기 위한 용도
		Deck[First] = Deck[Second];//첫째 둘째와 동기화되어 첫째 갱신
		Deck[Second] = Temp;//Temp에서 피신시킨 값 둘째로 저장
	}
}

int PrintCard(int CardRealNumber)
{
	//Type
// Heart, Clover, Space, Diamond
	//52(int=4byte)(char면 1byte) [ 4ybte] [ ][][][][][][][][]....
	//cardtype과 cardnumber는 둘다 int 타입이기 때문에 합쳐도 4byte로 저장된다.
	int CardType = CardRealNumber / 13;
	int CardNumber = CardRealNumber % 13 + 1;
	int Score = CardNumber;
	//문자열 배열변수 선언 저장 4byte로 잡는다  문자3byte, \0 1byte
	string Types[4] = {
		"♥",
		"◆",
		"♣",
		"♠"
	};

	//if (CardType == 0)
	//{
	//	cout << "Heart";
	//}
	//else if (CardType == 1)
	//{
	//	cout << "Clover";
	//}
	//else if (CardType == 2)
	//{
	//	cout << "Space";
	//}
	//else // (CardType == 3)
	//{
	//	cout << "Diamond";
	//}

	cout << Types[CardType];

	if (CardNumber == 1)
	{
		cout << " A" << endl;
	}
	else if (CardNumber == 11)
	{
		cout << " J" << endl;
		Score = 10;
	}
	else if (CardNumber == 12)
	{
		cout << " Q" << endl;
		Score = 10;
	}
	else if (CardNumber == 13)
	{
		cout << " K" << endl;
		Score = 10;
	}
	else
	{
		cout << " " << CardNumber << endl;
	}

	return Score; //printcard를 나온 score로 반환한다.
}

void Print()//출력
{
	int ComputerScore = 0;
	int PlayerScore = 0;

	cout << "Computer" << endl;
	ComputerScore = ComputerScore + PrintCard(Deck[0]);//printcard 함수(덱배열 4개중 첫번째) 사용=A
	ComputerScore  += PrintCard(Deck[1]);//A+printcard 함수(덱배열 4개중 2번째) 사용

	cout << "Computer Score : " << ComputerScore << endl;

	cout << "================\n\n" << endl;

	cout << "Player" << endl;
	PlayerScore += PrintCard(Deck[2]);
	PlayerScore += PrintCard(Deck[3]);
	cout << "Player Score  : " << PlayerScore << endl;

	if (ComputerScore > 21)
	{
		cout << "you win" << endl;
	}
	else if (PlayerScore > 21)
	{
		cout << "you lose" << endl;

	}
	else if (PlayerScore >= ComputerScore)
	{
		cout << "you win" << endl;
	}
	else
	{
		cout << "you lose" << endl;
	}

}


int main()
{
	//c, C++ STL string class
	//string Message = "안녕하세요. ";
	//string Message2 = Message + " 홍길동님 ";

	//cout << Message2 << endl;

	//return 0;

	Initialize();
	Shuffle();
	Print();

	return 0;

	//[][][\0]
	//[][][\0]
	//[][][\0]
	//[][][\0]
	const char* Type[4] = {
		"♥",
		"◆",
		"♣",
		"♠"
	};

	//char Type[4][3] = {
	//	"♥", //\0
	//	"◆",
	//	"♣",
	//	"♠"
	//};

	//문자열 X -> char Array
	//[A][B][\0][]
	char Temp[10] = "AB\0C";
	//Temp[0] = 'A';
	//Temp[1] = 'B';
	//Temp[2] = '\0';
	//cout << 111111;

	//string Types[4] = {string은 \0을 알아서 자동으로 넣는다. 한글2byte int4byte char1byte float4byte 
	//	"♥",
	//	"◆",
	//	"♣",
	//	"♠"
	//};

	//cout << Types[0] << endl;


	return 0;
}
//#include <iostream>
//#include <algorithm>
//#include <string>
//#define CARD_COUNT			52
//
//using namespace std;
///*int main()
//{
//	int Pocket[52] = { 0, };// ���� 52��- 0���� ���� , int i�� �����ϰ� int Pocket[i]�� ������ �Ұ�
//	//int Pocket[52] = {0,}; -> �ʱ�ȭ, �� �迭�� 0���� �ʱ�ȭ�Ѵ�.->�ʱ�ȭ ���ϸ� �����Ⱚ�� �����.
//
//	for (int Index = 0; Index < 52; Index++)// �𸮾󿡼��� i ���� �빮�ڷ� �����ϴ� ���� ���
//	{
//		Pocket[Index] = Index + 1; //Pocket�ȿ� Index�� �����Ѵ�. Index+1�ϴ� ������ �ʱⰪ�� 1�� �����ϱ� ���ؼ���.
//
//	}
//	//���� ���� �� - �޸��� Ʈ�����͸� Ȱ���� ��
//	int Temp = 0;
//	for (int Count = 0; Count < 52 * 100<-���� ������; Count++)//����
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
////�������� - ���� �̴´�
//
//int Deck[CARD_COUNT] = { 0, };// ���� 52 �迭���Ѵ�.
//
//void Initialize()// �ʱ�ȭ
//{
//	srand((unsigned int)time(NULL));//srand - random���� �õ�(�ð�)�� ����
//	for (int Index = 0; Index < CARD_COUNT; Index++)
//		//Index �ʱ�ȭ, 52���� ����, 1�� ���Ѵ�.
//
//	{
//		Deck[Index] = Index + 1;//�ʱⰪ�� 0�̶� 1 ���Ѵ�.
//	}
//
//}
//
//
//void Shuffle()// ���� 
//{
//	int Temp = 0;
//	for (int count = 0; count < CARD_COUNT * 1000; count++)
//	{
//		//������ ����
//		int First = rand() % CARD_COUNT;// ù°, 52�� ���� ���´�.
//		int Second = rand() % CARD_COUNT;// ��° ,52�� ���� ���´�
//		
//		//first = second�� �ǰ� �ϴ� ����(���������)
//		Temp = Deck[First];//Temp= Deck
//		Deck[First] = Deck[Second];
//		Deck[Second] = Temp;
//	}
//}
//
//void CardPrint()// ī���� �Ӽ� ����
//{	
//	//Heart, Clover, Space, diamond
//	int CardType = Deck[0] / 13; // ���� �������� 4
//	int CardNumber = Deck[0] % 13 + 1;// 13���� ����ī��
//	int Score =  CardNumber
//
//	if CardType = Deck[0] /
//
//
//}
//
//
//void Print()//���
//{
//	//������ 13���� ����
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
//	cout << Deck[0] % blackjack << ",";//ù��° �迭�� 13�� ���� ������+1�� �̴´�.
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
//int main()//�Լ� ������ ����
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
int Deck[CARD_COUNT] = { 0, };// �迭�� ��� �ڸ��� 0���� �ʱ�ȭ�Ѵ�.

void Initialize()//�ʱ�ȭ
{
	srand((unsigned int)time(NULL));//�ð��� ������ ���� ����

	for (int Index = 0; Index < CARD_COUNT; Index++)
	{
		Deck[Index] = Index;
		//�迭 ��� �ʱⰪ�� 0�̾��� ������ �� �ڸ����� ������� Index���� �־��ش�. 
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < CARD_COUNT * 1000; Count++)// ���°� �ݺ��Ѵ�.
	{
		int First = rand() % CARD_COUNT; // ù° �ּ� �ڸ� (Index)
		int Second = rand() % CARD_COUNT;// ��° �ּ� �ڸ�(Index)
		Temp = Deck[First];// Temp�� ù° �ּ��ڸ��� ���� �ǽŽ�Ű�� ���� �뵵
		Deck[First] = Deck[Second];//ù° ��°�� ����ȭ�Ǿ� ù° ����
		Deck[Second] = Temp;//Temp���� �ǽŽ�Ų �� ��°�� ����
	}
}

int PrintCard(int CardRealNumber)
{
	//Type
// Heart, Clover, Space, Diamond
	//52(int=4byte)(char�� 1byte) [ 4ybte] [ ][][][][][][][][]....
	//cardtype�� cardnumber�� �Ѵ� int Ÿ���̱� ������ ���ĵ� 4byte�� ����ȴ�.
	int CardType = CardRealNumber / 13;
	int CardNumber = CardRealNumber % 13 + 1;
	int Score = CardNumber;
	//���ڿ� �迭���� ���� ���� 4byte�� ��´�  ����3byte, \0 1byte
	string Types[4] = {
		"��",
		"��",
		"��",
		"��"
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

	return Score; //printcard�� ���� score�� ��ȯ�Ѵ�.
}

void Print()//���
{
	int ComputerScore = 0;
	int PlayerScore = 0;

	cout << "Computer" << endl;
	ComputerScore = ComputerScore + PrintCard(Deck[0]);//printcard �Լ�(���迭 4���� ù��°) ���=A
	ComputerScore  += PrintCard(Deck[1]);//A+printcard �Լ�(���迭 4���� 2��°) ���

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
	//string Message = "�ȳ��ϼ���. ";
	//string Message2 = Message + " ȫ�浿�� ";

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
		"��",
		"��",
		"��",
		"��"
	};

	//char Type[4][3] = {
	//	"��", //\0
	//	"��",
	//	"��",
	//	"��"
	//};

	//���ڿ� X -> char Array
	//[A][B][\0][]
	char Temp[10] = "AB\0C";
	//Temp[0] = 'A';
	//Temp[1] = 'B';
	//Temp[2] = '\0';
	//cout << 111111;

	//string Types[4] = {string�� \0�� �˾Ƽ� �ڵ����� �ִ´�. �ѱ�2byte int4byte char1byte float4byte 
	//	"��",
	//	"��",
	//	"��",
	//	"��"
	//};

	//cout << Types[0] << endl;


	return 0;
}
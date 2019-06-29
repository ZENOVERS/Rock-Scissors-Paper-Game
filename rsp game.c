#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

void gotoxy(int x, int y)
{	
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}


// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), as);  이것은 닉네임 색
// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);  이것은 배경 글씨색  

void ClearReadBuffer(void)
{
	while (getchar() != '\n');
}


int main()
{
	system("title Rock! Scissors! Paper!      https://github.com/ZENOVERS/Rock--Scissors--Paper--game");

	int fileok = 0;
	FILE* f;

	if ((f = fopen("attack.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}

		printf("wav 폴더에 attack.wav 음원이 존재하지 않습니다. 다운로드 하시겠습니까? (예 1 / 아니오 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/attack.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/attack.wav");
		}

		printf("다운이 완료되었습니다. 음원 파일을 wav 폴더에 넣고 다시 실행해 주세요.");
		scanf("%d", &fileok);

		goto ppap;
	}

	if ((f = fopen("boss.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav 폴더에 boss.wav 음원이 존재하지 않습니다. 다운로드 하시겠습니까? (예 1 / 아니오 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/boss.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/boss.wav");
		}
		printf("다운이 완료되었습니다. 음원 파일을 wav 폴더에 넣고 다시 실행해 주세요.");
		scanf("%d", &fileok);
		goto ppap;
	}

	if ((f = fopen("main.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav 폴더에 main.wav 음원이 존재하지 않습니다. 다운로드 하시겠습니까? (예 1 / 아니오 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/main.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/main.wav");
		}	
		printf("다운이 완료되었습니다. 음원 파일을 wav 폴더에 넣고 다시 실행해 주세요.");
		scanf("%d", &fileok);

		goto ppap;
	}

	if ((f = fopen("trapcard.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav 폴더에 trapcard.wav 음원이 존재하지 않습니다. 다운로드 하시겠습니까? (예 1 / 아니오 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/trapcard.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/trapcard.wav");
		}
		printf("다운이 완료되었습니다. 음원 파일을 wav 폴더에 넣고 다시 실행해 주세요.");
		scanf("%d", &fileok);
		goto ppap;
	}

	if ((f = fopen("victory.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav 폴더에 victory.wav 음원이 존재하지 않습니다. 다운로드 하시겠습니까? (예 1 / 아니오 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/victory.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/victory.wav");
		}
		printf("다운이 완료되었습니다. 음원 파일을 wav 폴더에 넣고 다시 실행해 주세요.");
		scanf("%d", &fileok);
		goto ppap;
	}



	PlaySound(TEXT("main.wav"), NULL, SND_ASYNC | SND_LOOP);


	srand(time(NULL));
	int cmp = 1; // 적의 난수를 저장해서 가위바위보 비교하는 변수
	char message[500]; // 다양한 메세지 출력, 아이템 얻은 메세지, 가위바위보의 여부, 적 패배 여부 등
	int enermy_rsp; // 적의 가위바위보 난수를 저장해서 분석 목적
	int randam; // 랜덤 난수를 할당해 데미지를 입히거나 입는다.

strcpy(message, "게임 시작!!!   가위바위보를 골라주세요!!"); // 밑에 게임 화면에서 시작할 말, 딱 한번만 나와야 하니 이곳에다가 이렇게 씀.

	int sum = 0, as = 0, heart = 100, kk = 3, color = 3, asd, asds, aaa = 0, um1 = 0, ppap = 0, sel = 0;
	char arr[300] = { 0, };
	char verinformation[300];
	char rsp;

	//직업과 관련된 것
	int magicer_talent, hin = 99;
	int lowpower = 2 , highpower = 5;
	int mydam3; // 내 마법사 전용 내 공격 곱하기 3

	// 적의 공격력과 체력 변수칸
	int _1eheart = 10, _1elpower = 1, _1ehpower = 5;
	char _1result[300];

	int attack = 0;
	//공격하는 음악을 넣기 위해, if문으로 attack = 1 = 내가 공격,   attack = - 1 = 상대 공격 attack = 0 = 비김

	setlocale(LC_ALL, " ");      //지역화 설정을 전역적으로 적용

start:
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                         (C) 2019. 홍지훈 all rights reserved.\n\n\n\n\n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf("[ BETA VER. 6.0.0.0 ]      Game CODE (C Language) : https://github.com/ZENOVERS/Rock--Scissors--Paper--game\n\n\n\n\n\n\n\n\n");

	sprintf(verinformation, "%s", "[BETA VER. 6.0.0.0]");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("<<< 게임 설명 >>>\n\n\n{\n\n적을 처치 시 일정 확률로 아이템이 드랍됩니다.(구현중)\n\n적 처치 시 생명이 추가됩니다.(구현중)\n\n기본 생명은 100 입니다.\n\n닉네임의 기준은 영어입니다. 한글을 입력 시 오류가 나는 경우가 있습니다.\n\n조건에 만족하지 않은 닉네임은 공백처리 합니다.\n\n}");

assa:


	for (int i = 0; i < 300; i++)
	{
		arr[i] = 0;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n\n\n\n\n\n닉네임을 입력해 주세요 (3자 이상 50자 내외) : ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	scanf("%[^\n]s", arr);



	sum = 0;
	sum = strlen(arr);


	if (sum == 0)
	{
		um1 = 1;
	}
	else if (sum > 50 || sum < 3)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("\n\n\n\n닉네임 생성 조건을 확인해 주세요.");

		*arr = aaa;
		ClearReadBuffer();

		goto assa;
	}


	if (strcmp(arr, "admin mode") == 0 || strcmp(arr, "관리자 모드") == 0)
	{
		printf("최소 데미지, 최대 데미지, 체력: ");
		scanf("%d %d %d", &lowpower, &highpower, &heart);

		ClearReadBuffer();
		goto assa;
	}
	else if (strcmp(arr, "enemy admin mode") == 0 || strcmp(arr, "적 관리자 모드") == 0)
	{
		printf("최소 데미지, 최대 데미지, 체력");
		scanf("%d %d %d", &_1elpower, &_1ehpower, &_1eheart);

		ClearReadBuffer();
		goto assa;
	}



	ClearReadBuffer();
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n환영합니다!! [ %s ] 님!", arr);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n당신의 닉네임 색을 선택해 주세요 (번호만 입력)\n\n\n\n\n");

	{
		kk = 3;
		color = 3;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf("\n\n\n\n번호만 입력: ");
		scanf("%d", &as);

	aaa: // 사용하지 말라고 한 4번, 12번 하면 여기로 온다.
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("\n\n\n\n\n\n\n\n\n\n\n[");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), as);
		printf(" %s ", arr);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("]");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

		ClearReadBuffer();

		printf(" 님, 이제 게임할 때 사용할 글씨색을 선택해 주세요(번호만 입력)\n\n\n\n\n\n");

		kk = 3;
		color = 3;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기       (제작자 추천)\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기       (제작자 추천)\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;
		kk += 1;
		color += 1;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d번 : 미리보기\n\n", color);
		++color;
		++kk;

		printf("\n\n\n\n번호만 입력 (주의! 12, 4번은 선택불가) : ");
		scanf("%d", &asd);

		if (asd == 12 || asd == 4)
		{
			goto aaa;
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("\n\n\n\n\n\n설정되었습니다.    다음으로 가려면 1, 다시 설정하려면 0을 입력해 주세요: ");
		scanf("%d", &asds);

	}

	system("cls");

	ClearReadBuffer();

	if (asds == 1)
	{
		goto as;
	}
	else
	{
		goto assa;
	}

as:

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n<<<<<<<   캐릭터를 선택하여 주세요   >>>>>>>\n\n\n\n\n\n\n\n\n\n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("<<<<<<<< 미 구 현 >>>>>>>\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf(" ---------------------------------------------------------\n");
	printf("l                      1. [전사]                          l\n");
	printf("l                                                         l\n");
	printf("l            능력: 아이템 획득 확률이                     l\n");
	printf("l                   10\%\% 증가한다.                         l\n");
	printf("l                                                         l\n");
	printf("l                                                         l\n");
	printf("l                       (패시브)                          l\n");
	printf("l---------------------------------------------------------l\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n\n<<<<<<<< 구현중... >>>>>>>\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("l---------------------------------------------------------l\n");
	printf("l                      2. [마법사]                        l\n");
	printf("l                                                         l\n");
	printf("l            능력: 적과 전투중 5\%\% 확률로                  l\n");
	printf("l                 대미지x3 의 피해를 입힌다.              l\n");
	printf("l                                                         l\n");
	printf("l                                                         l\n");
	printf("l                        (지속)                           l\n");
	printf("l---------------------------------------------------------l\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\n\n\n\n<<<<<<<< 미 구 현 >>>>>>>\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("l---------------------------------------------------------l\n");
	printf("l                      3. [버서커]                        l\n");
	printf("l                                                         l\n");
	printf("l            능력: 적과 전투중 5\%\% 확률로 상대 체력        l\n");
	printf("l                  1 / 10 을 흡혈한다.                    l\n");
	printf("l                                                         l\n");
	printf("l                                                         l\n");
	printf("l                         (지속)                          l\n");
	printf(" ---------------------------------------------------------\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf("\n\n\n\n\n\n\n\n캐릭터를 신중하게 골라주세요. 한 번 선택 시 앞으론 바꿀 수 없습니다.");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);

	printf("\n\n\n\n선택 (번호) : ");
	scanf("%d", &sel);

	system("cls");
	ClearReadBuffer();

	switch (sel)
	{
	case 1:
		goto sword;
		break;

	case 2:
		goto magic;
		break;

	case 3:
		goto bercercer;
		break;
	default:
		goto as;
		break;
	}






	/*


	이제
	여기부터
	캐릭
	마다
	다른
	게임
	공간
	!!
	!


	*/




	ClearReadBuffer();


	// 마법사 공간. 스킬 여기서 할당
	if (asd == "magic")
	{
	magic:

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("\n\n\n\n\n\n[ 마법사 ]");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("로 설정되었습니다.       다음으로 가려면 1, 다시 설정하려면 0 을 입력해 주세요: ");
		scanf("%d", &asds);

		switch (asds)
		{
		case 1:
			goto a;
			break;
		default:
			goto as;
		}


	
	a:
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");


		gotoxy(80, 30);
		printf("튜토리얼 로딩중.... (시간이 걸릴수도 있습니다.)");
		

		Sleep(3000);



	asj:


		system("cls");

		printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
		printf("                                                                                                                                                                                        \n");
		printf("    %s      ----------- [ 현재 버전 ]                                                                                                                                                   \n", verinformation);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("                                                                                   !     <<<<<<< 튜 토 리 얼 >>>>>>>     !                                                                         \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("                                                                                                                                                                                        \n");
		printf("              체력: %d      --------- [ 현재 나의 체력 ]                                                                                                                                \n", heart);
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("              공격력: %d ~ %d       ---------- [ 현재 나의 공격력 ] (적에게 %d 부터 %d 사이의 데미지를 줌)                                                                              \n", lowpower, highpower, lowpower, highpower);
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                             게임 조작법                                                                                                                                                \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                       a          s          d                                                                                                                                          \n");
		printf("                       i          i          i                                                                                                                                          \n");
		printf("                      가위       바위        보                                                                                                                                         \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("               가위바위보 선택!!!  :        --------- [ a, s, d 중 하나를 선택해 입력 ]                                                                                                \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                       [ 전투 결과 표시]                                                                                                               \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf(" --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");



		printf("튜토리얼을 끝내시겠습니까? (예 1 /아니요 0) : ");
		scanf("%d", &sel);


		switch (sel)
		{
		case 0:
			goto asj;
		case 1:
			goto ass;
		default:
			goto asj;
		}


	ass:

		system("cls");


		printf("로딩중.... (시간이 걸릴수도 있습니다.)");
		// 시간보내기
		

		PlaySound(TEXT("trapcard.wav"), NULL, SND_LOOP | SND_ASYNC);
	re: // 가위바위보에서 이상한거 입력하면 다시 내는 것.


		system("cls");




		// ========================================================================================================스테이지 1======================================================\=========== 시작시작시작

		do  // do while로 적 체력이 0 이하까지 반복
		{

			
		
			system("cls");
		
			printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("                                                                             [ 1 스테이지 ]                   l                      여기서 획득 가능한 무기                            \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
			printf("    %s                                                                                       l                                                                         \n", verinformation);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf("                                                                                                              l                                                                         \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			printf("                                                                                                              l                                                                         \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
			printf("                                                                                                               ------------------------------------------------------------------------ \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                 　                                                                         　                                                                          \n");
			printf("                                                          　                                                                                                                            \n");
			printf("                                                         　  　                                                                                                                         \n");
			printf("                                                                                                                                                                                        \n");
			printf("         a          s          d                                                                                                                                                        \n");
			printf("         i          i          i                                                                                                        [ 덴 ]                                          \n");
			printf("        가위       바위        보                                                                                                                                                       \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                     ∧＿∧                                                                            ∧＿∧                                           \n");
			printf("                                                     (`'ω')                                                                          （`ω`）                                          \n");
			printf("                                                          つ                                                                            │ │                                           \n");
			printf("                                                      し-Ｊ                                                                             │ └─ --&                                     \n");
			printf("                                                                                                                                      << ㄴ __ ㅣ                                       \n");
			printf("                                                                                                                                          ∥￣∥                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                      공격력: %d ~ %d       체력: %d                                             적 공격력: %d ~ %d                       적 체력: %d                   \n", lowpower, highpower, heart, _1elpower, _1ehpower, _1eheart);
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
			printf("       %s                                                                                                                                                                               \n", message);
			printf(" 																																												        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("																																													    \n");
			printf("                                                                                                                                                                                        \n");
			printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");

			gotoxy(50, 30);
			printf("%s", arr);

			// 만약 비기지 않았다면 효과음 재생
			if (attack != 0)
			{
				ClearReadBuffer();
				PlaySound(TEXT("attack.wav"), NULL, SND_SYNC);
				goto endmusic; //여기서 이상하게 2번이 반복되어 그렇지 못하게 탈출
			}
	
			if (attack == 100)
			{
			endmusic: // 바로 윗줄에 설명있다.
				PlaySound(TEXT("trapcard.wav"), NULL, SND_LOOP | SND_ASYNC);
			}

			//체력이 없으면 종료
			if (heart < 1)
			{
				printf("\n\n재도전?? (예 1 : 아니요 2) : ");
				scanf("%d", &rsp);

				if (rsp == 1)
				{
					goto start;

					ClearReadBuffer();
				}

				return 0;
			}

			
			gotoxy(0, 60);	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
			printf("가위바위보 선택!!!  : ");
			scanf("%c", &rsp); // 위에서 가위바위보 결과 저장


			system("cls");
			//그?숩


			switch (rsp)
			{
			case 'a':
				rsp = 1;
				break;
			case 's':
				rsp = 2;
				break;
			case 'd':
				rsp = 3;
				break;
			default:
				goto re;
				break;
			}


		enermy_rsp1:

			// 적의 가위바위보 정하는 에리어
			{
				enermy_rsp = rand() % 4;

				if (enermy_rsp == 1 || enermy_rsp == 2 || enermy_rsp == 3)
				{
					goto enermy_rsp;
				}
				else
				{
					goto enermy_rsp1;
				}

			enermy_rsp:		

				// 누가 승리인지 판별
				if (rsp == 1)
				{
					if (enermy_rsp == 1)
					{
						enermy_rsp = "가위";
						goto bigim;
					}
					else if (enermy_rsp == 2)
					{
						enermy_rsp = "바위";
						goto defeat;
					}
					else if (enermy_rsp == 3)
					{
						enermy_rsp = "보";
						goto win;
					}
				}


				if (rsp == 2)
				{
					if (enermy_rsp == 1)
					{
						enermy_rsp = "가위";
						goto win;
					}
					else if (enermy_rsp == 2)
					{
						enermy_rsp = "바위";
						goto bigim;
					}
					else if (enermy_rsp == 3)
					{
						enermy_rsp = "보";
						goto defeat;
					}
				}


				if (rsp == 3)
				{
					if (enermy_rsp == 1)
					{
						enermy_rsp = "가위";
						goto defeat;
					}
					else if (enermy_rsp == 2)
					{
						enermy_rsp = "바위";
						goto win;
					}
					else if (enermy_rsp == 3)
					{
						enermy_rsp = "보";
						goto bigim;
					}
				}
			}



			// 적의 가위바위보를 정수로 저장한 다음 strcmp로 비교한 값을 여기서 비교해서 승, 패 를 가린다.
			{
				// 승리!
				if (cmp == 123211) 
				{
				win:

					attack = 1; // 내가 공격하는 것, 공격하는 음원을 넣기 위해

					// 데미지 입히기!
					randam = rand() % highpower + 1;
					if (randam < lowpower + 1 )
					{
						goto win;
					}
					else if (randam > highpower)
					{
						goto win;
					}
					else if (rand == 0)
					{
						goto win;
					}

					_1eheart = _1eheart - randam;


					sprintf(message, "[ 승 ]         적이 %s를 냈다!\n\n적에게 %d 만큼 데미지를 입혔다!", enermy_rsp, randam);

					//적의 체력이 1보다 작으면 승리하는 메세지 추가.
					if (_1eheart < 1)
					{
						sprintf(message, "[ 승 ]         적이 %s를 냈다!\n\n적에게 %d 만큼 데미지를 입혔다!\n\n\n        적을 처치했다!!!", enermy_rsp, randam);
					}
				}

				// 패배!
				else if (cmp == 123210)
				{
				defeat:

					attack = -1; //상대가 공격한다는 뜻 잘 이해가 안되면 승리의 attack 변수를 보자.

					randam = rand() % _1ehpower + 1;
					if (randam < _1elpower)
					{
						goto defeat;
					}
					else if (randam > _1ehpower)
					{
						goto defeat;
					}
					else if (randam == 0)
					{
						goto defeat;
					}

					heart = heart - randam;

					sprintf(message, "[ 패 ]         적이 %s를 냈다!\n\n적한테서 %d 만큼 데미지를 받았다!", enermy_rsp, randam);

					// 내 체력이 1이상인지 확인
					if (heart < 1)
					{
						sprintf(message, "[ 패 ]         적이 %s를 냈다!\n적한테서 %d 만큼 데미지를 받았다!\n\n크윽... 강하다..   좀 더 수련이 필요하겠어!", enermy_rsp, randam);
					}
				}
				// 비김!
				else if (cmp == 123210)
				{
				bigim:

					attack = 0; //비겼다는 뜻. 이해가 잘 안되면 승리부분을 보자.

					sprintf(message, "[ 비김 ]         적이 %s를 냈다!", enermy_rsp);
				}
			}


			
		} while (_1eheart >= 1);
		
		// 1단계 적을 물리치면 나오는 공간 

		PlaySound(TEXT("victory.wav"), NULL, SND_ASYNC | SND_LOOP); //승리 시 나오는 음악(신남, 흥겨움, 아주 좋다)

		printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("                                                                             [ 1 스테이지 ]                       l                  여기서 획득 가능한 무기                            \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("    %s                                                                                           l                                                                     \n", verinformation);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("                                                                                                                  l                                                                     \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		printf("                                                                                                                  l                                                                         \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("                                                                                                                  --------------------------------------------------------------------- \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                 　                                                                         　                                                                          \n");
		printf("                                                          　                                                                                                                            \n");
		printf("                                                         　  　                                                                                                                         \n");
		printf("                                                                                                                                                                                        \n");
		printf("         a          s          d                                                                                                                                                        \n");
		printf("         i          i          i                                                                                                        [ 덴 ]                                          \n");
		printf("        가위       바위        보                                                                                                                                                       \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                     ∧＿∧                                                                            ∧＿∧                                           \n");
		printf("                                                     (`'ω')                                                                          （`ω`）                                          \n");
		printf("                                                          つ                                                                            │ │                                           \n");
		printf("                                                      し-Ｊ                                                                             │ └─ --&                                     \n");
		printf("                                                                                                                                      << ㄴ __ ㅣ                                       \n");
		printf("                                                                                                                                          ∥￣∥                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                      공격력: %d ~ %d       체력: %d                                             적 공격력: %d ~ %d                       적 체력: %d                   \n", lowpower, highpower, heart, _1elpower, _1ehpower, _1eheart);
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
		printf("        %s                                                                                                                                                                              \n", message);
		printf(" 																																												        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("																																													    \n");
		printf("                                                                                                                                                                                        \n");
		printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");

		// ========================================================================================================스테이지 1======================================================\=========== 끝끝끝


		Sleep(7000);
	}



		













	// 버서커 공간, 공격 데미지랑 스킬 여기서 할당
	if (asd == "bercercer")
	{
	bercercer:



		goto ppap;  // 끝에 세미콜론이 없어 오류 방지
	}







	// 전사 공간, 공격 데미지랑 스킬 여기서 할당
	if (asd == "sword")
	{
	sword:

		goto ppap; // 끝에 세미콜론이 없어 오류 방지

	}











ppap:


	return 0;
}
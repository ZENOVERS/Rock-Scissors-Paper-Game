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


// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), as);  �̰��� �г��� ��
// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);  �̰��� ��� �۾���  

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

		printf("wav ������ attack.wav ������ �������� �ʽ��ϴ�. �ٿ�ε� �Ͻðڽ��ϱ�? (�� 1 / �ƴϿ� 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/attack.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/attack.wav");
		}

		printf("�ٿ��� �Ϸ�Ǿ����ϴ�. ���� ������ wav ������ �ְ� �ٽ� ������ �ּ���.");
		scanf("%d", &fileok);

		goto ppap;
	}

	if ((f = fopen("boss.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav ������ boss.wav ������ �������� �ʽ��ϴ�. �ٿ�ε� �Ͻðڽ��ϱ�? (�� 1 / �ƴϿ� 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/boss.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/boss.wav");
		}
		printf("�ٿ��� �Ϸ�Ǿ����ϴ�. ���� ������ wav ������ �ְ� �ٽ� ������ �ּ���.");
		scanf("%d", &fileok);
		goto ppap;
	}

	if ((f = fopen("main.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav ������ main.wav ������ �������� �ʽ��ϴ�. �ٿ�ε� �Ͻðڽ��ϱ�? (�� 1 / �ƴϿ� 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/main.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/main.wav");
		}	
		printf("�ٿ��� �Ϸ�Ǿ����ϴ�. ���� ������ wav ������ �ְ� �ٽ� ������ �ּ���.");
		scanf("%d", &fileok);

		goto ppap;
	}

	if ((f = fopen("trapcard.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav ������ trapcard.wav ������ �������� �ʽ��ϴ�. �ٿ�ε� �Ͻðڽ��ϱ�? (�� 1 / �ƴϿ� 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/trapcard.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/trapcard.wav");
		}
		printf("�ٿ��� �Ϸ�Ǿ����ϴ�. ���� ������ wav ������ �ְ� �ٽ� ������ �ּ���.");
		scanf("%d", &fileok);
		goto ppap;
	}

	if ((f = fopen("victory.wav", "r+b")) == NULL)
	{
		if (f != NULL)
		{
			fclose(f);
		}
		printf("wav ������ victory.wav ������ �������� �ʽ��ϴ�. �ٿ�ε� �Ͻðڽ��ϱ�? (�� 1 / �ƴϿ� 0) : ");
		scanf("%d", &fileok);

		if (fileok == 1)
		{
			if ((_access("Program Files\internet explorer\iexplore.exe", 2)) != -1)
				system("start internet explorer https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/victory.wav");
			else
				system("start https://github.com/ZENOVERS/Rock--Scissors--Paper--game/raw/master/wav/victory.wav");
		}
		printf("�ٿ��� �Ϸ�Ǿ����ϴ�. ���� ������ wav ������ �ְ� �ٽ� ������ �ּ���.");
		scanf("%d", &fileok);
		goto ppap;
	}



	PlaySound(TEXT("main.wav"), NULL, SND_ASYNC | SND_LOOP);


	srand(time(NULL));
	int cmp = 1; // ���� ������ �����ؼ� ���������� ���ϴ� ����
	char message[500]; // �پ��� �޼��� ���, ������ ���� �޼���, ������������ ����, �� �й� ���� ��
	int enermy_rsp; // ���� ���������� ������ �����ؼ� �м� ����
	int randam; // ���� ������ �Ҵ��� �������� �����ų� �Դ´�.

strcpy(message, "���� ����!!!   ������������ ����ּ���!!"); // �ؿ� ���� ȭ�鿡�� ������ ��, �� �ѹ��� ���;� �ϴ� �̰����ٰ� �̷��� ��.

	int sum = 0, as = 0, heart = 100, kk = 3, color = 3, asd, asds, aaa = 0, um1 = 0, ppap = 0, sel = 0;
	char arr[300] = { 0, };
	char verinformation[300];
	char rsp;

	//������ ���õ� ��
	int magicer_talent, hin = 99;
	int lowpower = 2 , highpower = 5;
	int mydam3; // �� ������ ���� �� ���� ���ϱ� 3

	// ���� ���ݷ°� ü�� ����ĭ
	int _1eheart = 10, _1elpower = 1, _1ehpower = 5;
	char _1result[300];

	int attack = 0;
	//�����ϴ� ������ �ֱ� ����, if������ attack = 1 = ���� ����,   attack = - 1 = ��� ���� attack = 0 = ���

	setlocale(LC_ALL, " ");      //����ȭ ������ ���������� ����

start:
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                         (C) 2019. ȫ���� all rights reserved.\n\n\n\n\n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf("[ BETA VER. 6.0.0.0 ]      Game CODE (C Language) : https://github.com/ZENOVERS/Rock--Scissors--Paper--game\n\n\n\n\n\n\n\n\n");

	sprintf(verinformation, "%s", "[BETA VER. 6.0.0.0]");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("<<< ���� ���� >>>\n\n\n{\n\n���� óġ �� ���� Ȯ���� �������� ����˴ϴ�.(������)\n\n�� óġ �� ������ �߰��˴ϴ�.(������)\n\n�⺻ ������ 100 �Դϴ�.\n\n�г����� ������ �����Դϴ�. �ѱ��� �Է� �� ������ ���� ��찡 �ֽ��ϴ�.\n\n���ǿ� �������� ���� �г����� ����ó�� �մϴ�.\n\n}");

assa:


	for (int i = 0; i < 300; i++)
	{
		arr[i] = 0;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n\n\n\n\n\n�г����� �Է��� �ּ��� (3�� �̻� 50�� ����) : ");
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
		printf("\n\n\n\n�г��� ���� ������ Ȯ���� �ּ���.");

		*arr = aaa;
		ClearReadBuffer();

		goto assa;
	}


	if (strcmp(arr, "admin mode") == 0 || strcmp(arr, "������ ���") == 0)
	{
		printf("�ּ� ������, �ִ� ������, ü��: ");
		scanf("%d %d %d", &lowpower, &highpower, &heart);

		ClearReadBuffer();
		goto assa;
	}
	else if (strcmp(arr, "enemy admin mode") == 0 || strcmp(arr, "�� ������ ���") == 0)
	{
		printf("�ּ� ������, �ִ� ������, ü��");
		scanf("%d %d %d", &_1elpower, &_1ehpower, &_1eheart);

		ClearReadBuffer();
		goto assa;
	}



	ClearReadBuffer();
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nȯ���մϴ�!! [ %s ] ��!", arr);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n����� �г��� ���� ������ �ּ��� (��ȣ�� �Է�)\n\n\n\n\n");

	{
		kk = 3;
		color = 3;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf("\n\n\n\n��ȣ�� �Է�: ");
		scanf("%d", &as);

	aaa: // ������� ����� �� 4��, 12�� �ϸ� ����� �´�.
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("\n\n\n\n\n\n\n\n\n\n\n[");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), as);
		printf(" %s ", arr);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("]");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

		ClearReadBuffer();

		printf(" ��, ���� ������ �� ����� �۾����� ������ �ּ���(��ȣ�� �Է�)\n\n\n\n\n\n");

		kk = 3;
		color = 3;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����       (������ ��õ)\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����       (������ ��õ)\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;
		kk += 1;
		color += 1;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kk);
		printf("%d�� : �̸�����\n\n", color);
		++color;
		++kk;

		printf("\n\n\n\n��ȣ�� �Է� (����! 12, 4���� ���úҰ�) : ");
		scanf("%d", &asd);

		if (asd == 12 || asd == 4)
		{
			goto aaa;
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("\n\n\n\n\n\n�����Ǿ����ϴ�.    �������� ������ 1, �ٽ� �����Ϸ��� 0�� �Է��� �ּ���: ");
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

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n<<<<<<<   ĳ���͸� �����Ͽ� �ּ���   >>>>>>>\n\n\n\n\n\n\n\n\n\n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("<<<<<<<< �� �� �� >>>>>>>\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf(" ---------------------------------------------------------\n");
	printf("l                      1. [����]                          l\n");
	printf("l                                                         l\n");
	printf("l            �ɷ�: ������ ȹ�� Ȯ����                     l\n");
	printf("l                   10\%\% �����Ѵ�.                         l\n");
	printf("l                                                         l\n");
	printf("l                                                         l\n");
	printf("l                       (�нú�)                          l\n");
	printf("l---------------------------------------------------------l\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n\n<<<<<<<< ������... >>>>>>>\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("l---------------------------------------------------------l\n");
	printf("l                      2. [������]                        l\n");
	printf("l                                                         l\n");
	printf("l            �ɷ�: ���� ������ 5\%\% Ȯ����                  l\n");
	printf("l                 �����x3 �� ���ظ� ������.              l\n");
	printf("l                                                         l\n");
	printf("l                                                         l\n");
	printf("l                        (����)                           l\n");
	printf("l---------------------------------------------------------l\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\n\n\n\n<<<<<<<< �� �� �� >>>>>>>\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("l---------------------------------------------------------l\n");
	printf("l                      3. [����Ŀ]                        l\n");
	printf("l                                                         l\n");
	printf("l            �ɷ�: ���� ������ 5\%\% Ȯ���� ��� ü��        l\n");
	printf("l                  1 / 10 �� �����Ѵ�.                    l\n");
	printf("l                                                         l\n");
	printf("l                                                         l\n");
	printf("l                         (����)                          l\n");
	printf(" ---------------------------------------------------------\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf("\n\n\n\n\n\n\n\nĳ���͸� �����ϰ� ����ּ���. �� �� ���� �� ������ �ٲ� �� �����ϴ�.");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);

	printf("\n\n\n\n���� (��ȣ) : ");
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


	����
	�������
	ĳ��
	����
	�ٸ�
	����
	����
	!!
	!


	*/




	ClearReadBuffer();


	// ������ ����. ��ų ���⼭ �Ҵ�
	if (asd == "magic")
	{
	magic:

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("\n\n\n\n\n\n[ ������ ]");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("�� �����Ǿ����ϴ�.       �������� ������ 1, �ٽ� �����Ϸ��� 0 �� �Է��� �ּ���: ");
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
		printf("Ʃ�丮�� �ε���.... (�ð��� �ɸ����� �ֽ��ϴ�.)");
		

		Sleep(3000);



	asj:


		system("cls");

		printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
		printf("                                                                                                                                                                                        \n");
		printf("    %s      ----------- [ ���� ���� ]                                                                                                                                                   \n", verinformation);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("                                                                                   !     <<<<<<< Ʃ �� �� �� >>>>>>>     !                                                                         \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), asd);
		printf("                                                                                                                                                                                        \n");
		printf("              ü��: %d      --------- [ ���� ���� ü�� ]                                                                                                                                \n", heart);
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("              ���ݷ�: %d ~ %d       ---------- [ ���� ���� ���ݷ� ] (������ %d ���� %d ������ �������� ��)                                                                              \n", lowpower, highpower, lowpower, highpower);
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                             ���� ���۹�                                                                                                                                                \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                       a          s          d                                                                                                                                          \n");
		printf("                       i          i          i                                                                                                                                          \n");
		printf("                      ����       ����        ��                                                                                                                                         \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("               ���������� ����!!!  :        --------- [ a, s, d �� �ϳ��� ������ �Է� ]                                                                                                \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                       [ ���� ��� ǥ��]                                                                                                               \n");
		printf("                                                                                                                                                                                       \n");
		printf("                                                                                                                                                                                       \n");
		printf(" --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");



		printf("Ʃ�丮���� �����ðڽ��ϱ�? (�� 1 /�ƴϿ� 0) : ");
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


		printf("�ε���.... (�ð��� �ɸ����� �ֽ��ϴ�.)");
		// �ð�������
		

		PlaySound(TEXT("trapcard.wav"), NULL, SND_LOOP | SND_ASYNC);
	re: // �������������� �̻��Ѱ� �Է��ϸ� �ٽ� ���� ��.


		system("cls");




		// ========================================================================================================�������� 1======================================================\=========== ���۽��۽���

		do  // do while�� �� ü���� 0 ���ϱ��� �ݺ�
		{

			
		
			system("cls");
		
			printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("                                                                             [ 1 �������� ]                   l                      ���⼭ ȹ�� ������ ����                            \n");
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
			printf("                                 ��                                                                         ��                                                                          \n");
			printf("                                                          ��                                                                                                                            \n");
			printf("                                                         ��  ��                                                                                                                         \n");
			printf("                                                                                                                                                                                        \n");
			printf("         a          s          d                                                                                                                                                        \n");
			printf("         i          i          i                                                                                                        [ �� ]                                          \n");
			printf("        ����       ����        ��                                                                                                                                                       \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                     ���ߡ�                                                                            ���ߡ�                                           \n");
			printf("                                                     (`'��')                                                                          ��`��`��                                          \n");
			printf("                                                          ��                                                                            �� ��                                           \n");
			printf("                                                      ��-��                                                                             �� ���� --&                                     \n");
			printf("                                                                                                                                      << �� __ ��                                       \n");
			printf("                                                                                                                                          ������                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                                                                                                                                                                        \n");
			printf("                                      ���ݷ�: %d ~ %d       ü��: %d                                             �� ���ݷ�: %d ~ %d                       �� ü��: %d                   \n", lowpower, highpower, heart, _1elpower, _1ehpower, _1eheart);
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

			// ���� ����� �ʾҴٸ� ȿ���� ���
			if (attack != 0)
			{
				ClearReadBuffer();
				PlaySound(TEXT("attack.wav"), NULL, SND_SYNC);
				goto endmusic; //���⼭ �̻��ϰ� 2���� �ݺ��Ǿ� �׷��� ���ϰ� Ż��
			}
	
			if (attack == 100)
			{
			endmusic: // �ٷ� ���ٿ� �����ִ�.
				PlaySound(TEXT("trapcard.wav"), NULL, SND_LOOP | SND_ASYNC);
			}

			//ü���� ������ ����
			if (heart < 1)
			{
				printf("\n\n�絵��?? (�� 1 : �ƴϿ� 2) : ");
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
			printf("���������� ����!!!  : ");
			scanf("%c", &rsp); // ������ ���������� ��� ����


			system("cls");
			//��?��


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

			// ���� ���������� ���ϴ� ������
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

				// ���� �¸����� �Ǻ�
				if (rsp == 1)
				{
					if (enermy_rsp == 1)
					{
						enermy_rsp = "����";
						goto bigim;
					}
					else if (enermy_rsp == 2)
					{
						enermy_rsp = "����";
						goto defeat;
					}
					else if (enermy_rsp == 3)
					{
						enermy_rsp = "��";
						goto win;
					}
				}


				if (rsp == 2)
				{
					if (enermy_rsp == 1)
					{
						enermy_rsp = "����";
						goto win;
					}
					else if (enermy_rsp == 2)
					{
						enermy_rsp = "����";
						goto bigim;
					}
					else if (enermy_rsp == 3)
					{
						enermy_rsp = "��";
						goto defeat;
					}
				}


				if (rsp == 3)
				{
					if (enermy_rsp == 1)
					{
						enermy_rsp = "����";
						goto defeat;
					}
					else if (enermy_rsp == 2)
					{
						enermy_rsp = "����";
						goto win;
					}
					else if (enermy_rsp == 3)
					{
						enermy_rsp = "��";
						goto bigim;
					}
				}
			}



			// ���� ������������ ������ ������ ���� strcmp�� ���� ���� ���⼭ ���ؼ� ��, �� �� ������.
			{
				// �¸�!
				if (cmp == 123211) 
				{
				win:

					attack = 1; // ���� �����ϴ� ��, �����ϴ� ������ �ֱ� ����

					// ������ ������!
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


					sprintf(message, "[ �� ]         ���� %s�� �´�!\n\n������ %d ��ŭ �������� ������!", enermy_rsp, randam);

					//���� ü���� 1���� ������ �¸��ϴ� �޼��� �߰�.
					if (_1eheart < 1)
					{
						sprintf(message, "[ �� ]         ���� %s�� �´�!\n\n������ %d ��ŭ �������� ������!\n\n\n        ���� óġ�ߴ�!!!", enermy_rsp, randam);
					}
				}

				// �й�!
				else if (cmp == 123210)
				{
				defeat:

					attack = -1; //��밡 �����Ѵٴ� �� �� ���ذ� �ȵǸ� �¸��� attack ������ ����.

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

					sprintf(message, "[ �� ]         ���� %s�� �´�!\n\n�����׼� %d ��ŭ �������� �޾Ҵ�!", enermy_rsp, randam);

					// �� ü���� 1�̻����� Ȯ��
					if (heart < 1)
					{
						sprintf(message, "[ �� ]         ���� %s�� �´�!\n�����׼� %d ��ŭ �������� �޾Ҵ�!\n\nũ��... ���ϴ�..   �� �� ������ �ʿ��ϰھ�!", enermy_rsp, randam);
					}
				}
				// ���!
				else if (cmp == 123210)
				{
				bigim:

					attack = 0; //���ٴ� ��. ���ذ� �� �ȵǸ� �¸��κ��� ����.

					sprintf(message, "[ ��� ]         ���� %s�� �´�!", enermy_rsp);
				}
			}


			
		} while (_1eheart >= 1);
		
		// 1�ܰ� ���� ����ġ�� ������ ���� 

		PlaySound(TEXT("victory.wav"), NULL, SND_ASYNC | SND_LOOP); //�¸� �� ������ ����(�ų�, ��ܿ�, ���� ����)

		printf(" -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("                                                                             [ 1 �������� ]                       l                  ���⼭ ȹ�� ������ ����                            \n");
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
		printf("                                 ��                                                                         ��                                                                          \n");
		printf("                                                          ��                                                                                                                            \n");
		printf("                                                         ��  ��                                                                                                                         \n");
		printf("                                                                                                                                                                                        \n");
		printf("         a          s          d                                                                                                                                                        \n");
		printf("         i          i          i                                                                                                        [ �� ]                                          \n");
		printf("        ����       ����        ��                                                                                                                                                       \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                     ���ߡ�                                                                            ���ߡ�                                           \n");
		printf("                                                     (`'��')                                                                          ��`��`��                                          \n");
		printf("                                                          ��                                                                            �� ��                                           \n");
		printf("                                                      ��-��                                                                             �� ���� --&                                     \n");
		printf("                                                                                                                                      << �� __ ��                                       \n");
		printf("                                                                                                                                          ������                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                                                                                                                                                                        \n");
		printf("                                      ���ݷ�: %d ~ %d       ü��: %d                                             �� ���ݷ�: %d ~ %d                       �� ü��: %d                   \n", lowpower, highpower, heart, _1elpower, _1ehpower, _1eheart);
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

		// ========================================================================================================�������� 1======================================================\=========== ������


		Sleep(7000);
	}



		













	// ����Ŀ ����, ���� �������� ��ų ���⼭ �Ҵ�
	if (asd == "bercercer")
	{
	bercercer:



		goto ppap;  // ���� �����ݷ��� ���� ���� ����
	}







	// ���� ����, ���� �������� ��ų ���⼭ �Ҵ�
	if (asd == "sword")
	{
	sword:

		goto ppap; // ���� �����ݷ��� ���� ���� ����

	}











ppap:


	return 0;
}
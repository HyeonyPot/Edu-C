#include <stdio.h>
void mealtimecheck(int mealtime)
{
	switch (mealtime)
	{
	case 1://��ħ
		printf("��ħ�ð�");
		break;
	case 2://��ħ����
		printf("��ħ���Ľð�");
		break;
	case 3://����
		printf("���ɽð�");
		break;
	case 4://���ɰ���
		printf("���ɰ��Ľð�");
		break;
	case 5://����
		printf("����ð�");
		break;
	case 6://���ᰣ��
		printf("���ᰣ�Ľð�");
		break;
	case 7://�߽�
		printf("�߽Ľð�");
		break;
	}

}
int pizzaslice(int food_select)
{
	int slice;
	switch (food_select)
	{
	case 1://���۷δ�
		printf("�� ������ ���۷δ� ���ڸ� ���̰ڽ��ϱ�?(�ִ� 8����)\n");
		break;
	case 2://����
		printf("�� ������ ���� ���ڸ� ���̰ڽ��ϱ�?(�ִ� 8����)\n");
		break;
	case 3://ġ��
		printf("�� ������ ġ�� ���ڸ� ���̰ڽ��ϱ�?(�ִ� 8����)\n");
		break;
	case 4://���ξ���
		printf("���ξ���!!...�Ǹ�����..\n");
		printf("����� �Ǹ���!!!\n");
		printf("�� ������ ���ξ��� ���ڸ� ���ϴ°�?(�ִ� 8����)\n");
		break;
	case 5://��������
		printf("�� ������ �������� ���ڸ� ���̰ڽ��ϱ�?(�ִ� 8����)\n");
		break;
	}
	scanf("%d", &slice);
	if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
	{
		return slice;
	}
	else
		return 0;
}
int chickenhalf()
{
	int half;
	printf("� ġŲ���� ����ֽ���\n");
	printf("1.���Ѹ���\n2.�ݹ�ġŲ\n");
	scanf("%d", &half);
	if (half == 1 || half == 2)
		switch (half)
		{
		case 1:
			return half;
			break;
		case 2:
			return half;
			break;
		}
	else
	{
		return 0;
	
	}
}
int main()
{
	int sunsal;
	int chicken_menu;
	int slice;
	int shutdown = 0;
	char nextday;
	int birth = 3;
	char name_master[30];
	char name_pet[30];
	int char_select;
	int hunger;
	int mental;
	int ssipduck;
	int food_select;
	int errorcheck = 1;
	int fat;
	int day=1;
	int mealtime;
	int gamestart = 1;
	
	restart:
	
	if (gamestart == 0)
	{
		printf("�ٽ��Ͻðڽ��ϱ�?");
		scanf(" %c", &nextday);
		if (nextday == 'Y' || nextday == 'y')
		{
			gamestart = 1;
		}
		else
		{
			printf("��,�׾������.\n");
			gamestart = 0; return 0;
		}
	}
	while (gamestart>0)
	{
	printf("����� �̸��� �����Դϱ�?\n");
	scanf("%s", &name_master);
	printf("%s ���� Ű��ô� �װ��� �̸��� �����Դϱ�?\n", name_master);
	scanf("%s", &name_pet);
	printf("%s �� � ������ %s�� Ű��� ��ʴϱ�?\n\n", name_master, name_pet);
	printf("(����)������ ��� ������ ��ȸ�� �ѹ��� �־����ϴ�.\n\n");
	
	printf("1.�Ű������� %s\n\n", name_pet);
	printf("2.��������� %s\n\n", name_pet);
	printf("3.���������� %s\n\n", name_pet);
	printf("4.�ô������� %s\n\n", name_pet);
	printf("5.��������� %s\n\n", name_pet);
	scanf("%d", &char_select);


	switch (char_select)//��������
	{
		case 1:
			printf("�Ű������� %s\n\n", name_pet);
			hunger = _CRT_INT_MAX;
			fat = 50;
			break;
		case 2:
			printf("��������� %s\n\n", name_pet);
			fat = 0;
			hunger = 50;
			break;
		case 3:
			printf("���������� %s\n\n", name_pet);
			mental = 500;
			break;
		case 4:
			printf("�ô������� %s\n\n", name_pet);
			ssipduck = 500;
			break;
		case 5:
			printf("��������� %s\n\n", name_pet);
			printf("������� �����ϴٴ�\n\n��,������\n\n");
			gamestart = 0; goto restart;
			return 0;
		default:		
			printf("\n\n��,������\n\n");
			gamestart = 0; 
			goto restart; 
			return 0;		
	}
	//��������
	printf("\n\n\n[%s Ű���]\n\n\n", name_pet);
	switch (char_select)
	{
	case 1://�Ű��ǰ��			
		for (day = 1; day <= 365; day++)
		{
			printf("\n\n%d����\n\n", day);
			for (mealtime = 1; mealtime <= 7; mealtime++)
			{
				printf("\n\n");
				mealtimecheck(mealtime);
				printf("\n\n");
				while (shutdown < 1)
				{
					printf("%s ��,%s ���� ������ ���̰ڽ��ϱ�?\n", name_master, name_pet);
					printf("1.��\n");
					printf("2.����\n");
					printf("3.ġŲ\n");
					printf("4.��Ʈ����\n");
					scanf("%d", &food_select);
					if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
					{
						switch (food_select)
						{
						case 1://������
						{
							errorcheck = 1;
							printf("� ������ ����ֽ���\n");
							while (errorcheck > 0)
							{
								printf("1.�ٰ�Ʈ\n");
								printf("2.���ڻ�\n");
								printf("3.���ϻ�\n");
								printf("4.�Ļ�\n");
								scanf(" %d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
								{
									switch (food_select)
									{

									case 1:
									{
										printf("�ٰ�Ʈ�� �Խ��ϴ�.\n");
										printf("������� 100�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										hunger -= 100;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 2:
									{
										printf("���ڻ��� �Խ��ϴ�.\n");
										printf("������� 40�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										hunger -= 40;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 3:
									{
										printf("���ϻ��� �Խ��ϴ�.\n");
										printf("������� 50�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										hunger -= 50;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 4:
									{
										printf("�Ļ��� �Խ��ϴ�.\n");
										printf("������� 70�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										errorcheck = 70;
										shutdown = 1;
										break;
									}

									}
								}
								else
								{
									printf("\n\n��,������\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 2://��������
						{
							errorcheck = 1;
							printf("� �������� ����ֽ���\n");
							while (errorcheck > 0)
							{
								printf("1.���۷δ�����\n");
								printf("2.��������\n");
								printf("3.ġ������\n");
								printf("4.���ξ�������\n");
								printf("5.������������\n");
								scanf("%d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4 || food_select == 5)
								{
									switch (food_select)
									{

									case 1://���۷δ�����
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("���۷δ����ڸ� �Խ��ϴ�.\n");
											printf("������� 120�϶��մϴ�.\n");
											printf("�񸸵��� %d����մϴ�.\n", slice);
											fat += slice;
											hunger -= 120;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 2://��������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("�������ڸ� �Խ��ϴ�.\n");
											printf("������� 200�϶��մϴ�.\n");
											printf("�񸸵��� %d����մϴ�.\n", slice * 2);
											fat += slice * 2;
											hunger -= 200;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 3://ġ������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("ġ�����ڸ� �Խ��ϴ�.\n");
											printf("������� 100�϶��մϴ�.\n");
											printf("�񸸵��� %d����մϴ�.\n", slice);
											fat += slice;
											hunger -= 100;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 4://���ξ�������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("���ξ������ڸ� �Խ��ϴ�.\n");
											printf("������� 100�϶��մϴ�.\n");
											printf("�񸸵��� %d�϶��մϴ�.\n", slice * 2);
											fat -= slice * 2;
											hunger -= 100;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 5://������������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("�����������ڸ� �Խ��ϴ�.\n");
											printf("������� 150�϶��մϴ�.\n");
											printf("�񸸵��� %d����մϴ�.\n", slice * 3);
											fat += slice * 3;
											hunger -= 200;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}

									}
								}
								else
								{
									printf("\n\n��,������\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 3://ġŲ
						{
							errorcheck = 1;
							printf("����� ġŲ�� �����Դϱ� ���Դϱ�\n");
							printf("1.����\n2.��\n");
							scanf("%d", &sunsal);
							if (sunsal == 1 || sunsal == 2)
							{
								switch (sunsal)
								{
								case 1://����
								{
									switch (chickenhalf())
									{
									case 1://�����Ѹ���
									{
										printf("1.�Ķ��̵�\n");
										printf("2.���\n");
										printf("3.����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵�ġŲ �Ѹ����� �Խ��ϴ�.\n");
												printf("������� 100�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("���ġŲ �Ѹ����� �Խ��ϴ�.\n");
												printf("������� 120�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("����ġŲ �Ѹ����� �Խ��ϴ�.\n");
												printf("������� 110�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 110;
												errorcheck = 0;
												shutdown = 1;
												break;
											}

											}
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}

									}
									case 2://����ݹ�
									{
										printf("1.�Ķ��̵�+ ���\n");
										printf("2.�Ķ��̵�+ ����\n");
										printf("3.��� + ����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵� + ��� ġŲ�� �Խ��ϴ�.\n");
												printf("������� 100�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("�Ķ��̵� + ���� ġŲ�� �Խ��ϴ�.\n");
												printf("������� 120�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("��� + ���� ġŲ�� �Խ��ϴ�.\n");
												printf("������� 150�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 150;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											break;
											}
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");

											gamestart = 0; goto restart; return 0;
											break;
										}
									}
									case 0:
									{
										printf("\n\n��,������\n\n");

										gamestart = 0; goto restart; return 0;
										break;
									}
									break;
									}
									break;
								}
								case 2://��
								{
									switch (chickenhalf())
									{
									case 1://���Ѹ���
									{
										printf("1.�Ķ��̵�\n");
										printf("2.���\n");
										printf("3.����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵�ġŲ �Ѹ����� �Խ��ϴ�.\n");
												printf("������� 100�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("���ġŲ �Ѹ����� �Խ��ϴ�.\n");
												printf("������� 120�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("����ġŲ �Ѹ����� �Խ��ϴ�.\n");
												printf("������� 110�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 110;
												errorcheck = 0;
												shutdown = 1;
												break;
											}

											}

										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://���ݹ�
									{
										printf("1.�Ķ��̵�+ ���\n");
										printf("2.�Ķ��̵�+ ����\n");
										printf("3.��� + ����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵� + ��� ġŲ�� �Խ��ϴ�.\n");
												printf("������� 100�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("�Ķ��̵� + ���� ġŲ�� �Խ��ϴ�.\n");
												printf("������� 120�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("��� + ���� ġŲ�� �Խ��ϴ�.\n");
												printf("������� 150�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 150;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											break;
											}
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");

											gamestart = 0; goto restart; return 0;
											break;
										}
										break;
									}
									case 0:
									{
										printf("\n\n��,������\n\n");

										gamestart = 0; goto restart; return 0;
										break;
									}
									break;
									}
									break;
								}
								break;
								}
							
								break;
							}
							else
							{
								printf("\n\n��,������\n\n");
								
								gamestart = 0; goto restart; return 0;
								break;
							}
							break;
						}
						case 4://��Ʈ����
						{
							printf("��Ʈ���ڴ� ������ ����.\n");
							printf("\n\n��,�ϻ��ϰŶ�\n\n");
							gamestart = 0; goto restart; return 0;
							break;
						}
						break;
						}
						if (hunger < 0)
						{
							printf("\n\n�ʹ� ��ҷ� %d��°��", day);
							mealtimecheck(mealtime);
							printf("�� �׾����ϴ�.\n\n");
							printf("\n\n��,������\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						if (fat > 100)
						{
							printf("\n\n�ʹ� �׶��� %d��°��", day);
							mealtimecheck(mealtime);
							printf("�� �׾����ϴ�.\n\n");
							printf("\n\n��,������\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						break;
					}
					else
					{
						printf("\n\n��,������\n\n");
						gamestart = 0; goto restart; return 0;
					}
				}
				shutdown = 0;
			}
			if (day == 365)
			{
				printf("1�������� ��������� ���ع��Ƚ��ϴ�.\n");
				printf("%s�� ȭ���� %s���� ���� �������ϴ�.\n", name_pet, name_master);
				printf("\n\n��,������\n\n");
				gamestart = 0; goto restart; return 0;
			}
		}
	case 2://����ǰ��
		for (day = 1; day <= 365; day++)
		{
			printf("\n\n%d����\n\n", day);
			for (mealtime = 1; mealtime <= 7; mealtime++)
			{
				printf("\n\n");
				mealtimecheck(mealtime);
				printf("\n\n");
				while (shutdown < 1)
				{
					printf("%s ��,%s ���� ������ ���̰ڽ��ϱ�?\n", name_master, name_pet);
					printf("1.��\n");
					printf("2.����\n");
					printf("3.ġŲ\n");
					printf("4.��Ʈ����\n");
					scanf("%d", &food_select);
					if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
					{
						switch (food_select)
						{
						case 1://������
						{
							errorcheck = 1;
							printf("� ������ ����ֽ���\n");
							while (errorcheck > 0)
							{
								printf("1.�ٰ�Ʈ\n");
								printf("2.���ڻ�\n");
								printf("3.���ϻ�\n");
								printf("4.�Ļ�\n");
								scanf(" %d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
								{
									switch (food_select)
									{

									case 1:
									{
										printf("�ٰ�Ʈ�� �Խ��ϴ�.\n");
										printf("������� 10�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										hunger -= 10;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 2:
									{
										printf("���ڻ��� �Խ��ϴ�.\n");
										printf("������� 5�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										hunger -= 5;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 3:
									{
										printf("���ϻ��� �Խ��ϴ�.\n");
										printf("������� 7�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										hunger -= 7;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 4:
									{
										printf("�Ļ��� �Խ��ϴ�.\n");
										printf("������� 12�϶��մϴ�.\n");
										printf("�񸸵��� 1����մϴ�.\n");
										fat += 1;
										errorcheck = 10;
										shutdown = 1;
										break;
									}

									}
								}
								else
								{
									printf("\n\n��,������\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 2://��������
						{
							errorcheck = 1;
							printf("� �������� ����ֽ���\n");
							while (errorcheck > 0)
							{
								printf("1.���۷δ�����\n");
								printf("2.��������\n");
								printf("3.ġ������\n");
								printf("4.���ξ�������\n");
								printf("5.������������\n");
								scanf("%d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4 || food_select == 5)
								{
									switch (food_select)
									{

									case 1://���۷δ�����
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("���۷δ����ڸ� �Խ��ϴ�.\n");
											printf("������� %d�϶��մϴ�.\n", 20 * slice);
											printf("�񸸵��� %d����մϴ�.\n", slice);
											fat += slice;
											hunger -= 20 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 2://��������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("�������ڸ� �Խ��ϴ�.\n");
											printf("������� %d�϶��մϴ�.\n", 15 * slice);
											printf("�񸸵��� %d����մϴ�.\n", slice * 2);
											fat += slice * 2;
											hunger -= 15 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 3://ġ������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("ġ�����ڸ� �Խ��ϴ�.\n");
											printf("������� %d�϶��մϴ�.\n", 7 * slice);
											printf("�񸸵��� %d����մϴ�.\n", slice);
											fat += slice;
											hunger -= 7 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 4://���ξ�������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("���ξ������ڸ� �Խ��ϴ�.\n");
											printf("��θ��� �������� �� ���� �� ������ �����ϴ�.\n");
											printf("���� �����ϴ� ������ ������ ��ϴ�.\n");
											printf("�񸸵��� %d�϶��մϴ�.\n", slice * 2);
											fat -= slice * 2;
											hunger = 50;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 5://������������
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d������ ", slice);
											printf("�����������ڸ� �Խ��ϴ�.\n");
											printf("������� %d�϶��մϴ�.\n", 15 * slice);
											printf("�񸸵��� %d����մϴ�.\n", slice * 3);
											fat += slice * 3;
											hunger -= slice * 15;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}

									}
								}
								else
								{
									printf("\n\n��,������\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 3://ġŲ
						{
							errorcheck = 1;
							printf("ġŲ�� �����Դϱ� ���Դϱ�\n");
							printf("1.����\n2.��\n");
							scanf("%d", &sunsal);
							if (sunsal == 1 || sunsal == 2)
							{							
								switch (sunsal)
								{
								case 1://����
								{
									switch (chickenhalf())
									{
									case 1://�����Ѹ���
									{
										printf("1.�Ķ��̵�\n");
										printf("2.���\n");
										printf("3.����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵�ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 5�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 5;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("���ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 7�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 7;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("����ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 10�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 10;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											break;
											}

										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://�ݹ�
									{
										printf("1.�Ķ��̵�\n");
										printf("2.���\n");
										printf("3.����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵� + ��� ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 12�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 12;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("�Ķ��̵� + ���� ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 15�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 15;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("��� + ���� ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 17�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 17;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											break;
											}
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 0:
									{
										printf("\n\n��,������\n\n");
										gamestart = 0; goto restart; return 0;
									}
									break;
									}
									break;
								}
								case 2://��
								{
									switch (chickenhalf())
									{
									case 1://���Ѹ���
									{
										printf("1.�Ķ��̵�\n");
										printf("2.���\n");
										printf("3.����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵�ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 5�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 5;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("���ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 7�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 7;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("����ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 10�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 10;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											break;
											}
											break;
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://���ݹ�
									{
										printf("1.�Ķ��̵�\n");
										printf("2.���\n");
										printf("3.����\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("�Ķ��̵� + ��� ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 12�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 12;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("�Ķ��̵� + ���� ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 15�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 15;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("��� + ���� ġŲ �������� �Խ��ϴ�.\n");
												printf("������� 17�϶��մϴ�.\n");
												printf("�񸸵��� %d����մϴ�.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 17;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											break;
											}
											
										}
										else
										{
											printf("\n\n��,������\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 0:
									{
										printf("\n\n��,������\n\n");
										gamestart = 0; goto restart; return 0;
									}

									}
									break;
								}
								break;
								}
								break;
								}
							else
							{
								printf("\n\n��,������\n\n");
								gamestart = 0; goto restart; return 0;
							}
						}
						case 4://��Ʈ����
						{
							printf("��Ʈ���ڴ� ������ ����.\n");
							printf("\n\n��,�ϻ��ϰŶ�\n\n");
							gamestart = 0; goto restart; return 0;
							break;
						}
						}
						if (hunger < 0)
						{
							printf("\n\n�ʹ� ��ҷ� %d��°��", day);
							mealtimecheck(mealtime);
							printf("�� �׾����ϴ�.\n\n");
							printf("\n\n��,������\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						if (fat > 100)
						{
							printf("\n\n�ʹ� �׶��� %d��°��", day);
							mealtimecheck(mealtime);
							printf("�� �׾����ϴ�.\n\n");
							printf("\n\n��,������\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
					}
					else
					{
						printf("\n\n��,������\n\n");
						gamestart = 0; goto restart; return 0;
					}
				}
				shutdown = 0;
			}
			if (day == 365)
			{
				printf("1���� ������ ��� ������ �������߽��ϴ�.\n");
				printf("%s�� ȭ���� %s���� ���� �������ϴ�.\n", name_pet, name_master);
				printf("\n\n��,������\n\n");
				gamestart = 0; goto restart; return 0;
			}
		}
	case 3://�����ǰ��
	{
		for (day = 1; day <= 364; day++)
		{
			printf("\n\n%d����\n\n", day);
			printf("%s : ���������������j������Q\n\n", name_pet);
			printf("%s : ��������������j������Q\n\n", name_pet);
			printf("%s : ���ηβط�Ѥ��طη�ѷ��j������Q\n\n", name_pet);
			printf("%s : ļ��ļ��ī��ī��ī��ļ��ļ���ڷӷκ�������\n\n", name_pet);
			printf("%s : �ٿ��������������;ƿҿպ��пҿ��п���\n\n", name_pet);
			printf("%s : �dȣ��ȣ��ȩ�ϔN��ȣ��ȭ�N������Q\n\n", name_pet);
			printf("%s : ���������������j������Q\n\n", name_pet);
		}
		printf("365��°���Դϴ�.%s��, �ῡ�� ����ðڽ��ϱ�?(Y/N)\n", name_master);
		scanf(" %c", &nextday);
		if (nextday == 'Y' || nextday == 'y')
		{
			printf("\n\n365����\n\n");
			
			printf("%s : ���������������j������Q\n", name_master);
			printf("%s : ���������������j������Q\n\n", name_pet);
			
			printf("%s : ��������������j������Q\n", name_master);
			printf("%s : ��������������j������Q\n\n", name_pet);
			
			printf("%s : ���ηβط�Ѥ��طη�ѷ��j������Q\n", name_master);
			printf("%s : ���ηβط�Ѥ��طη�ѷ��j������Q\n\n", name_pet);
			
			printf("%s : ļ��ļ��ī��ī��ī��ļ��ļ���ڷӷκ�������\n", name_master);
			printf("%s : ļ��ļ��ī��ī��ī��ļ��ļ���ڷӷκ�������\n\n", name_pet);
			
			printf("%s : �ٿ��������������;ƿҿպ��пҿ��п���\n", name_master);
			printf("%s : �ٿ��������������;ƿҿպ��пҿ��п���\n\n", name_pet);
			
			printf("%s : �dȣ��ȣ��ȩ�ϔN��ȣ��ȭ�N������Q\n", name_master);
			printf("%s : �dȣ��ȣ��ȩ�ϔN��ȣ��ȭ�N������Q\n\n", name_pet);
			
			printf("%s : ���������������j������Q\n", name_master);
			printf("%s : ���������������j������Q\n\n", name_pet);
			
			gamestart = 0; goto restart; return 0;
		}
		else
		{
			printf("%s�Ե� ���Ĺ��Ƚ��ϴ�.\n",name_master);
			gamestart = 0; goto restart; return 0;
		}
	}
	case 4://�ô��ǰ��
	{
		do
		{			
			printf("\n\n%d����\n\n", day);
			if (day % 1 == 0)
				printf("%s : ���ڴ��ڴϡ�\n\n", name_pet);
			if (day % 2 == 0)
				printf("%s : ���ڴ��ڴϡ�\n\n", name_pet);
			if (day % 3 == 0)
				printf("%s : ���ڴ��ڴϢ�\n\n", name_pet);
			if (day % 4 == 0)
				printf("%s : ���ڴ��ڴϢ�\n\n", name_pet);

			printf("%d��° ���Դϴ�.%s�� �ῡ�� ����ðڽ��ϱ�?(Y/N)\n", day, name_master);
			scanf(" %c", &nextday);
			if (nextday == 'Y' || nextday == 'y')
			{
				day++;
				continue;
			}
			else
			{
				printf("������ ���� �� ���� %s��(��) %s��(��) ���Ƚ��ϴ�.\n",name_master,name_pet);
				gamestart = 0; goto restart; return 0;
			}

		} while (day <= 365);
		printf("1�������� �������� ��ȭ�� %s��(��) %s���� ���� �������ϴ�.\n", name_pet, name_master);

	}
	}

		gamestart = 0; goto restart; return 0;
	
}
}

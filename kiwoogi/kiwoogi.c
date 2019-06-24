#include <stdio.h>
void mealtimecheck(int mealtime)
{
	switch (mealtime)
	{
	case 1://아침
		printf("아침시간");
		break;
	case 2://아침간식
		printf("아침간식시간");
		break;
	case 3://점심
		printf("점심시간");
		break;
	case 4://점심간식
		printf("점심간식시간");
		break;
	case 5://저녁
		printf("저녁시간");
		break;
	case 6://저녁간식
		printf("저녁간식시간");
		break;
	case 7://야식
		printf("야식시간");
		break;
	}

}
int pizzaslice(int food_select)
{
	int slice;
	switch (food_select)
	{
	case 1://페퍼로니
		printf("몇 조각의 페퍼로니 피자를 먹이겠습니까?(최대 8조각)\n");
		break;
	case 2://고구마
		printf("몇 조각의 고구마 피자를 먹이겠습니까?(최대 8조각)\n");
		break;
	case 3://치즈
		printf("몇 조각의 치즈 피자를 먹이겠습니까?(최대 8조각)\n");
		break;
	case 4://파인애플
		printf("파인애플!!...훌륭하지..\n");
		printf("대단히 훌륭해!!!\n");
		printf("몇 조각의 파인애플 피자를 원하는가?(최대 8조각)\n");
		break;
	case 5://포테이토
		printf("몇 조각의 포테이토 피자를 먹이겠습니까?(최대 8조각)\n");
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
	printf("어떤 치킨인지 골라주시죠\n");
	printf("1.닭한마리\n2.반반치킨\n");
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
		printf("다시하시겠습니까?");
		scanf(" %c", &nextday);
		if (nextday == 'Y' || nextday == 'y')
		{
			gamestart = 1;
		}
		else
		{
			printf("얘,죽어버리렴.\n");
			gamestart = 0; return 0;
		}
	}
	while (gamestart>0)
	{
	printf("당신의 이름은 무엇입니까?\n");
	scanf("%s", &name_master);
	printf("%s 님이 키우시는 그것의 이름은 무엇입니까?\n", name_master);
	scanf("%s", &name_pet);
	printf("%s 님 어떤 차원의 %s을 키우고 계십니까?\n\n", name_master, name_pet);
	printf("(주의)앞으로 모든 선택의 기회는 한번만 주어집니다.\n\n");
	
	printf("1.돼공차원의 %s\n\n", name_pet);
	printf("2.멸공차원의 %s\n\n", name_pet);
	printf("3.정공차원의 %s\n\n", name_pet);
	printf("4.씹덕차원의 %s\n\n", name_pet);
	printf("5.평범차원의 %s\n\n", name_pet);
	scanf("%d", &char_select);


	switch (char_select)//차원선택
	{
		case 1:
			printf("돼공차원의 %s\n\n", name_pet);
			hunger = _CRT_INT_MAX;
			fat = 50;
			break;
		case 2:
			printf("멸공차원의 %s\n\n", name_pet);
			fat = 0;
			hunger = 50;
			break;
		case 3:
			printf("정공차원의 %s\n\n", name_pet);
			mental = 500;
			break;
		case 4:
			printf("씹덕차원의 %s\n\n", name_pet);
			ssipduck = 500;
			break;
		case 5:
			printf("평범차원의 %s\n\n", name_pet);
			printf("평범함을 선택하다니\n\n얘,죽으렴\n\n");
			gamestart = 0; goto restart;
			return 0;
		default:		
			printf("\n\n얘,죽으렴\n\n");
			gamestart = 0; 
			goto restart; 
			return 0;		
	}
	//차원선택
	printf("\n\n\n[%s 키우기]\n\n\n", name_pet);
	switch (char_select)
	{
	case 1://돼공의경우			
		for (day = 1; day <= 365; day++)
		{
			printf("\n\n%d일차\n\n", day);
			for (mealtime = 1; mealtime <= 7; mealtime++)
			{
				printf("\n\n");
				mealtimecheck(mealtime);
				printf("\n\n");
				while (shutdown < 1)
				{
					printf("%s 님,%s 에게 무엇을 먹이겠습니까?\n", name_master, name_pet);
					printf("1.빵\n");
					printf("2.피자\n");
					printf("3.치킨\n");
					printf("4.민트초코\n");
					scanf("%d", &food_select);
					if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
					{
						switch (food_select)
						{
						case 1://빵종류
						{
							errorcheck = 1;
							printf("어떤 빵인지 골라주시죠\n");
							while (errorcheck > 0)
							{
								printf("1.바게트\n");
								printf("2.피자빵\n");
								printf("3.단팥빵\n");
								printf("4.식빵\n");
								scanf(" %d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
								{
									switch (food_select)
									{

									case 1:
									{
										printf("바게트를 먹습니다.\n");
										printf("배고픔이 100하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										hunger -= 100;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 2:
									{
										printf("피자빵을 먹습니다.\n");
										printf("배고픔이 40하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										hunger -= 40;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 3:
									{
										printf("단팥빵을 먹습니다.\n");
										printf("배고픔이 50하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										hunger -= 50;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 4:
									{
										printf("식빵을 먹습니다.\n");
										printf("배고픔이 70하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										errorcheck = 70;
										shutdown = 1;
										break;
									}

									}
								}
								else
								{
									printf("\n\n얘,죽으렴\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 2://피자종류
						{
							errorcheck = 1;
							printf("어떤 피자인지 골라주시죠\n");
							while (errorcheck > 0)
							{
								printf("1.페퍼로니피자\n");
								printf("2.고구마피자\n");
								printf("3.치즈피자\n");
								printf("4.파인애플피자\n");
								printf("5.포테이토피자\n");
								scanf("%d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4 || food_select == 5)
								{
									switch (food_select)
									{

									case 1://페퍼로니피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("페퍼로니피자를 먹습니다.\n");
											printf("배고픔이 120하락합니다.\n");
											printf("비만도가 %d상승합니다.\n", slice);
											fat += slice;
											hunger -= 120;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 2://고구마피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("고구마피자를 먹습니다.\n");
											printf("배고픔이 200하락합니다.\n");
											printf("비만도가 %d상승합니다.\n", slice * 2);
											fat += slice * 2;
											hunger -= 200;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 3://치즈피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("치즈피자를 먹습니다.\n");
											printf("배고픔이 100하락합니다.\n");
											printf("비만도가 %d상승합니다.\n", slice);
											fat += slice;
											hunger -= 100;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 4://파인애플피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("파인애플피자를 먹습니다.\n");
											printf("배고픔이 100하락합니다.\n");
											printf("비만도가 %d하락합니다.\n", slice * 2);
											fat -= slice * 2;
											hunger -= 100;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 5://포테이토피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("포테이토피자를 먹습니다.\n");
											printf("배고픔이 150하락합니다.\n");
											printf("비만도가 %d상승합니다.\n", slice * 3);
											fat += slice * 3;
											hunger -= 200;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}

									}
								}
								else
								{
									printf("\n\n얘,죽으렴\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 3://치킨
						{
							errorcheck = 1;
							printf("당신의 치킨은 순살입니까 뼈입니까\n");
							printf("1.순살\n2.뼈\n");
							scanf("%d", &sunsal);
							if (sunsal == 1 || sunsal == 2)
							{
								switch (sunsal)
								{
								case 1://순살
								{
									switch (chickenhalf())
									{
									case 1://순살한마리
									{
										printf("1.후라이드\n");
										printf("2.양념\n");
										printf("3.간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드치킨 한마리를 먹습니다.\n");
												printf("배고픔이 100하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("양념치킨 한마리를 먹습니다.\n");
												printf("배고픔이 120하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("간장치킨 한마리를 먹습니다.\n");
												printf("배고픔이 110하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}

									}
									case 2://순살반반
									{
										printf("1.후라이드+ 양념\n");
										printf("2.후라이드+ 간장\n");
										printf("3.양념 + 간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드 + 양념 치킨을 먹습니다.\n");
												printf("배고픔이 100하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("후라이드 + 간장 치킨을 먹습니다.\n");
												printf("배고픔이 120하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("양념 + 간장 치킨을 먹습니다.\n");
												printf("배고픔이 150하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");

											gamestart = 0; goto restart; return 0;
											break;
										}
									}
									case 0:
									{
										printf("\n\n얘,죽으렴\n\n");

										gamestart = 0; goto restart; return 0;
										break;
									}
									break;
									}
									break;
								}
								case 2://뼈
								{
									switch (chickenhalf())
									{
									case 1://뼈한마리
									{
										printf("1.후라이드\n");
										printf("2.양념\n");
										printf("3.간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드치킨 한마리를 먹습니다.\n");
												printf("배고픔이 100하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("양념치킨 한마리를 먹습니다.\n");
												printf("배고픔이 120하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("간장치킨 한마리를 먹습니다.\n");
												printf("배고픔이 110하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://뼈반반
									{
										printf("1.후라이드+ 양념\n");
										printf("2.후라이드+ 간장\n");
										printf("3.양념 + 간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드 + 양념 치킨을 먹습니다.\n");
												printf("배고픔이 100하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("후라이드 + 간장 치킨을 먹습니다.\n");
												printf("배고픔이 120하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("양념 + 간장 치킨을 먹습니다.\n");
												printf("배고픔이 150하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");

											gamestart = 0; goto restart; return 0;
											break;
										}
										break;
									}
									case 0:
									{
										printf("\n\n얘,죽으렴\n\n");

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
								printf("\n\n얘,죽으렴\n\n");
								
								gamestart = 0; goto restart; return 0;
								break;
							}
							break;
						}
						case 4://민트초코
						{
							printf("민트초코는 언제나 옳지.\n");
							printf("\n\n얘,하산하거라\n\n");
							gamestart = 0; goto restart; return 0;
							break;
						}
						break;
						}
						if (hunger < 0)
						{
							printf("\n\n너무 배불러 %d일째날", day);
							mealtimecheck(mealtime);
							printf("에 죽었습니다.\n\n");
							printf("\n\n얘,죽으렴\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						if (fat > 100)
						{
							printf("\n\n너무 뚱뚱해 %d일째날", day);
							mealtimecheck(mealtime);
							printf("에 죽었습니다.\n\n");
							printf("\n\n얘,죽으렴\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						break;
					}
					else
					{
						printf("\n\n얘,죽으렴\n\n");
						gamestart = 0; goto restart; return 0;
					}
				}
				shutdown = 0;
			}
			if (day == 365)
			{
				printf("1년이지나 모든음식이 상해버렸습니다.\n");
				printf("%s는 화가나 %s님의 곁을 떠났습니다.\n", name_pet, name_master);
				printf("\n\n얘,죽으렴\n\n");
				gamestart = 0; goto restart; return 0;
			}
		}
	case 2://멸공의경우
		for (day = 1; day <= 365; day++)
		{
			printf("\n\n%d일차\n\n", day);
			for (mealtime = 1; mealtime <= 7; mealtime++)
			{
				printf("\n\n");
				mealtimecheck(mealtime);
				printf("\n\n");
				while (shutdown < 1)
				{
					printf("%s 님,%s 에게 무엇을 먹이겠습니까?\n", name_master, name_pet);
					printf("1.빵\n");
					printf("2.피자\n");
					printf("3.치킨\n");
					printf("4.민트초코\n");
					scanf("%d", &food_select);
					if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
					{
						switch (food_select)
						{
						case 1://빵종류
						{
							errorcheck = 1;
							printf("어떤 빵인지 골라주시죠\n");
							while (errorcheck > 0)
							{
								printf("1.바게트\n");
								printf("2.피자빵\n");
								printf("3.단팥빵\n");
								printf("4.식빵\n");
								scanf(" %d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
								{
									switch (food_select)
									{

									case 1:
									{
										printf("바게트를 먹습니다.\n");
										printf("배고픔이 10하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										hunger -= 10;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 2:
									{
										printf("피자빵을 먹습니다.\n");
										printf("배고픔이 5하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										hunger -= 5;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 3:
									{
										printf("단팥빵을 먹습니다.\n");
										printf("배고픔이 7하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										hunger -= 7;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 4:
									{
										printf("식빵을 먹습니다.\n");
										printf("배고픔이 12하락합니다.\n");
										printf("비만도가 1상승합니다.\n");
										fat += 1;
										errorcheck = 10;
										shutdown = 1;
										break;
									}

									}
								}
								else
								{
									printf("\n\n얘,죽으렴\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 2://피자종류
						{
							errorcheck = 1;
							printf("어떤 피자인지 골라주시죠\n");
							while (errorcheck > 0)
							{
								printf("1.페퍼로니피자\n");
								printf("2.고구마피자\n");
								printf("3.치즈피자\n");
								printf("4.파인애플피자\n");
								printf("5.포테이토피자\n");
								scanf("%d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4 || food_select == 5)
								{
									switch (food_select)
									{

									case 1://페퍼로니피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("페퍼로니피자를 먹습니다.\n");
											printf("배고픔이 %d하락합니다.\n", 20 * slice);
											printf("비만도가 %d상승합니다.\n", slice);
											fat += slice;
											hunger -= 20 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 2://고구마피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("고구마피자를 먹습니다.\n");
											printf("배고픔이 %d하락합니다.\n", 15 * slice);
											printf("비만도가 %d상승합니다.\n", slice * 2);
											fat += slice * 2;
											hunger -= 15 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 3://치즈피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("치즈피자를 먹습니다.\n");
											printf("배고픔이 %d하락합니다.\n", 7 * slice);
											printf("비만도가 %d상승합니다.\n", slice);
											fat += slice;
											hunger -= 7 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 4://파인애플피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("파인애플피자를 먹습니다.\n");
											printf("배부름을 느끼지만 더 먹을 수 있을것 같습니다.\n");
											printf("새로 시작하는 상쾌한 느낌이 듭니다.\n");
											printf("비만도가 %d하락합니다.\n", slice * 2);
											fat -= slice * 2;
											hunger = 50;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 5://포테이토피자
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%d조각의 ", slice);
											printf("포테이토피자를 먹습니다.\n");
											printf("배고픔이 %d하락합니다.\n", 15 * slice);
											printf("비만도가 %d상승합니다.\n", slice * 3);
											fat += slice * 3;
											hunger -= slice * 15;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}

									}
								}
								else
								{
									printf("\n\n얘,죽으렴\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 3://치킨
						{
							errorcheck = 1;
							printf("치킨은 순살입니까 뼈입니까\n");
							printf("1.순살\n2.뼈\n");
							scanf("%d", &sunsal);
							if (sunsal == 1 || sunsal == 2)
							{							
								switch (sunsal)
								{
								case 1://순살
								{
									switch (chickenhalf())
									{
									case 1://순살한마리
									{
										printf("1.후라이드\n");
										printf("2.양념\n");
										printf("3.간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드치킨 한조각을 먹습니다.\n");
												printf("배고픔이 5하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 5;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("양념치킨 한조각을 먹습니다.\n");
												printf("배고픔이 7하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 7;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("간장치킨 한조각을 먹습니다.\n");
												printf("배고픔이 10하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://반반
									{
										printf("1.후라이드\n");
										printf("2.양념\n");
										printf("3.간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드 + 양념 치킨 한조각씩 먹습니다.\n");
												printf("배고픔이 12하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 12;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("후라이드 + 간장 치킨 한조각씩 먹습니다.\n");
												printf("배고픔이 15하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 15;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("양념 + 간장 치킨 한조각씩 먹습니다.\n");
												printf("배고픔이 17하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 0:
									{
										printf("\n\n얘,죽으렴\n\n");
										gamestart = 0; goto restart; return 0;
									}
									break;
									}
									break;
								}
								case 2://뼈
								{
									switch (chickenhalf())
									{
									case 1://뼈한마리
									{
										printf("1.후라이드\n");
										printf("2.양념\n");
										printf("3.간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드치킨 한조각을 먹습니다.\n");
												printf("배고픔이 5하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 5;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("양념치킨 한조각을 먹습니다.\n");
												printf("배고픔이 7하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 7;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("간장치킨 한조각을 먹습니다.\n");
												printf("배고픔이 10하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://뼈반반
									{
										printf("1.후라이드\n");
										printf("2.양념\n");
										printf("3.간장\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("후라이드 + 양념 치킨 한조각씩 먹습니다.\n");
												printf("배고픔이 12하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 12;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("후라이드 + 간장 치킨 한조각씩 먹습니다.\n");
												printf("배고픔이 15하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 15;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("양념 + 간장 치킨 한조각씩 먹습니다.\n");
												printf("배고픔이 17하락합니다.\n");
												printf("비만도가 %d상승합니다.\n", chicken_menu);
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
											printf("\n\n얘,죽으렴\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 0:
									{
										printf("\n\n얘,죽으렴\n\n");
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
								printf("\n\n얘,죽으렴\n\n");
								gamestart = 0; goto restart; return 0;
							}
						}
						case 4://민트초코
						{
							printf("민트초코는 언제나 옳지.\n");
							printf("\n\n얘,하산하거라\n\n");
							gamestart = 0; goto restart; return 0;
							break;
						}
						}
						if (hunger < 0)
						{
							printf("\n\n너무 배불러 %d일째날", day);
							mealtimecheck(mealtime);
							printf("에 죽었습니다.\n\n");
							printf("\n\n얘,죽으렴\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						if (fat > 100)
						{
							printf("\n\n너무 뚱뚱해 %d일째날", day);
							mealtimecheck(mealtime);
							printf("에 죽었습니다.\n\n");
							printf("\n\n얘,죽으렴\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
					}
					else
					{
						printf("\n\n얘,죽으렴\n\n");
						gamestart = 0; goto restart; return 0;
					}
				}
				shutdown = 0;
			}
			if (day == 365)
			{
				printf("1년이 지나도 모든 음식을 먹지못했습니다.\n");
				printf("%s는 화가나 %s님의 곁을 떠났습니다.\n", name_pet, name_master);
				printf("\n\n얘,죽으렴\n\n");
				gamestart = 0; goto restart; return 0;
			}
		}
	case 3://정공의경우
	{
		for (day = 1; day <= 364; day++)
		{
			printf("\n\n%d일차\n\n", day);
			printf("%s : 끼히히히히헤케헼케케헤켘\n\n", name_pet);
			printf("%s : 꺄라라랄라라캌헤케헼케케헤켘\n\n", name_pet);
			printf("%s : 껼로로꾜료롤ㄹ꾜로료롤룔헼케케헤켘\n\n", name_pet);
			printf("%s : 캬라캬라카랴카랴카라캬라캬라코롭로볼볼보롭\n\n", name_pet);
			printf("%s : 꾸에에에에에엥구와아왑왕보압왑오압오밥\n\n", name_pet);
			printf("%s : 홥호바호바홉하봏바호바화봏밥케헤켘\n\n", name_pet);
			printf("%s : 끼히히히히헤케헼케케헤켘\n\n", name_pet);
		}
		printf("365일째날입니다.%s님, 잠에서 깨어나시겠습니까?(Y/N)\n", name_master);
		scanf(" %c", &nextday);
		if (nextday == 'Y' || nextday == 'y')
		{
			printf("\n\n365일차\n\n");
			
			printf("%s : 끼히히히히헤케헼케케헤켘\n", name_master);
			printf("%s : 끼히히히히헤케헼케케헤켘\n\n", name_pet);
			
			printf("%s : 꺄라라랄라라캌헤케헼케케헤켘\n", name_master);
			printf("%s : 꺄라라랄라라캌헤케헼케케헤켘\n\n", name_pet);
			
			printf("%s : 껼로로꾜료롤ㄹ꾜로료롤룔헼케케헤켘\n", name_master);
			printf("%s : 껼로로꾜료롤ㄹ꾜로료롤룔헼케케헤켘\n\n", name_pet);
			
			printf("%s : 캬라캬라카랴카랴카라캬라캬라코롭로볼볼보롭\n", name_master);
			printf("%s : 캬라캬라카랴카랴카라캬라캬라코롭로볼볼보롭\n\n", name_pet);
			
			printf("%s : 꾸에에에에에엥구와아왑왕보압왑오압오밥\n", name_master);
			printf("%s : 꾸에에에에에엥구와아왑왕보압왑오압오밥\n\n", name_pet);
			
			printf("%s : 홥호바호바홉하봏바호바화봏밥케헤켘\n", name_master);
			printf("%s : 홥호바호바홉하봏바호바화봏밥케헤켘\n\n", name_pet);
			
			printf("%s : 끼히히히히헤케헼케케헤켘\n", name_master);
			printf("%s : 끼히히히히헤케헼케케헤켘\n\n", name_pet);
			
			gamestart = 0; goto restart; return 0;
		}
		else
		{
			printf("%s님도 미쳐버렸습니다.\n",name_master);
			gamestart = 0; goto restart; return 0;
		}
	}
	case 4://씹덕의경우
	{
		do
		{			
			printf("\n\n%d일차\n\n", day);
			if (day % 1 == 0)
				printf("%s : 니코니코니★\n\n", name_pet);
			if (day % 2 == 0)
				printf("%s : 니코니코니☆\n\n", name_pet);
			if (day % 3 == 0)
				printf("%s : 니코니코니♥\n\n", name_pet);
			if (day % 4 == 0)
				printf("%s : 니코니코니♡\n\n", name_pet);

			printf("%d일째 날입니다.%s님 잠에서 깨어나시겠습니까?(Y/N)\n", day, name_master);
			scanf(" %c", &nextday);
			if (nextday == 'Y' || nextday == 'y')
			{
				day++;
				continue;
			}
			else
			{
				printf("도저히 참을 수 없던 %s이(가) %s을(를) 버렸습니다.\n",name_master,name_pet);
				gamestart = 0; goto restart; return 0;
			}

		} while (day <= 365);
		printf("1년이지나 성덕으로 진화한 %s은(는) %s님의 곁을 떠났습니다.\n", name_pet, name_master);

	}
	}

		gamestart = 0; goto restart; return 0;
	
}
}

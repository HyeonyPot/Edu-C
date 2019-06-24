#include <stdio.h>
void mealtimecheck(int mealtime)
{
	switch (mealtime)
	{
	case 1://¾ÆÄ§
		printf("¾ÆÄ§½Ã°£");
		break;
	case 2://¾ÆÄ§°£½Ä
		printf("¾ÆÄ§°£½Ä½Ã°£");
		break;
	case 3://Á¡½É
		printf("Á¡½É½Ã°£");
		break;
	case 4://Á¡½É°£½Ä
		printf("Á¡½É°£½Ä½Ã°£");
		break;
	case 5://Àú³á
		printf("Àú³á½Ã°£");
		break;
	case 6://Àú³á°£½Ä
		printf("Àú³á°£½Ä½Ã°£");
		break;
	case 7://¾ß½Ä
		printf("¾ß½Ä½Ã°£");
		break;
	}

}
int pizzaslice(int food_select)
{
	int slice;
	switch (food_select)
	{
	case 1://ÆäÆÛ·Î´Ï
		printf("¸î Á¶°¢ÀÇ ÆäÆÛ·Î´Ï ÇÇÀÚ¸¦ ¸ÔÀÌ°Ú½À´Ï±î?(ÃÖ´ë 8Á¶°¢)\n");
		break;
	case 2://°í±¸¸¶
		printf("¸î Á¶°¢ÀÇ °í±¸¸¶ ÇÇÀÚ¸¦ ¸ÔÀÌ°Ú½À´Ï±î?(ÃÖ´ë 8Á¶°¢)\n");
		break;
	case 3://Ä¡Áî
		printf("¸î Á¶°¢ÀÇ Ä¡Áî ÇÇÀÚ¸¦ ¸ÔÀÌ°Ú½À´Ï±î?(ÃÖ´ë 8Á¶°¢)\n");
		break;
	case 4://ÆÄÀÎ¾ÖÇÃ
		printf("ÆÄÀÎ¾ÖÇÃ!!...ÈÇ¸¢ÇÏÁö..\n");
		printf("´ë´ÜÈ÷ ÈÇ¸¢ÇØ!!!\n");
		printf("¸î Á¶°¢ÀÇ ÆÄÀÎ¾ÖÇÃ ÇÇÀÚ¸¦ ¿øÇÏ´Â°¡?(ÃÖ´ë 8Á¶°¢)\n");
		break;
	case 5://Æ÷Å×ÀÌÅä
		printf("¸î Á¶°¢ÀÇ Æ÷Å×ÀÌÅä ÇÇÀÚ¸¦ ¸ÔÀÌ°Ú½À´Ï±î?(ÃÖ´ë 8Á¶°¢)\n");
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
	printf("¾î¶² Ä¡Å²ÀÎÁö °ñ¶óÁÖ½ÃÁÒ\n");
	printf("1.´ßÇÑ¸¶¸®\n2.¹Ý¹ÝÄ¡Å²\n");
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
		printf("´Ù½ÃÇÏ½Ã°Ú½À´Ï±î?");
		scanf(" %c", &nextday);
		if (nextday == 'Y' || nextday == 'y')
		{
			gamestart = 1;
		}
		else
		{
			printf("¾ê,Á×¾î¹ö¸®·Å.\n");
			gamestart = 0; return 0;
		}
	}
	while (gamestart>0)
	{
	printf("´ç½ÅÀÇ ÀÌ¸§Àº ¹«¾ùÀÔ´Ï±î?\n");
	scanf("%s", &name_master);
	printf("%s ´ÔÀÌ Å°¿ì½Ã´Â ±×°ÍÀÇ ÀÌ¸§Àº ¹«¾ùÀÔ´Ï±î?\n", name_master);
	scanf("%s", &name_pet);
	printf("%s ´Ô ¾î¶² Â÷¿øÀÇ %sÀ» Å°¿ì°í °è½Ê´Ï±î?\n\n", name_master, name_pet);
	printf("(ÁÖÀÇ)¾ÕÀ¸·Î ¸ðµç ¼±ÅÃÀÇ ±âÈ¸´Â ÇÑ¹ø¸¸ ÁÖ¾îÁý´Ï´Ù.\n\n");
	
	printf("1.µÅ°øÂ÷¿øÀÇ %s\n\n", name_pet);
	printf("2.¸ê°øÂ÷¿øÀÇ %s\n\n", name_pet);
	printf("3.Á¤°øÂ÷¿øÀÇ %s\n\n", name_pet);
	printf("4.¾Ã´öÂ÷¿øÀÇ %s\n\n", name_pet);
	printf("5.Æò¹üÂ÷¿øÀÇ %s\n\n", name_pet);
	scanf("%d", &char_select);


	switch (char_select)//Â÷¿ø¼±ÅÃ
	{
		case 1:
			printf("µÅ°øÂ÷¿øÀÇ %s\n\n", name_pet);
			hunger = _CRT_INT_MAX;
			fat = 50;
			break;
		case 2:
			printf("¸ê°øÂ÷¿øÀÇ %s\n\n", name_pet);
			fat = 0;
			hunger = 50;
			break;
		case 3:
			printf("Á¤°øÂ÷¿øÀÇ %s\n\n", name_pet);
			mental = 500;
			break;
		case 4:
			printf("¾Ã´öÂ÷¿øÀÇ %s\n\n", name_pet);
			ssipduck = 500;
			break;
		case 5:
			printf("Æò¹üÂ÷¿øÀÇ %s\n\n", name_pet);
			printf("Æò¹üÇÔÀ» ¼±ÅÃÇÏ´Ù´Ï\n\n¾ê,Á×À¸·Å\n\n");
			gamestart = 0; goto restart;
			return 0;
		default:		
			printf("\n\n¾ê,Á×À¸·Å\n\n");
			gamestart = 0; 
			goto restart; 
			return 0;		
	}
	//Â÷¿ø¼±ÅÃ
	printf("\n\n\n[%s Å°¿ì±â]\n\n\n", name_pet);
	switch (char_select)
	{
	case 1://µÅ°øÀÇ°æ¿ì			
		for (day = 1; day <= 365; day++)
		{
			printf("\n\n%dÀÏÂ÷\n\n", day);
			for (mealtime = 1; mealtime <= 7; mealtime++)
			{
				printf("\n\n");
				mealtimecheck(mealtime);
				printf("\n\n");
				while (shutdown < 1)
				{
					printf("%s ´Ô,%s ¿¡°Ô ¹«¾ùÀ» ¸ÔÀÌ°Ú½À´Ï±î?\n", name_master, name_pet);
					printf("1.»§\n");
					printf("2.ÇÇÀÚ\n");
					printf("3.Ä¡Å²\n");
					printf("4.¹ÎÆ®ÃÊÄÚ\n");
					scanf("%d", &food_select);
					if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
					{
						switch (food_select)
						{
						case 1://»§Á¾·ù
						{
							errorcheck = 1;
							printf("¾î¶² »§ÀÎÁö °ñ¶óÁÖ½ÃÁÒ\n");
							while (errorcheck > 0)
							{
								printf("1.¹Ù°ÔÆ®\n");
								printf("2.ÇÇÀÚ»§\n");
								printf("3.´ÜÆÏ»§\n");
								printf("4.½Ä»§\n");
								scanf(" %d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
								{
									switch (food_select)
									{

									case 1:
									{
										printf("¹Ù°ÔÆ®¸¦ ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 100ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										hunger -= 100;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 2:
									{
										printf("ÇÇÀÚ»§À» ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 40ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										hunger -= 40;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 3:
									{
										printf("´ÜÆÏ»§À» ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 50ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										hunger -= 50;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 4:
									{
										printf("½Ä»§À» ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 70ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										errorcheck = 70;
										shutdown = 1;
										break;
									}

									}
								}
								else
								{
									printf("\n\n¾ê,Á×À¸·Å\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 2://ÇÇÀÚÁ¾·ù
						{
							errorcheck = 1;
							printf("¾î¶² ÇÇÀÚÀÎÁö °ñ¶óÁÖ½ÃÁÒ\n");
							while (errorcheck > 0)
							{
								printf("1.ÆäÆÛ·Î´ÏÇÇÀÚ\n");
								printf("2.°í±¸¸¶ÇÇÀÚ\n");
								printf("3.Ä¡ÁîÇÇÀÚ\n");
								printf("4.ÆÄÀÎ¾ÖÇÃÇÇÀÚ\n");
								printf("5.Æ÷Å×ÀÌÅäÇÇÀÚ\n");
								scanf("%d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4 || food_select == 5)
								{
									switch (food_select)
									{

									case 1://ÆäÆÛ·Î´ÏÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("ÆäÆÛ·Î´ÏÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ 120ÇÏ¶ôÇÕ´Ï´Ù.\n");
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice);
											fat += slice;
											hunger -= 120;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 2://°í±¸¸¶ÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("°í±¸¸¶ÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ 200ÇÏ¶ôÇÕ´Ï´Ù.\n");
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice * 2);
											fat += slice * 2;
											hunger -= 200;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 3://Ä¡ÁîÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("Ä¡ÁîÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ 100ÇÏ¶ôÇÕ´Ï´Ù.\n");
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice);
											fat += slice;
											hunger -= 100;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 4://ÆÄÀÎ¾ÖÇÃÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("ÆÄÀÎ¾ÖÇÃÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ 100ÇÏ¶ôÇÕ´Ï´Ù.\n");
											printf("ºñ¸¸µµ°¡ %dÇÏ¶ôÇÕ´Ï´Ù.\n", slice * 2);
											fat -= slice * 2;
											hunger -= 100;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 5://Æ÷Å×ÀÌÅäÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("Æ÷Å×ÀÌÅäÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ 150ÇÏ¶ôÇÕ´Ï´Ù.\n");
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice * 3);
											fat += slice * 3;
											hunger -= 200;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}

									}
								}
								else
								{
									printf("\n\n¾ê,Á×À¸·Å\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 3://Ä¡Å²
						{
							errorcheck = 1;
							printf("´ç½ÅÀÇ Ä¡Å²Àº ¼ø»ìÀÔ´Ï±î »ÀÀÔ´Ï±î\n");
							printf("1.¼ø»ì\n2.»À\n");
							scanf("%d", &sunsal);
							if (sunsal == 1 || sunsal == 2)
							{
								switch (sunsal)
								{
								case 1://¼ø»ì
								{
									switch (chickenhalf())
									{
									case 1://¼ø»ìÇÑ¸¶¸®
									{
										printf("1.ÈÄ¶óÀÌµå\n");
										printf("2.¾ç³ä\n");
										printf("3.°£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµåÄ¡Å² ÇÑ¸¶¸®¸¦ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 100ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("¾ç³äÄ¡Å² ÇÑ¸¶¸®¸¦ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 120ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("°£ÀåÄ¡Å² ÇÑ¸¶¸®¸¦ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 110ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}

									}
									case 2://¼ø»ì¹Ý¹Ý
									{
										printf("1.ÈÄ¶óÀÌµå+ ¾ç³ä\n");
										printf("2.ÈÄ¶óÀÌµå+ °£Àå\n");
										printf("3.¾ç³ä + °£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµå + ¾ç³ä Ä¡Å²À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 100ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("ÈÄ¶óÀÌµå + °£Àå Ä¡Å²À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 120ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("¾ç³ä + °£Àå Ä¡Å²À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 150ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");

											gamestart = 0; goto restart; return 0;
											break;
										}
									}
									case 0:
									{
										printf("\n\n¾ê,Á×À¸·Å\n\n");

										gamestart = 0; goto restart; return 0;
										break;
									}
									break;
									}
									break;
								}
								case 2://»À
								{
									switch (chickenhalf())
									{
									case 1://»ÀÇÑ¸¶¸®
									{
										printf("1.ÈÄ¶óÀÌµå\n");
										printf("2.¾ç³ä\n");
										printf("3.°£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµåÄ¡Å² ÇÑ¸¶¸®¸¦ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 100ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("¾ç³äÄ¡Å² ÇÑ¸¶¸®¸¦ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 120ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("°£ÀåÄ¡Å² ÇÑ¸¶¸®¸¦ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 110ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://»À¹Ý¹Ý
									{
										printf("1.ÈÄ¶óÀÌµå+ ¾ç³ä\n");
										printf("2.ÈÄ¶óÀÌµå+ °£Àå\n");
										printf("3.¾ç³ä + °£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµå + ¾ç³ä Ä¡Å²À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 100ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 100;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("ÈÄ¶óÀÌµå + °£Àå Ä¡Å²À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 120ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 120;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("¾ç³ä + °£Àå Ä¡Å²À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 150ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");

											gamestart = 0; goto restart; return 0;
											break;
										}
										break;
									}
									case 0:
									{
										printf("\n\n¾ê,Á×À¸·Å\n\n");

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
								printf("\n\n¾ê,Á×À¸·Å\n\n");
								
								gamestart = 0; goto restart; return 0;
								break;
							}
							break;
						}
						case 4://¹ÎÆ®ÃÊÄÚ
						{
							printf("¹ÎÆ®ÃÊÄÚ´Â ¾ðÁ¦³ª ¿ÇÁö.\n");
							printf("\n\n¾ê,ÇÏ»êÇÏ°Å¶ó\n\n");
							gamestart = 0; goto restart; return 0;
							break;
						}
						break;
						}
						if (hunger < 0)
						{
							printf("\n\n³Ê¹« ¹èºÒ·¯ %dÀÏÂ°³¯", day);
							mealtimecheck(mealtime);
							printf("¿¡ Á×¾ú½À´Ï´Ù.\n\n");
							printf("\n\n¾ê,Á×À¸·Å\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						if (fat > 100)
						{
							printf("\n\n³Ê¹« ¶×¶×ÇØ %dÀÏÂ°³¯", day);
							mealtimecheck(mealtime);
							printf("¿¡ Á×¾ú½À´Ï´Ù.\n\n");
							printf("\n\n¾ê,Á×À¸·Å\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						break;
					}
					else
					{
						printf("\n\n¾ê,Á×À¸·Å\n\n");
						gamestart = 0; goto restart; return 0;
					}
				}
				shutdown = 0;
			}
			if (day == 365)
			{
				printf("1³âÀÌÁö³ª ¸ðµçÀ½½ÄÀÌ »óÇØ¹ö·È½À´Ï´Ù.\n");
				printf("%s´Â È­°¡³ª %s´ÔÀÇ °çÀ» ¶°³µ½À´Ï´Ù.\n", name_pet, name_master);
				printf("\n\n¾ê,Á×À¸·Å\n\n");
				gamestart = 0; goto restart; return 0;
			}
		}
	case 2://¸ê°øÀÇ°æ¿ì
		for (day = 1; day <= 365; day++)
		{
			printf("\n\n%dÀÏÂ÷\n\n", day);
			for (mealtime = 1; mealtime <= 7; mealtime++)
			{
				printf("\n\n");
				mealtimecheck(mealtime);
				printf("\n\n");
				while (shutdown < 1)
				{
					printf("%s ´Ô,%s ¿¡°Ô ¹«¾ùÀ» ¸ÔÀÌ°Ú½À´Ï±î?\n", name_master, name_pet);
					printf("1.»§\n");
					printf("2.ÇÇÀÚ\n");
					printf("3.Ä¡Å²\n");
					printf("4.¹ÎÆ®ÃÊÄÚ\n");
					scanf("%d", &food_select);
					if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
					{
						switch (food_select)
						{
						case 1://»§Á¾·ù
						{
							errorcheck = 1;
							printf("¾î¶² »§ÀÎÁö °ñ¶óÁÖ½ÃÁÒ\n");
							while (errorcheck > 0)
							{
								printf("1.¹Ù°ÔÆ®\n");
								printf("2.ÇÇÀÚ»§\n");
								printf("3.´ÜÆÏ»§\n");
								printf("4.½Ä»§\n");
								scanf(" %d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4)
								{
									switch (food_select)
									{

									case 1:
									{
										printf("¹Ù°ÔÆ®¸¦ ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 10ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										hunger -= 10;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 2:
									{
										printf("ÇÇÀÚ»§À» ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 5ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										hunger -= 5;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 3:
									{
										printf("´ÜÆÏ»§À» ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 7ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										hunger -= 7;
										errorcheck = 0;
										shutdown = 1;
										break;
									}
									case 4:
									{
										printf("½Ä»§À» ¸Ô½À´Ï´Ù.\n");
										printf("¹è°íÇÄÀÌ 12ÇÏ¶ôÇÕ´Ï´Ù.\n");
										printf("ºñ¸¸µµ°¡ 1»ó½ÂÇÕ´Ï´Ù.\n");
										fat += 1;
										errorcheck = 10;
										shutdown = 1;
										break;
									}

									}
								}
								else
								{
									printf("\n\n¾ê,Á×À¸·Å\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 2://ÇÇÀÚÁ¾·ù
						{
							errorcheck = 1;
							printf("¾î¶² ÇÇÀÚÀÎÁö °ñ¶óÁÖ½ÃÁÒ\n");
							while (errorcheck > 0)
							{
								printf("1.ÆäÆÛ·Î´ÏÇÇÀÚ\n");
								printf("2.°í±¸¸¶ÇÇÀÚ\n");
								printf("3.Ä¡ÁîÇÇÀÚ\n");
								printf("4.ÆÄÀÎ¾ÖÇÃÇÇÀÚ\n");
								printf("5.Æ÷Å×ÀÌÅäÇÇÀÚ\n");
								scanf("%d", &food_select);

								if (food_select == 1 || food_select == 2 || food_select == 3 || food_select == 4 || food_select == 5)
								{
									switch (food_select)
									{

									case 1://ÆäÆÛ·Î´ÏÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("ÆäÆÛ·Î´ÏÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ %dÇÏ¶ôÇÕ´Ï´Ù.\n", 20 * slice);
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice);
											fat += slice;
											hunger -= 20 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 2://°í±¸¸¶ÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("°í±¸¸¶ÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ %dÇÏ¶ôÇÕ´Ï´Ù.\n", 15 * slice);
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice * 2);
											fat += slice * 2;
											hunger -= 15 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 3://Ä¡ÁîÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("Ä¡ÁîÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ %dÇÏ¶ôÇÕ´Ï´Ù.\n", 7 * slice);
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice);
											fat += slice;
											hunger -= 7 * slice;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 4://ÆÄÀÎ¾ÖÇÃÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("ÆÄÀÎ¾ÖÇÃÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹èºÎ¸§À» ´À³¢Áö¸¸ ´õ ¸ÔÀ» ¼ö ÀÖÀ»°Í °°½À´Ï´Ù.\n");
											printf("»õ·Î ½ÃÀÛÇÏ´Â »óÄèÇÑ ´À³¦ÀÌ µì´Ï´Ù.\n");
											printf("ºñ¸¸µµ°¡ %dÇÏ¶ôÇÕ´Ï´Ù.\n", slice * 2);
											fat -= slice * 2;
											hunger = 50;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 5://Æ÷Å×ÀÌÅäÇÇÀÚ
									{
										slice = pizzaslice(food_select);
										if (slice == 1 || slice == 2 || slice == 3 || slice == 4 || slice == 5 || slice == 6 || slice == 7 || slice == 8)
										{
											printf("%dÁ¶°¢ÀÇ ", slice);
											printf("Æ÷Å×ÀÌÅäÇÇÀÚ¸¦ ¸Ô½À´Ï´Ù.\n");
											printf("¹è°íÇÄÀÌ %dÇÏ¶ôÇÕ´Ï´Ù.\n", 15 * slice);
											printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", slice * 3);
											fat += slice * 3;
											hunger -= slice * 15;
											errorcheck = 0;
											shutdown = 1;
											break;
										}
										else
										{
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}

									}
								}
								else
								{
									printf("\n\n¾ê,Á×À¸·Å\n\n");
									gamestart = 0; goto restart; return 0;
								}
								break;
							}
							break;
						}
						case 3://Ä¡Å²
						{
							errorcheck = 1;
							printf("Ä¡Å²Àº ¼ø»ìÀÔ´Ï±î »ÀÀÔ´Ï±î\n");
							printf("1.¼ø»ì\n2.»À\n");
							scanf("%d", &sunsal);
							if (sunsal == 1 || sunsal == 2)
							{							
								switch (sunsal)
								{
								case 1://¼ø»ì
								{
									switch (chickenhalf())
									{
									case 1://¼ø»ìÇÑ¸¶¸®
									{
										printf("1.ÈÄ¶óÀÌµå\n");
										printf("2.¾ç³ä\n");
										printf("3.°£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµåÄ¡Å² ÇÑÁ¶°¢À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 5ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 5;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("¾ç³äÄ¡Å² ÇÑÁ¶°¢À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 7ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 7;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("°£ÀåÄ¡Å² ÇÑÁ¶°¢À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 10ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://¹Ý¹Ý
									{
										printf("1.ÈÄ¶óÀÌµå\n");
										printf("2.¾ç³ä\n");
										printf("3.°£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµå + ¾ç³ä Ä¡Å² ÇÑÁ¶°¢¾¿ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 12ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 12;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("ÈÄ¶óÀÌµå + °£Àå Ä¡Å² ÇÑÁ¶°¢¾¿ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 15ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 15;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("¾ç³ä + °£Àå Ä¡Å² ÇÑÁ¶°¢¾¿ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 17ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
									}
									case 0:
									{
										printf("\n\n¾ê,Á×À¸·Å\n\n");
										gamestart = 0; goto restart; return 0;
									}
									break;
									}
									break;
								}
								case 2://»À
								{
									switch (chickenhalf())
									{
									case 1://»ÀÇÑ¸¶¸®
									{
										printf("1.ÈÄ¶óÀÌµå\n");
										printf("2.¾ç³ä\n");
										printf("3.°£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµåÄ¡Å² ÇÑÁ¶°¢À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 5ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 5;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("¾ç³äÄ¡Å² ÇÑÁ¶°¢À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 7ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 7;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("°£ÀåÄ¡Å² ÇÑÁ¶°¢À» ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 10ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 2://»À¹Ý¹Ý
									{
										printf("1.ÈÄ¶óÀÌµå\n");
										printf("2.¾ç³ä\n");
										printf("3.°£Àå\n");
										scanf("%d", &chicken_menu);
										if (chicken_menu == 1 || chicken_menu == 2 || chicken_menu == 3)
										{
											switch (chicken_menu)
											{
											case 1:
											{
												printf("ÈÄ¶óÀÌµå + ¾ç³ä Ä¡Å² ÇÑÁ¶°¢¾¿ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 12ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 12;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 2:
											{
												printf("ÈÄ¶óÀÌµå + °£Àå Ä¡Å² ÇÑÁ¶°¢¾¿ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 15ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
												fat += chicken_menu;
												hunger -= 15;
												errorcheck = 0;
												shutdown = 1;
												break;
											}
											case 3:
											{
												printf("¾ç³ä + °£Àå Ä¡Å² ÇÑÁ¶°¢¾¿ ¸Ô½À´Ï´Ù.\n");
												printf("¹è°íÇÄÀÌ 17ÇÏ¶ôÇÕ´Ï´Ù.\n");
												printf("ºñ¸¸µµ°¡ %d»ó½ÂÇÕ´Ï´Ù.\n", chicken_menu);
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
											printf("\n\n¾ê,Á×À¸·Å\n\n");
											gamestart = 0; goto restart; return 0;
										}
										break;
									}
									case 0:
									{
										printf("\n\n¾ê,Á×À¸·Å\n\n");
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
								printf("\n\n¾ê,Á×À¸·Å\n\n");
								gamestart = 0; goto restart; return 0;
							}
						}
						case 4://¹ÎÆ®ÃÊÄÚ
						{
							printf("¹ÎÆ®ÃÊÄÚ´Â ¾ðÁ¦³ª ¿ÇÁö.\n");
							printf("\n\n¾ê,ÇÏ»êÇÏ°Å¶ó\n\n");
							gamestart = 0; goto restart; return 0;
							break;
						}
						}
						if (hunger < 0)
						{
							printf("\n\n³Ê¹« ¹èºÒ·¯ %dÀÏÂ°³¯", day);
							mealtimecheck(mealtime);
							printf("¿¡ Á×¾ú½À´Ï´Ù.\n\n");
							printf("\n\n¾ê,Á×À¸·Å\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
						if (fat > 100)
						{
							printf("\n\n³Ê¹« ¶×¶×ÇØ %dÀÏÂ°³¯", day);
							mealtimecheck(mealtime);
							printf("¿¡ Á×¾ú½À´Ï´Ù.\n\n");
							printf("\n\n¾ê,Á×À¸·Å\n\n");
							shutdown = 0;
							gamestart = 0; goto restart; return 0;
						}
					}
					else
					{
						printf("\n\n¾ê,Á×À¸·Å\n\n");
						gamestart = 0; goto restart; return 0;
					}
				}
				shutdown = 0;
			}
			if (day == 365)
			{
				printf("1³âÀÌ Áö³ªµµ ¸ðµç À½½ÄÀ» ¸ÔÁö¸øÇß½À´Ï´Ù.\n");
				printf("%s´Â È­°¡³ª %s´ÔÀÇ °çÀ» ¶°³µ½À´Ï´Ù.\n", name_pet, name_master);
				printf("\n\n¾ê,Á×À¸·Å\n\n");
				gamestart = 0; goto restart; return 0;
			}
		}
	case 3://Á¤°øÀÇ°æ¿ì
	{
		for (day = 1; day <= 364; day++)
		{
			printf("\n\n%dÀÏÂ÷\n\n", day);
			printf("%s : ³¢È÷È÷È÷È÷ÇìÄÉÂjÄÉÄÉÇì±Q\n\n", name_pet);
			printf("%s : ²¥¶ó¶ó¶ö¶ó¶ó¯—ÇìÄÉÂjÄÉÄÉÇì±Q\n\n", name_pet);
			printf("%s : ²º·Î·Î²Ø·á·Ñ¤©²Ø·Î·á·Ñ·ãÂjÄÉÄÉÇì±Q\n\n", name_pet);
			printf("%s : Ä¼¶óÄ¼¶óÄ«·ªÄ«·ªÄ«¶óÄ¼¶óÄ¼¶óÄÚ·Ó·Îº¼º¼º¸·Ó\n\n", name_pet);
			printf("%s : ²Ù¿¡¿¡¿¡¿¡¿¡¿¨±¸¿Í¾Æ¿Ò¿Õº¸¾Ð¿Ò¿À¾Ð¿À¹ä\n\n", name_pet);
			printf("%s : ÃdÈ£¹ÙÈ£¹ÙÈ©ÇÏ”N¹ÙÈ£¹ÙÈ­”N¹äÄÉÇì±Q\n\n", name_pet);
			printf("%s : ³¢È÷È÷È÷È÷ÇìÄÉÂjÄÉÄÉÇì±Q\n\n", name_pet);
		}
		printf("365ÀÏÂ°³¯ÀÔ´Ï´Ù.%s´Ô, Àá¿¡¼­ ±ú¾î³ª½Ã°Ú½À´Ï±î?(Y/N)\n", name_master);
		scanf(" %c", &nextday);
		if (nextday == 'Y' || nextday == 'y')
		{
			printf("\n\n365ÀÏÂ÷\n\n");
			
			printf("%s : ³¢È÷È÷È÷È÷ÇìÄÉÂjÄÉÄÉÇì±Q\n", name_master);
			printf("%s : ³¢È÷È÷È÷È÷ÇìÄÉÂjÄÉÄÉÇì±Q\n\n", name_pet);
			
			printf("%s : ²¥¶ó¶ó¶ö¶ó¶ó¯—ÇìÄÉÂjÄÉÄÉÇì±Q\n", name_master);
			printf("%s : ²¥¶ó¶ó¶ö¶ó¶ó¯—ÇìÄÉÂjÄÉÄÉÇì±Q\n\n", name_pet);
			
			printf("%s : ²º·Î·Î²Ø·á·Ñ¤©²Ø·Î·á·Ñ·ãÂjÄÉÄÉÇì±Q\n", name_master);
			printf("%s : ²º·Î·Î²Ø·á·Ñ¤©²Ø·Î·á·Ñ·ãÂjÄÉÄÉÇì±Q\n\n", name_pet);
			
			printf("%s : Ä¼¶óÄ¼¶óÄ«·ªÄ«·ªÄ«¶óÄ¼¶óÄ¼¶óÄÚ·Ó·Îº¼º¼º¸·Ó\n", name_master);
			printf("%s : Ä¼¶óÄ¼¶óÄ«·ªÄ«·ªÄ«¶óÄ¼¶óÄ¼¶óÄÚ·Ó·Îº¼º¼º¸·Ó\n\n", name_pet);
			
			printf("%s : ²Ù¿¡¿¡¿¡¿¡¿¡¿¨±¸¿Í¾Æ¿Ò¿Õº¸¾Ð¿Ò¿À¾Ð¿À¹ä\n", name_master);
			printf("%s : ²Ù¿¡¿¡¿¡¿¡¿¡¿¨±¸¿Í¾Æ¿Ò¿Õº¸¾Ð¿Ò¿À¾Ð¿À¹ä\n\n", name_pet);
			
			printf("%s : ÃdÈ£¹ÙÈ£¹ÙÈ©ÇÏ”N¹ÙÈ£¹ÙÈ­”N¹äÄÉÇì±Q\n", name_master);
			printf("%s : ÃdÈ£¹ÙÈ£¹ÙÈ©ÇÏ”N¹ÙÈ£¹ÙÈ­”N¹äÄÉÇì±Q\n\n", name_pet);
			
			printf("%s : ³¢È÷È÷È÷È÷ÇìÄÉÂjÄÉÄÉÇì±Q\n", name_master);
			printf("%s : ³¢È÷È÷È÷È÷ÇìÄÉÂjÄÉÄÉÇì±Q\n\n", name_pet);
			
			gamestart = 0; goto restart; return 0;
		}
		else
		{
			printf("%s´Ôµµ ¹ÌÃÄ¹ö·È½À´Ï´Ù.\n",name_master);
			gamestart = 0; goto restart; return 0;
		}
	}
	case 4://¾Ã´öÀÇ°æ¿ì
	{
		do
		{			
			printf("\n\n%dÀÏÂ÷\n\n", day);
			if (day % 1 == 0)
				printf("%s : ´ÏÄÚ´ÏÄÚ´Ï¡Ú\n\n", name_pet);
			if (day % 2 == 0)
				printf("%s : ´ÏÄÚ´ÏÄÚ´Ï¡Ù\n\n", name_pet);
			if (day % 3 == 0)
				printf("%s : ´ÏÄÚ´ÏÄÚ´Ï¢¾\n\n", name_pet);
			if (day % 4 == 0)
				printf("%s : ´ÏÄÚ´ÏÄÚ´Ï¢½\n\n", name_pet);

			printf("%dÀÏÂ° ³¯ÀÔ´Ï´Ù.%s´Ô Àá¿¡¼­ ±ú¾î³ª½Ã°Ú½À´Ï±î?(Y/N)\n", day, name_master);
			scanf(" %c", &nextday);
			if (nextday == 'Y' || nextday == 'y')
			{
				day++;
				continue;
			}
			else
			{
				printf("µµÀúÈ÷ ÂüÀ» ¼ö ¾ø´ø %sÀÌ(°¡) %sÀ»(¸¦) ¹ö·È½À´Ï´Ù.\n",name_master,name_pet);
				gamestart = 0; goto restart; return 0;
			}

		} while (day <= 365);
		printf("1³âÀÌÁö³ª ¼º´öÀ¸·Î ÁøÈ­ÇÑ %sÀº(´Â) %s´ÔÀÇ °çÀ» ¶°³µ½À´Ï´Ù.\n", name_pet, name_master);

	}
	}

		gamestart = 0; goto restart; return 0;
	
}
}

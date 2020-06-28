#include <iostream>

int get_change(int money)
{
	int coins = 0;
  
  	while(money != 0)
	{
  		if(money / 10 == 0)
  		{	
  			if(money / 5 == 0)
  			{
  				coins = coins + money;
  				money = 0;
			}
			else
			{
				coins++;
				money = money % 5;
			}
		}
		else
		{
			coins = coins + (money / 10);
			money = money % 10;
		}
  	}
  
  return coins;
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}

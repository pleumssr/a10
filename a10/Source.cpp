#include<stdio.h>
#include<iostream>
float cal(float x, float y);
int main()
{
	float total, allscore = 0, mean;
	int pass = 0;
	std::cin >> total;
	struct  student
	{
		char name[5];
		int score;
	};
	student testscore[10000];
	for (int i = 0; i < total; i++)
	{
		std::cin >> testscore[i].name;
		std::cin >> testscore[i].score;
		allscore += testscore[i].score;
	}
	mean = cal(allscore, total);
	for (int i = 0; i < total; i++)
	{
		if (testscore[i].score >= mean)
		{
			pass++;
		}
	}
	std::cout << pass << std::endl;
	for (int i = 0; i < total; i++)
	{
		if (testscore[i].score >= mean)
		{
			std::cout << testscore[i].name << std::endl;
		}
	}
	return 0;
}
float cal(float x, float y)
{
	float z;
	z = x / y;
	return z;
}
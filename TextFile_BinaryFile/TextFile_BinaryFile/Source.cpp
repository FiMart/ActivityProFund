#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	struct player
	{
		char name[50];
		int level;
		int score;
	};
	player p[5];
	for (i = 0; i < 5; i++)
	{
		strcpy(p[i].name, "Mart");
		p[i].level = i;
		p[i].score = i * 100;
	}
	for (i = 0; i < 5; i++)
	{
		printf("name : %s\t", p[i].name);
		printf("level : %d\t", p[i].level);
		printf("score : %d\n", p[i].score);
	}
	FILE* fp;
	fp = fopen("StructureGame.txt", "w");
	for (i = 0; i < 5; i++)
	{
		fprintf(fp, "name : %s\t", p[i].name);
		fprintf(fp, "level : %d\t", p[i].level);
		fprintf(fp, "score : %d\n", p[i].score);
	}
	fclose(fp);
	return 0;
}
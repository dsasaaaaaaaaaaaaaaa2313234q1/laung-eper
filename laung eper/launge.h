#pragma once
struct World
{
	char english[100];
	char russian[100];
};

struct World dictannytre[] = {
	{"hello","привет"},
	{"you","ты"},
	{"dog","собака"},
	{"ready","готов"}
};
const int ded = sizeof(dictannytre) / sizeof(dictannytre[0]);	
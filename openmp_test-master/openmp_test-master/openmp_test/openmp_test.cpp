// 課題 : forループを並列化してください。
//

#include "stdafx.h"

#include <stdlib.h>

int main()
{
	for (int i = 0; i < 100; i++) {
		printf("%d\n", i);
	}

	system("pause"); // すぐには閉じないようにするｓ

	return 0;
}
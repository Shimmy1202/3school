#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//変数初期化
	int i, cnt1, cnt2, kaisu;

	//OPイメージ出力
	printf("■■　　■■　　　　　　■■■■■\n■■　　■■　　　　■■_kadai 06_■■\n■■　　■■　　　■■■■■■■■■■■\n■■　　■■　　　■■　■■■■■　■■\n■■　　■■　　■■■■　■■■　■■■■\n■■　　■■　　■■■　　　　　　　■■■\n■■　　■■　　■■　　■　　　■　　■■\n■■■■■■■■■　　　　　　　　　　　■\n■■■■■■■■■　■　　　　　　　■　■\n　　　　■■　　　　■　■■■■■　■\n　　　　■■　　　■■■　　■　　■■■\n　　　　■■　　　　■■■■■■■■■\n　　　　■■　　　　　　■■■■■\n\n　　　スペースインベーダー40th記念作品\n　　　　　IT11B331_No.14_清水優人\n\n　　　　　　～PUSH ENTER KEY!～");

	//一文字入力
	getchar();

	//画面消去
	system("CLS");

	//数値入力
	printf("インベーダーを動かす回数を入力してください。(1～11まで)\n\n※２動作１セットです。\n");
	scanf_s("%d", &i);
	rewind(stdin);

	//入力可能数値判定ループ
	while (i < 1 || i > 11)
	{
		printf("入力可能数値範囲外です。入力し直してください。(1～11まで)\n");
		scanf_s("%d", &i);
		rewind(stdin);
	}

	//画面消去
	system("CLS");

	//二つの描画を繰り返す
	for (kaisu = 1; kaisu <= i; kaisu++)
	{
		//ここから描画Type1
		//行
		for (cnt1 = 1; cnt1 <= 2; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= 2 * (kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= cnt1 + 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 2 * (4 - cnt1) - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}

		//行
		for (cnt1 = 1; cnt1 <= 2; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= 2 * (kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 3 - cnt1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 2; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= cnt1 - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 3; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= cnt1 - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 2; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}

		//行
		for (cnt1 = 1; cnt1 <= 2; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= 2 * (kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= cnt1 - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 2 * (6 - cnt1) - 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= cnt1 - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}

		//行
		for (cnt1 = 1; cnt1 <= 2; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= 2 * (kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 2 - cnt1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 2 * cnt1 - 1; cnt2++)
			{

				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= cnt1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= -4 * cnt1 + 9; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= cnt1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 2 * cnt1 - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 2 - cnt1; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}
		printf("\n\n\nヒント：数値を入力したらあとはENTER KEYを繰り返し押すだけ！");
		//ここまで描画Type1


		//プログラムの一旦停止
		rewind(stdin);
		getchar();

		//画面消去
		system("CLS");


		//ここから描画Type2
		//行
		for (cnt1 = 1; cnt1 <= 2; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= (2 * kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= cnt1 - 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 2; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 2 * (4 - cnt1) - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 2; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= cnt1 - 1; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}

		//行
		for (cnt1 = 1; cnt1 <= 2; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= (2 * kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 2 * cnt1 - 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			printf("　");
			//文字
			for (cnt2 = 1; cnt2 <= -4 * cnt1 + 11; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 2 * cnt1 - 1; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}

		//行
		for (cnt1 = 1; cnt1 <= 3; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= (2 * kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= cnt1 - 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= -2 * cnt1 + 13; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}

		//行
		for (cnt1 = 1; cnt1 <= 2; cnt1++)
		{
			//移動時の空白
			for (cnt2 = 1; cnt2 <= (2 * kaisu - 1) * 2; cnt2++)
			{
				printf("　");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= -cnt1 + 4; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			//スペース
			for (cnt2 = 1; cnt2 <= 2 * cnt1 + 1; cnt2++)
			{
				printf("　");
			}
			//文字
			for (cnt2 = 1; cnt2 <= 1; cnt2++)
			{
				printf("■");
			}
			printf("\n");
		}
		printf("\n\nヒント：数値を入力したらあとはENTER KEYを繰り返し押すだけ！");
		//ここまで描画Type2

		//プログラムの一旦停止
		rewind(stdin);
		getchar();

		//画面消去
		system("CLS");
	}
	printf("\n");

	//インベーダーの繰り返し描画後の消滅演出描画
	//行
	for (cnt1 = 1; cnt1 <= 2; cnt1++)
	{
		//移動時の空白
		for (cnt2 = 1; cnt2 <= 4 * kaisu - 4; cnt2++)
		{
			printf("　");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= cnt1; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= 2; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= -2 * cnt1 + 5; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= 2; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		printf("\n");
	}

	//行
	for (cnt1 = 1; cnt1 <= 2; cnt1++)
	{
		//移動時の空白
		for (cnt2 = 1; cnt2 <= 4 * kaisu - 4; cnt2++)
		{
			printf("　");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= -3 * cnt1 + 6; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= cnt1; cnt2++)
		{
			printf("■");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= 4 * cnt1 + 1; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= cnt1; cnt2++)
		{
			printf("■");
		}
		printf("\n");
	}
	//移動時の空白
	for (cnt2 = 1; cnt2 <= 4 * kaisu - 4; cnt2++)
	{
		printf("　");
	}
	//行
	for (cnt1 = 1; cnt1 <= 2; cnt1++)
	{
		//スペース
		for (cnt2 = 1; cnt2 <= 2 * cnt1 + 1; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
	}
	printf("\n");

	//行
	for (cnt1 = 1; cnt1 <= 2; cnt1++)
	{
		//移動時の空白
		for (cnt2 = 1; cnt2 <= 4 * kaisu - 4; cnt2++)
		{
			printf("　");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= -cnt1 + 3; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= 2; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= 2 * cnt1 - 1; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		//スペース
		for (cnt2 = 1; cnt2 <= 2; cnt2++)
		{
			printf("　");
		}
		//文字
		for (cnt2 = 1; cnt2 <= 1; cnt2++)
		{
			printf("■");
		}
		printf("\n");
	}

	//メッセージ
	printf("\n\n");
	for (cnt2 = 1; cnt2 <= 4 * kaisu - 1; cnt2++)
	{
		printf("　");
	}
	printf("Congratulation!");
	//ここまで消滅演出描画


	//プログラムの一旦停止
	rewind(stdin);
	getchar();

	//プログラムの停止
	return 0;
}
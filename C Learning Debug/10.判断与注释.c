/*
#include<stdio.h>
int main() {
	
	//初始化
	double amount = 0;
	double money = 0;
	double change = 0;

	//读入商品金额和支付金额
	printf("请输入您购买物品的总金额：");
	scanf_s("%lf", &amount);

	printf("请输入您支付的金额：");
	scanf_s("%lf", &money);

	//计算找零
	change = money - amount;

	
	//支付金额小于购物金额，返回错误提示
	if (change < 0) {

		printf("您支付的金额不足，购买失败");


	}
	
	//支付金额大于购物金额，输出找零
	else {


		printf("找您%lf元", change);


	}




	return 0;
}
*/
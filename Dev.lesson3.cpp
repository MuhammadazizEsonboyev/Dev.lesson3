//#include <stdio.h>
//
//
//
//int main (){
//	int kelgan_ishchilar_soni;
//	int kelmagan_ishchilar_soni;
//	int jami_ishchilar_soni;
//	
//	
//	
//	printf("kelgan ishchilar sonini kiriting :");
//	scanf("%d", &kelgan_ishchilar_soni );
//	printf("kelmagan ishchilar sonini kiriting :");
//	scanf("%d", &kelmagan_ishchilar_soni );
//
//	jami_ishchilar_soni = kelgan_ishchilar_soni + kelmagan_ishchilar_soni; 
//	
//	printf(" Jami ishchilar soni : %d", jami_ishchilar_soni);
//	return  0;
//}

// & malumotlarni malum joyga saqlab beradi


#include <stdio.h>;

int main (){
	
	int kelgan_ishchi;
	int kelmagan_ishchi;
	int jami;
			
	printf("kelgan ishchilar sonini kiriting : ");
	
	scanf("%d", &kelgan_ishchi);
	
	printf("kelmagan ishchilar soni:");
	
	scanf("%d", &kelmagan_ishchi);
	
	jami = kelgan_ishchi + kelmagan_ishchi;
	
	printf("jami ishchilar soni %d:", jami );
	
	
	return 0;
			
}



// & malumotlarni malum joyga saqlab beradi
// (scanf) bu terminalda javobni biz kirgizishimiz uchun qilingan funcksiya


























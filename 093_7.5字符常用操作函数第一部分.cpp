// 093_7.5字符常用操作函数第一部分.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//字符串常用API
////内存泄漏（Memory Leak）是指程序中已动态分配的堆内存由于某种原因程序未释放或无法释放，造成系统内存的浪费，导致程序运行速度减慢甚至系统崩溃等严重后果。

//4. 查找字符 strchr
//函数原型 :
//char* strchr(const char* s, int c);
//作用：在参数str所指向的字符串中搜索第一次出现字符c的位置
//具体参数解析：
//#include <iostream>
//int main()
//{
//    strchr;		//查找字符
//    const char* str = "hello world";// 要被检索的字符串
//    char c = 'r';            //在字符串中要搜索的字符
//    char* p = NULL;
//
//    p =(char*) strchr(str, c);
//    if (p == NULL)
//        printf("找不到\n");
//    else
//        puts(p);
//
//}




//5. 查找字符串 strstr
//函数原型 :
//char* strstr(char* str, char* substr);
//作用：用来检索子串在字符串中首次出现的位置
//具体参数解析：
//char* str   :  要被检索的字符串
//char* substr : 要检索的子串
//返回值
//返回字符串str中第一次出现子串substr的地址；如果没有检索到子串，则返回NULL空指针
//典例
//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//	//strstr;		//找字符串
//	const char* str = "hello world";
//	const char* substr = "wor";
//	char* p = NULL;
//	p =(char*) strstr(str, substr);
//	if (p == NULL)
//		printf("找不到\n");
//	else
//		puts(p);
//
//}




//6. 字符大小写转化 strlwr与strupr
//函数原型 :
//char* strlwr(char* str);
//作用：将字符串中每个字符都转为小写
//具体参数解析：
//char* str: 要被检索的字符串
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int main()//vs2022这个编译器不能用strlwr和strupr这两个函数
//{
//    //strlwr	//转化为小写字符
//    char str2[] = "HelloWorld";	//在windows环境下要定义成数组
//    //在linux下可以用指针
//    puts(strlwr(str2));
//    puts(strupr(str2));


//}


//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//int main()
//{
//    char str2[] = "HelloWorld";
//
//    // 转换为小写
//    for (size_t i = 0; i < strlen(str2); i++) {
//        str2[i] = tolower(str2[i]);
//    }
//    puts(str2);
//
//    // 转换为大写
//    for (size_t i = 0; i < strlen(str2); i++) {
//        str2[i] = toupper(str2[i]);
//    }
//    puts(str2);
//
//    return 0;
//}



//函数：strcpy、strncpy的使用
//#define _CRT_SECURE_NO_WARNINGS // 忽略 strcpy_s 和 strncpy_s 的警告
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char* strDest;
//    strDest = (char*)malloc(128);
//    memset(strDest, '\0', 128);
//
//    const char* strSrc = "123456";
//
//    // strcpy 替换为 strcpy_s
//    strcpy_s(strDest, 128, strSrc); // char* strcpy_s(char* dest, size_t destSize, const char* src);
//    puts(strDest);
//
//    memset(strDest, '\0', 128);
//
//    // strncpy 替换为 strncpy_s
//    strncpy_s(strDest, 128, strSrc, 3); // char* strncpy_s(char* dest, size_t destSize, const char* src, size_t count);
//    strDest[sizeof(strDest) - 1] = '\0';
//    puts(strDest);
//
//    free(strDest);
//
//    return 0;
//}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
//



// 
//将两个char类型连接。
//例如：
//#define _CRT_SECURE_NO_WARNINGS // 忽略 strcat_s 的警告
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char d[20] = "Golden";
//    char s[20] = "View";
//
//    // strcat 替换为 strcat_s
//    strcat_s(d, sizeof(d), s); // errno_t strcat_s(char* dest, rsize_t destSize, const char* src);
//
//    // 打印d
//    printf("%s", d);
//
//    return 0;
//}
//输出 d 为 GoldenView （中间无空格）
//d和s所指内存区域不可以重叠且d必须有足够的空间来容纳s的字符串。
//返回指向d的指针。

//#define _CRT_SECURE_NO_WARNINGS // 忽略 strtok_s 的警告
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str3[] = "Hello1,World2,hey3";
//    char* q;
//    char* context = NULL;
//
//    // strtok 替换为 strtok_s
//    q = strtok_s(str3, ",", &context);
//    if (q != NULL)
//        printf("第一次获取char:%s\n", q);
//
//    // 第二次获取char
//    q = strtok_s(NULL, ",", &context);
//    if (q != NULL)
//        printf("第二次获取char:%s\n", q);
//
//    // 第三次获取str
//    q = strtok_s(NULL, ",", &context);
//    if (q != NULL)
//        printf("第三次获取str:%s\n", q);
//
//    // 第四次获取str
//    q = strtok_s(NULL, ",", &context);
//    if (q != NULL)
//        printf("第四次获取str:%s\n", q);
//
//    return 0;
//}



#define _CRT_SECURE_NO_WARNINGS // 忽略 strtok_s 的警告
#include <stdio.h>
#include <string.h>

int main()
{
    printf("通过指针数组来搞串串\n");
    char str[] = "Hello1,World2,hey3,hey4,hey5";
    char* pstr[10];

    char* q;
    int i = 1;
    q = strtok(str, ",");
    if (q != NULL)
    {
        pstr[i - 1] = q;
    }
    while (1)
    {
        i++;
        q = strtok(NULL, ",");
        if (q != NULL)
            pstr[i - 1] = q;
        else
            break;
    }

    int j = 0;
    for (j = 0; j < i - 1; j++)
    {
        printf("获取第%d个串串为：%s\n", j + 1, pstr[j]);
    }
    printf("没有串串了\n");

    return 0;
}













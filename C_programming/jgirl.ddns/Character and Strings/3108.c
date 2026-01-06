#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
int compare (const void *a, const void *b);
static int number[1024] = {0};
static char word[1024][1024];
        
int main (void) {
    char string[] = "漢皇重色思傾國御宇多年求不得"
"楊家有女初長成養在深閏人未識"
"天生麗質難自棄一朝選在君王側"
"回眸一笑百媚生六宮粉黛無顏色"
"春寒賜浴華清池溫泉水滑洗凝脂"
"侍兒扶起嬌無力始是新承恩澤時"
"雲鬢花顏金步搖芙蓉帳暖度春宵"
"春宵苦短日高起從此君王不早朝"
"承歡侍宴無閑暇春從春遊夜專夜"
"後宮佳麗三千人三千寵愛在一身"
"金屋妝成嬌侍夜玉樓宴罷醉和春"
"姊妹弟兄皆列士可憐光彩生門戶"
"遂令天下父母心不重生男重生女"
"驪宮高處入青雲仙樂風飄處處聞"
"緩歌慢舞凝絲竹盡日君王看不足"
"漁陽鼙鼓動地來驚破霓裳羽衣曲"
"九重城闕煙塵生千乘萬騎西南行"
"翠華搖搖行復止西出都門百餘里"
"六軍不發無奈何宛轉蛾眉馬前死"
"花鈿委地無人收翠翹金雀玉搔頭"
"君王掩面救不得回看血淚相和流"
"黃埃散漫風蕭索雲棧縈紆登劍閣"
"峨嵋山下少人行旌旗無光日色薄"
"蜀江水碧蜀山青聖主朝朝暮暮情"
"行宮見月傷心色夜雨聞鈴腸斷聲"
"天旋地轉迴龍馭到此躊躇不能去"
"馬嵬坡下泥土中不見玉顏空死處"
"君臣相顧盡霑衣東望都門信馬歸"
"歸來池苑皆依舊太液芙蓉未央柳"
"芙蓉如面柳如眉對此如何不淚垂"
"春風桃李花開日秋雨梧桐葉落時"
"西宮南內多秋草落葉滿階紅不掃"
"梨園子弟白髮新椒房阿監青娥老"
"夕殿螢飛思悄然孤燈挑盡未成眠"
"遲遲鐘鼓初長夜耿耿星河欲曙天"
"鴛鴦瓦冷霜華重翡翠衾寒誰與共"
"悠悠生死別經年魂魄不曾來入夢"
"臨邛道士鴻都客能以精誠致魂魄"
"為感君王輾轉思遂教方士殷勤覓"
"排空馭氣奔如電升天入地求之遍"
"上窮碧落下黃泉兩處茫茫皆不見"
"忽聞海上有仙山山在虛無縹緲間"
"樓閣玲瓏五雲起其中綽約多仙子"
"中有一人字太真雪膚花貌參差是"
"金闕西廂叩玉扃轉教小玉報雙成"
"聞道漢家天子使九華帳裡夢魂驚"
"攬衣推枕起徘徊珠箔銀屏迤邐開"
"雲鬢半偏新睡覺花冠不整下堂來"
"風吹仙袂飄飄舉猶似霓裳羽衣舞"
"玉容寂寞淚闌干梨花一枝春帶雨"
"含情凝睇謝君王一別音容兩渺茫"
"昭陽殿裡恩愛絕蓬萊宮中日月長"
"回頭下望人寰處不見長安見塵霧"
"唯將舊物表深情鈿合金釵寄將去"
"釵留一股合一扇釵擘黃金合分鈿"
"但教心似金鈿堅天上人間會相見"
"臨別殷勤重寄詞詞中有誓兩心知"
"七月七日長生殿夜半無人私語時"
"在天願作比翼鳥在地願為連理枝"
"天長地久有時盡此恨綿綿無絕期";

    int count = 0;
    char *start = string;
    while (*start != '\0') {
        bool exist = false;
        for (int i = 0; i < count; i++) {
            char temp[16];
            strncpy(temp, start, 3);
            if (strcmp(word[i], temp) == 0) {
                number[i]++;
                exist = true;
                break;
            }
        }

        if (!exist) {
            char temp[16];
            strncpy(temp, start, 3);
            strcpy(word[count], temp);
            number[count]++;
            count++;  
        }
        start += 3;
    }

    int idx[count];
    for (int i = 0; i < count; i++)
        idx[i] = i;

    qsort(idx, count, sizeof(int), compare);
    for (int i = count - 1; i >= 0; i--) {
        int k = idx[i];
        printf("%s %d\n", word[k], number[k]);
    }
    return 0;
}

int compare (const void *a, const void *b) {
    int i = *(int *)a;
    int j = *(int *)b;

    if (number[i] != number[j])
        return number[i] - number[j];

    return strcmp(word[j], word[i]);
}

#include<string.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/**
 * 判断字符串是否是空字符串
 * @param cp
 * @return 1 空字符串， 0 非空字符串
 */
int isEmpty(char *cp) {
    int i = 0;
    while (*(cp + i) == ' ') {
        i++;
    }

    if (*(cp + i) == '\0') {
        return 1;
    } else {
        return 0;
    }

    return 0;
}

/**
 *  返回指定位置的字符
 * @param index
 * @return 0 如果index不合法或超出范围
 */
char charAt(char *cp, int index) {
    int i = 0;
    while (*(cp + i) != '\0') {
        i++;
    }

    if (i < index) {
        return 0;
    }

    return *(cp + index);

}

/**
 * 返回指定字符在此字符串中第一次出现处的下标
 * @param target 从该字符串中查找
 * @param check 查找的字符串
 * @return -1 如果没有找到，如果找到返回第一个字符的位置
 */
int indexOf(char *target, char *check) {
    int i = 0;
    while (*(target + i) != '\0') {

        if (*(target + i) == *check) {
            int j = 0;
            while (*(check + j) != '\0') {
                if (*(target + i + j) != *(check + j)) {

                    break;
                }
                j++;
                if (*(check + j) == '\0') {
                    return i;
                }
            }
        }
        i++;
    }

    return -1;
}

/**
 * 返回指定字符在此字符串中第一次出现处的下标，从末尾处开始反向查找
 * @param target 从该字符串中查找
 * @param check 查找的字符串
 * @return -1 如果没有找到
 */
int lastIndexOf(char *target, char *check) {
    int t_length = strlen(target);
    int c_length = strlen(check);
    for (int i = t_length - 1; i >= 0; i--) {
        if (target[i] == check[c_length - 1]) {
            for (int j = c_length - 1; j >= 0; j--) {
                if (target[i - c_length + 1 + j] != check[j]) {
                    break;
                }
                if (j == 0) {
                    return i - c_length + 1;
                }
            }
        }
    }
    return -1;
}

/**
 * 判断两个字符串是否相等
 * @param str1
 * @param str2
 * @return 1 相等， 0 不相等（长度相等，内容相等）
 */
int equals(char *str1, char *str2) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    if (length1 != length2) {
        return 0;
    }

    for (int i = 0; i < length1; i++) {
        if (str1[i] != str2[i]) {
            break;
        }
        if (i == length1 - 1) {
            return 1;
        }
    }

    return 0;
}

/**
 * 将目标字符串中包含的字符串替换为另一个字符串
 * @param target
 * @param old 要被替换掉的字符串
 * @param new 替换后的字符串
 * @return
 */
char *replace(char *target, char *old, char *source) {
    int index = indexOf(target, old);

    int length1 = strlen(old);
    int length2 = strlen(source);


    while (index + 1) {

        int lengtht = strlen(target);

        if (length2 >= length1) {
            for (int i = 0; i <= lengtht - length1 - index; i++) {
                target[lengtht - 1 + length2 - length1 - i] = target[lengtht - 1 - i];
            }

            for (int i = index; i < index + length2; i++) {
                target[i] = source[i - index];
            }
        } else {
            for (int i = 0; i <= lengtht - length1 - index; i++) {
                target[index + length2 + i] = target[index + length1 + i];
                target[lengtht] = '\0';
            }

            for (int i = index; i < index + length2; i++) {
                target[i] = source[i - index];
            }
        }

        if (indexOf(target + index + length2, old) != -1) {
            index = index + length2 + indexOf(target + index + length2, old);
        } else {
            index = -1;
        }

    }

    return target;
}


/**
 * 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值
 * @param str1
 * @param str2
 * @return >0 的数str1大，<0 str1小，=0 两字符串相等
 */
int compare(char *str1, char *str2) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int length;
    if (length1 > length2) {
        length = length1;
    } else {
        length = length2;
    }
    for (int i = 0; i < length; i++) {
        if (str1[i] > str2[i]) {
            return str1[i] - str2[i];
        } else if (str1[i] < str2[i]) {
            return str2[i] - str1[i];
        } else {
            continue;
        }
        if (i == length - 1) {
            return 0;
        }
    }
    return 0;
}

/**
 * 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值
 * 比较的时候忽略大小写，'a'和'A'认为是相等
 * @param str1
 * @param str2
 * @return >0 的数str1大，<0 str1小，=0 两字符串相等
 */

void todown(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] <= 'Z'&str[i] >= 'A') {
            str[i] -= 'A' - 'a';
        }
    }

}

int compareIgnoreCase(char *str1, char *str2) {
    todown(str1);
    todown(str2);
    return (compare(str1, str2));
}

/**
 * 将double类型数字转换成字符串
 * @param target
 * @param d
 */
void doubleToStr(char *target, double d) {
    int length1 = 0;
    int length2 = 6;
    int no = (int)d;
    double dot = d - no;
    int a[100];
    int b[100];
    char arr[100];
    if (no != 0) {
        for (int i = 1; no / i != 0; i *= 10) {
            length1 += 1;
        }
    } else {
        length1 = 1;
    }



    for (int i = 0; i < length1; i++) {
        a[i] = no / (int)pow(10, length1 - i - 1);
        no %= (int)pow(10, length1 - 1 - i);
    }

    for (int i = 0; i < length2; i++) {
        dot *= 10;
        b[i] = (int)dot;
        dot -= b[i];
    }



    for (int i = 0; i <= length1 + length2; i++) {
        if (i <= length1 - 1) {
            arr[i] = a[i] + 48;
        } else if (i >= length1 + 1) {
            arr[i] = b[i - 1 - length1] + 48;
        } else {
            arr[i] = '.';
        }
    }
    printf("%s\n", arr );
}

/**
 * 将传入字符串从指定位置切割，将分割后的字符串返回
 * @param cp
 * @param from 起始位置
 * @param end 结束位置
 * @return 返回起始位置到结束位置的字符串（将分割后的内容保存到cp中返回）
 */
char *subString(char *cp, int from, int end) {
    int length = strlen(cp);
    for (int i = 0; i <= end - from + 1; i++) {
        cp[i] = cp [from + i];
    }

    for (int i = end - from; i <= end; i++) {
        cp[i + 1] = '\0';
    }

    return cp;
}

/**
 * 根据传入的字符串，将目标字符串分割，返回分割后的第一部分
 * 如果没有找到，直接返回原始字符串
 * @param target
 * @param split
 */
char *splitFirst(char *target, char *split) {
    int lengtht = strlen(target);
    int lengths = strlen(split);
    int index = indexOf(target, split);


    for (int i = index; i < lengtht - 1; i++) {
        target[i] = '\0';
    }
    return target;
}
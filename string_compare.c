#include <stdio.h>
#include <string.h>

/*
vxpqullmcbegsdskddortcvxyqlbvxmmkhevovnezubvpvnrcajpxraeaxizgaowtfkzywvhnbgzsxbhkaipcmoumtikkiyyaivg


gviayyikkitmuomcpiakhbxszgbnhvwyzkftwoagzixaearxpjacrnvpvbuzenvovehkmmxvblqyxvctroddksdsgebcmlluqpxv

*/
int main()
{

    int compare = 0;
    char s[100], t[100];
    scanf("%s", s);
    strrev(s);
    scanf("%s", t);


    compare = strcmp(s, t);
    if (compare == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

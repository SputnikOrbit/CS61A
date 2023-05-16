#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct node
{
    int data;
    int opt;
}node;

node fomula_node[500];

void clean_spaces(char *fomula)
{
    int i = 0;
    int j = 0;
    int len = strlen(fomula);
    char *new_fomula = fomula;

    while (fomula[i] != '\0')
    {
        if (fomula[i] != ' ')
        {
            new_fomula[j] = fomula[i];
            j++;
        }
        i++;
    }
    new_fomula[j] = '\0';
}

void input(char* fomula, node* fomula_node)
{
    int i = 0;
    int j = 0;
    int len = strlen(fomula);
    while (fomula[i] != '\0')
    {
        if (isdigit(fomula[i]))
        {
            fomula_node[j].data = 0;
            fomula_node[j].opt = 0;
            while (isdigit(fomula[i]))
            {
                fomula_node[j].data = fomula_node[j].data * 10 + fomula[i] - '0';
                if (isdigit(fomula[i + 1]))
                {
                    i++;
                }
                else
                {
                    break;
                }
            }
            j++;
        }
        else
        {
            fomula_node[j].data = 0;
            fomula_node[j].opt = fomula[i];
            j++;
        }
        i++;
    }
    fomula_node[j].data = 0;
    fomula_node[j].opt = '\0';
}

void output(node* fomula_node)
{
    int i = 0;
    while (fomula_node[i].opt != '\0')
    {
        if (fomula_node[i].opt == '+')
        {
            printf("%d + ", fomula_node[i].data);
        }
        else if (fomula_node[i].opt == '-')
        {
            printf("%d - ", fomula_node[i].data);
        }
        else if (fomula_node[i].opt == '*')
        {
            printf("%d * ", fomula_node[i].data);
        }
        else if (fomula_node[i].opt == '/')
        {
            printf("%d / ", fomula_node[i].data);
        }
        else if (fomula_node[i].opt == '%')
        {
            printf("%d %% ", fomula_node[i].data);
        }
        else if (fomula_node[i].opt == '^')
        {
            printf("%d ^ ", fomula_node[i].data);
        }
        else
        {
            printf("%d ", fomula_node[i].data);
        }
        i++;
    }
    printf("%d\n", fomula_node[i].data);
}

int main()
{

    char fomula[500];
    fgets(fomula, 500, stdin);


    clean_spaces(fomula);
    puts(fomula);
    input(fomula, fomula_node);
    output(fomula_node);

    
    return 0;
}
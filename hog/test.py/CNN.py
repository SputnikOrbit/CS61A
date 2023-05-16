def qsort(a_list):
    if len(a_list) <= 1:
        return a_list
    else:
        pivot = a_list[0]
        return qsort([x for x in a_list[1:] if x < pivot]) + [pivot] + qsort([x for x in a_list[1:] if x >= pivot])


def BFS(tree):
    if tree == None:
        return []
    else:
        return [tree.data] + BFS(tree.left) + BFS(tree.right)


def DFS(tree):
    if tree == None:
        return []
    else:
        return [tree.data] + DFS(tree.left) + DFS(tree.right)

def infix_2_postfix(fomula):
    stack = []
    postfix = []
    for i in fomula:
        if i in '+-*/':
            if len(stack) == 0:
                stack.append(i)
            else:
                while len(stack) != 0 and stack[-1] != '(':
                    postfix.append(stack.pop())
                stack.append(i)
        elif i == '(':
            stack.append(i)
        elif i == ')':
            while stack[-1] != '(':
                postfix.append(stack.pop())
            stack.pop()
        else:
            postfix.append(i)
    while len(stack) != 0:
        postfix.append(stack.pop())
    return postfix

def calc_postfix(postfix):
    stack = []
    for i in postfix:
        if i in '+-*/':
            b = stack.pop()
            a = stack.pop()
            if i == '+':
                stack.append(a + b)
            elif i == '-':
                stack.append(a - b)
            elif i == '*':
                stack.append(a * b)
            elif i == '/':
                stack.append(a / b)
        else:
            stack.append(int(i))
    return stack.pop()


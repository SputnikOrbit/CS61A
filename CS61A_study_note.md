5. 5

   几天以来，我们正在干三件事：

   1. 熟悉CS61A的课程结构和建立其学习方式

   2. 完成其作业以加紧检验Python的掌握程度

   3. 学习一些零散的知识点，受教育

      ```python
      '''
      第一天学到的三件重要的事情
      '''
      >>> a, b = 1, 2
      >>> a, b = b, a #直接交换位置
      
      def func1(func2, num):
          return func2(num)
      #以及
      >>> func = add
      >>> func(5, 6)
      >>> 11 #这告诉我函数是一等公民，可以有赋值行为
      
      
      #第三件忘记力
      #以及今天的重要事情：lambda函数，函数闭包和装饰器
      
      >>> f = lambda x, y: x+y+2
      >>> f(3) #它是这么用的
      
      def funception(func1, start):#闭包能从另一个函数（funception外部）接受到stop参数
          def func2(stop):
              if start < 0 or stop <= start:
                  return None
              else:
                  result = 1
                  for num in range(start, stop):
                      result *= func1(num)
                  return result
          return func2
      
      >>> f = lambda f: lambda x: f(x)
      >>> f(add)(2)#这是正确的传参方法
      ```


今天是5月9日星期二

​		我看了一篇文章，正好数分成绩下来了，我有感而发。不管走在哪一行，基础知识都要过硬，才能在做项目的时候有底气。如果说微积分对我理解神经网络有作用，那么c语言将会对我所有的，任何的事情产生帮助，不管是去3系还是去6系。我最心仪的系，没有，但这两个系我想优先选择6系，然后是3系，毕竟对比起来6系的资源是3系比不了的。但我的学习路线应该按照科班路线来，按照计算机底层原理的路线来，不管采用什么手段，都要保证这一条底线的修炼。同时，我应该全力补上数学分析这个漏洞，加班加点，在这周内完成，并且对其有研究，不懂的部分要敢于问清楚，找助教，找老师，找视频，一定要把多重积分这个基本功打扎实。物理和离散这块要跟上，但可以比数分放低一个档次。我们今后就不称呼数学分析了，而是称其为“微积分”，这才接近这门课的本质与通用属性。我的大一不追求实习，我要夯实基础，探索出自学的道路，大二再开始实习，也就是说在下个学期内完成相应能力的提升。从数据结构的角度讲，前一阵子经历过一些摇摆期，真的，有一些虚无主义的声音同时消解了数据结构与c语言的价值与意义所在，然而事实上，这两者都是极其重要，及其值得投入时间的，不管学校的要求如何，这一部分是我们万万不能失掉的。我们的方针是继续拓展做题战线，每天c语言小的要coding1.5小时，大的要coding3小时，我会为你做出计划，我们就称这一项策略为“阿丽亚娜计划”，每天学习cs达到足够的时长，才能有突破。于是乎，今天下午我先花一小时完成cs61a 的 lab ,再化两个小时写学校的DS题目，再到晚上猛攻数学分析前线，完成物理作业，并将问题提给助教。以外出跑步放松为分界就好，也就是说晚上电脑用的少。关于航模队，我目前的策略是能摸鱼学基础就果断摸鱼，做项目你的经验和知识体系还不足以支撑，容易走残废。有朝一日你成为足够有能力的人，再去理解一切就容易得多。重复“阿丽亚娜计划”：CS基础，DS精进，微积分成功。



```python
#今天调hog项目调了好久呢，陷入了一些奇怪的小点
for i in range(1, score):
    #你要考虑这句话，如果score == 1, 那么它是不会执行的
 
return abs(tens - ones)*2 + 1 #这里的tens 和 ones 是十位和各位，属于是语言理解偏差hhh

#python的交互式调试机制：
'''
进入python后：from hog import *
或者直接命令行输入：python -i hog.py
'''


```



5.16

AI还是管用

```sh
and运算符在数值运算情况下的规则是:
返回第一个为0(假值)的操作数,否则返回最后一个操作数

or运算符的规则可以总结为:
- 数值运算:返回第一个非0的值,否则返回0
- 逻辑运算:返回第一个真值,否则返回False
```




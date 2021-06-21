

### 栈
* 一种操作受限的线性表，只允许在一端进行插入或删除操作的线性表

### 特点
* 后进先出(FIFO)


### 栈的抽象数据类型
```
    Data

    Operation
        InitStack(*S): 初始化操作
        
        Push(*S, e)
        
        Pop(*S, e)
        DestroyStack(*S)
        ClearStack(*S): 将线性表清空

        GetTop(S, *e)：

        StackLength(S)
        StackEmpty(S)：若线性表为空，返回true

```

### 栈得类型
* 顺序栈
* 链式栈


### 栈得应用
* 递归
* 四则运算表达式求值
    * 后缀表达式
    * 中缀表达式

#### 四则运算表达式求值





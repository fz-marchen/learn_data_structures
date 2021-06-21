
### 队列
* 一种操作受限的线性表，只允许在一端进行插入，在另一端删除的线性表

### 特点
* 先进先出(FIFO)

### 术语
* 队头
* 队尾
* 空队列
* 队头元素
* 队尾元素




### 队列的抽象数据类型
```
    Data

    Operation
        InitQueue(*Q): 初始化操作
        EnQueue(*Q, e)
        DeQueue(*Q, e)
        DestroyQueue(*Q)
        ClearQueue(*Q): 将线性表清空
        GetHead(Q, *e)：
        QueueLength(Q)
        QueueEmpty(Q)：若线性表为空，返回true

```

### 队列的类型
* 普通队列
* 双端队列
* 阻塞队列
* 并发队列
* 阻塞并发队列


### 应用
* 树的层次遍历
* 图的广度遍历
* 操作系统系统资源配置策略
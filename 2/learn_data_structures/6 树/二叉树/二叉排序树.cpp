typedef struct BSTNode {
  int key;
  struct BSTNode *lchild, *rchild;
} BSTNode, *BSTree;



BSTNode *BST_Search(BSTree T, int key) {
  while(T != NULL  && key != T->key) {
    if(key < T->key) T = T->lchild;
    else T = T->rchild;
  }

  return T;
}

BSTNode *BSTSearch(BSTree T, int key) {
  if(T == NULL) return NULL;

  if(key ==  T->key) return T;
  else if(key < T->key) return BSTSearch(T->lchild, key);
  else  return BSTSearch(T->rchild, key);


  while(T != NULL  && key != T->key) {
    
  }

  return T;
}

int BSTInsert(BSTree T, int k) {
  if(T == NULL) {
    T= (BSTree)malloc(sizeof(BSTNode));
    T->key = k;
    T->lchild = T->rchild = NULL;
    return 1;
  }
  else if(k == T->key) {
    return 0; // 存在相同关键字的结点，插入失败
  }
  else if(k < T->key) {
    return BSTInsert(T->lchild, k);
  }
  else {
    return BSTInsert(T->rchild, k);
  }
} 

void Creat_BST(BSTree &T, int str[], int n) {
  T = NULL;
  int i = 0;

  while(i < n) {
    BSTInsert(T, str[i]);
    i++;
  }
}


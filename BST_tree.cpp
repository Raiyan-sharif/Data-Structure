#include<cstdio>
#include<iostream>
#include<cstdlib>
struct BSTnode{
    int data;
    BSTnode* left;
    BSTnode* right;
};
BSTnode* GetNewNode(int data){
    BSTnode* newNode = new BSTnode;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
}
BSTnode* Insert(BSTnode* root,int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}
bool Search(BSTnode* root,int data){
    if(root == NULL){
        return false;
    }
    else if (root->data == data){
        return true;
    }
    else if(data <= root->data){
        return Search(root->left,data);
    }
    else {
        return Search(root->right,data);
    }
}
int main(){
    BSTnode* root;
    root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    int number;
    printf("Enter number to be searched \n");
    scanf("%d",&number);
    if(Search(root,number) == true){
        printf("Data Found\n");

    }
    else {
        printf("Data not Found\n");
    }

}

#include <stdlib.h>
#include "node.h"

struct NodeImplementation
{
  int key;
  Node left;
  Node right;
  int height;
};

int get_key(Node node)
{
  if(node != 0)
    return node->key;

  return 0;
}

Node get_left(Node node)
{
  if(node != 0)
    return node->left;

  return 0;
}

void set_left(Node node, Node left_node)
{
  if(node != 0)
    node->left = left_node;

  return;
}

Node get_right(Node node)
{
  if(node != 0)
    return node->right;

  return 0;
}

void set_right(Node node, Node right_node)
{
  if(node != 0)
    node->right = right_node;

  return;
}

int get_height(Node node)
{
  return 0;
}

void set_height(Node node, int height)
{

}

Node create_node(int key)
{
  Node newNode = (Node) malloc(sizeof(struct NodeImplementation));

  newNode->key = key;
  newNode->left = 0;
  newNode->right = 0;
  newNode->height = 1;

  return newNode;
}

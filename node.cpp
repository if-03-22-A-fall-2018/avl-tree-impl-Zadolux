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
  return 0;
}

Node get_left(Node node)
{
  return 0;
}

void set_left(Node node, Node left_node)
{

}

Node get_right(Node node)
{
  return 0;
}

void set_right(Node node, Node right_node)
{

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

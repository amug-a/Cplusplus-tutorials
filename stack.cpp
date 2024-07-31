#include <iostream>
#include <algorithm>

class Stack{
  private :
    int top;
    int arr[5];

  public:
    Stack() 
    {
      top = -1;
      for (int i = 0; i < 5; i++) 
      {
        arr[i] = 0;
      }
    }

    bool isEmpty() 
    {
      if (top == -1)
        return true;
      else
        return false;
    }

    bool isFull()
    {
      if (top == 4)
        return true;
      else
        return false;
    }

    void push(int value) 
    {
      if (isFull())
      {
        std::cout << "stack overflow" << std::endl;
      }
      else 
      {
        top++;
        arr[top] = value;
      }
    }

    int pop()
    {
      if (isEmpty())
      {
        std::cout << "stack underflow" << std::endl;
        return 0;
      }
      else 
      {
        int tempValue = arr[top];
        arr[top] = 0;
        top--;
        return tempValue;
      }
      
    }

    int count() 
    {
      return (top + 1);
    }

    int peek(int pos)
    {
      if(isEmpty())
      {
        std::cout << "stack underflow" << std::endl;
        return 0;
      }
      else
      {
        return arr[pos];
      }

    }

    void change(int pos, int val)
    {
      arr[pos] = val;
      std::cout << "item changed at location " << pos << std::endl;
    }

    void display()
    {
      for (int i = 4; i >= 0; i--) 
      {
        std::cout << arr[i] << std::endl;
      }
    }


};

int main() 
{
  Stack s1;
  int option, position, value;

  do
  {
    std::cout << "What operation do you want to perform? Select Option number. Enter 0 to exit" << std::endl;
    std::cout << "1. Push" << std::endl;
    std::cout << "2. Pop" << std::endl;
    std::cout << "3. isEmpty()" << std::endl;
    std::cout << "4. isFull()" << std::endl;
    std::cout << "5. peek()" << std::endl;
    std::cout << "6. count()" << std::endl;
    std::cout << "7. change()" << std::endl;
    std::cout << "8. display()" << std::endl;
    std::cout << "9. Clear Screen" << std::endl << std::endl;

    std::cin >> option;
    switch(option)
    {
      case 0:
        break;

      case 1:
        std::cout << "Enter value to push" << std::endl;
        std::cin >> value;
        s1.push(value);
        break;

      case 2:
        std::cout << "Pop Function Called - Poped value: " << s1.pop() << std::endl;
        break;
      
      case 3:
        if (s1.isEmpty())
          std::cout << "Stack is Empty" << std::endl;
        else
          std::cout << "Stack is not Empty" << std::endl;
        break;
      
      case 4:
        if (s1.isFull())
          std::cout << "Stack is Full" << std::endl;
        else
          std::cout << "Stack is not Full" << std::endl;
        break;

      case 5:
        std::cout << "Enter a position of item you want to peek: " << std::endl;
        std::cin >> position;
        std::cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << std::endl;
        break;

      case 6:
        std::cout << "Count Function Called - " << "Number of Items in the Stack are: " << s1.count() << std::endl;
        break;

      case 7:
        std::cout << "Change Functon Called" << std::endl;
        std::cout << "Enter position of item you want to change : ";
        std::cin >> position;
        std::cout << std::endl;
        std::cout << "Enter value of item you want to change : ";
        std::cin >> value;
        s1.change(position, value);
        break;

      case 8:
        std::cout << "Display Function Called - " << std::endl;
        s1.display();
        break;

      case 9:
        system("cls");
        break;
      
      default:
        std::cout << "Enter Proper Option number" << std::endl;
    }

  } while (option != 0);

  return 0;
}
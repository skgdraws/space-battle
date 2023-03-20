/*
┏━┓╋┏┓╋╋╋╋┏┓
┃┃┗┓┃┃╋╋╋╋┃┃
┃┏┓┗┛┣━━┳━┛┣━━┓
┃┃┗┓┃┃┏┓┃┏┓┃┃━┫
┃┃╋┃┃┃┗┛┃┗┛┃┃━┫
┗┛╋┗━┻━━┻━━┻━━┛
 */

template <class T> class Node{
public:
    int data;
    Node<T>* next;

    Node(int _data){
        this->data = _data;
        this->next = nullptr;
    }
};
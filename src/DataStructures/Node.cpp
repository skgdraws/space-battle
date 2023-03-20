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
    T data;
    Node<T>* next;

    Node(int _data){
        this->data = _data;
        this->next = nullptr;
    }
};
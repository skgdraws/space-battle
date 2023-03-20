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

    Node(T _data){
        this->data = _data;
        this->next = nullptr;
    }
};
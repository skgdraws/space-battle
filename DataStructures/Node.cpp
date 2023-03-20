/*
┏━┓╋┏┓╋╋╋╋┏┓
┃┃┗┓┃┃╋╋╋╋┃┃
┃┏┓┗┛┣━━┳━┛┣━━┓
┃┃┗┓┃┃┏┓┃┏┓┃┃━┫
┃┃╋┃┃┃┗┛┃┗┛┃┃━┫
┗┛╋┗━┻━━┻━━┻━━┛
 */

class Node{
public:
    int data;
    Node* next;

    Node(int _data){
        this->data = _data;
        this->next = nullptr;
    }
};
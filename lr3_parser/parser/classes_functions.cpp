#include "classesnodes.h"
int globId = 0;

ProgramNode::ProgramNode(ItemListNode *item_list) {
    this->id = ++globId;
    this->item_list = item_list;
}



/*void connectVerticesDots(string &s, int parentId, int childId) {
    string tmp = "id" + to_string(parentId) + " -> " + "id" + to_string(childId) + ";\n";
    s += tmp;
}

void createVertexDot(string &s, int id, string name, string type, string value, string visibility, string pos) {
    if(!type.empty()){
        type = "type=" + type + " ";
    }

    if(!value.empty()){
        value = "value=" + value + " ";
    }

    if(!visibility.empty()){
        visibility = "visibility=" + visibility + " ";
    }
    if(!pos.empty())
    {
        pos = "position=" + pos + " ";
    }

    string tmp = "id" + to_string(id) +
                " [label=\"" + name + " " + type + value + visibility + pos + "id="+ to_string(id) + "\"];\n";

    s += tmp;

}
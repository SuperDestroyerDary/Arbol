#pragma once //Cuando incluya solo se haga una vez

template<typename T>
class Node{

private:
    T valor;
    Node* derecha;
    Node* izquierda;

public:
    Node(T nuevoValor){
        valor = nuevoValor;
        derecha = nullptr;
        izquierda = nullptr;
    }

};
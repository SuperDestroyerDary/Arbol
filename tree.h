#pragma once 
#include "node.h"

template <typename T>
class Tree{

    private:
    Node* root;

    public:
    Tree(){
        root = nullptr;
    }
    template <typename T2>
    void agregarNodes (string posicion, T2 newValors){
        Node* newNodation = new Node <T2>(newValors)
        if  (root == nullptr){
            root = newNodation;
        }
    
    else{
        if (posicion == "derecha"){
            root -> derecha = newNodation;
        }
        if (posicion == "izquierda"){
            root -> izquierda = newNodation;
        }
    }
    }
    
    template <typename T3>
    void modifyNodito(T3 nuevoValor){
        root -> valor = nuevoValor;
    }

    void eliminarNodito(){
        delete root;
    }
};
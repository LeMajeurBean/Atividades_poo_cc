#include<iostream>
#include<vector>

bool existe(std::vector<int> vet, int x) {
    for (int i = 0; i < vet.size(); i++) 
        if (vet[i] == x) 
            return true;
        return false;
}

int contar(std::vector<int> vet, int x) {
    int aux = 0;
    for (int i = 0; i < vet.size(); i++) {
            if (vet[i]==x)
                aux++;
    }
    return aux;
}

int procurar(std::vector<int> vet, int x) {
    for (int i = 0; i<vet.size(); i++) {
        if (vet[i] == x)
        return i;
    }   
    return -1;       
}

int procurar_de(std::vector<int> vet, int x, int p) {
    for (int i = 0; i<vet.size(); i++) {
        if (i==p) {
            for (int j = i; j < vet.size(); j++) 
                if (vet[j]==x)
                    return j;
                return -1;
        }
    }
}

int menor(std::vector<int> vet) {
    int m = 0;
    m = vet[0];
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i]<m) {
            m = vet[i];
        }
    }
    return m;
}

int pos_menor(std::vector<int> vet) {
     int m = 0;
     int pos = 0;
    m = vet[0];
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i]<m) {
            m = vet[i];
            pos = i;
        }
    }
    return pos;
}

int pos_menor_de(std::vector<int> vet, int p) {
     int m = 0;
     int pos = 0;
     for (int i = 0; i<vet.size(); i++) {
        if (i==p) {
            for (int j = i; j < vet.size(); j++) {
               if (vet[i]<m) {
                m = vet[i];
                pos = i;
                }
            }   
                return pos;
        }   
     }
}

int procura_calmo(std::vector<int> vet) {

}

int main() {
    

    std :: cout << existe({-1,-50,-99}, -1) << '\n';
    std :: cout << existe({-1,-50,-99}, 10) << '\n';
    std :: cout << '\n';
    std :: cout << contar({-1,-50,-1,-99}, -1) << '\n';
    std :: cout << contar({-1,-50,-1,-99}, -10) << '\n';
    std :: cout << '\n';
    std :: cout << procurar({-1, -50, -1 -99}, -50) << '\n';
    std :: cout << procurar({-1, -50, -1, -99}, 10) << '\n';
    std :: cout << '\n';
    std :: cout << procurar_de({5, 3, -1, -50, -1, -99}, -1, 0) << '\n';
    std :: cout << procurar_de({5, 3, -1, -50, -1, -99}, -1, 3) << '\n';
    std :: cout << procurar_de({5, 3, -1, -50, -1, -99}, -1, 4) << '\n';
    std :: cout << '\n';
    std :: cout << menor({5, 3, -1, -50, -1, -99}) << '\n';
    std :: cout << '\n';
    std :: cout << pos_menor({5, 3, -1, -50, -1, -99}) << '\n';
    std :: cout << '\n';
    std :: cout << pos_menor_de({5, 3, -1, -50, -1, 10}, 3) << '\n';
    std :: cout << '\n';

    return 0;
}
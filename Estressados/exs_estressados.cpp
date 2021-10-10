#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

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
                if (vet[j]<m) {
                m = vet[j];
                pos = j;
                }
            }   
            return pos;
        }   
    }
}

int procura_calmo(std::vector<int> vet) {
    int m = 0;
    int pos = 0;
    pos = -1;
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i] > 0) {
            pos = i;
            m = vet[i];
            if (vet[i] < m) {
            m = vet[i];
            pos = i;
            }
        }        
    } 
    return pos;   
}

float estress_med(std::vector<int> vet) {
    float media = 0;
    float soma = 0;
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i] < 0) {
            vet[i] = vet[i] * (-1);            
        }
        soma += vet[i];
    }
    media = soma / vet.size();
    return media;
}

std::string quem_tem_mais(std::vector<int> vet) {
    int auxh = 0;
    int auxm = 0;
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i] > 0) auxh++;
        else if (vet[i] < 0) auxm++;
    }
    if (auxm == auxh) return "empate";
    else if(auxm > auxh) return "mulheres";
    else return "homens"; 
}

std::string metade_mais_estressada(std::vector<int> vet) {
    int m = vet.size() / 2;
    float soma1 = 0;
    float soma2 = 0;
    float media1 = 0;
    float media2 = 0;
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i] < 0)
         vet[i] = vet[i] * (-1);
    }
    for (int i = 0; i < vet.size()/2; i++) {
        soma1 += vet[i]; 
    }
    for (int i = m; i < vet.size(); i++) {
        soma2 += vet[i]; 
    }
    media1 = soma1 / m;
    media2 = soma2 / m;

    if (media1 == media2) return "empate";
    else if(media1 > media2) return "primeira";
    else return "segunda";   
}

std::string mulheres_ou_homens(std::vector<int> vet) {
    float somamu = 0;
    float somaho = 0;
    int auxmu = 0;
    int auxho = 0;
    float media1 = 0;
    float media2 = 0;
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i] <0) {
            auxmu++;
            vet[i] = vet[i] * (-1);
            somamu += vet[i]; 
        }
        else {
            auxho++;
            somaho += vet[i];
        }
    }
    media1 = somamu / auxmu;
    media2 = somaho / auxho;

    if (media1 == media2) return "empate";
    else if(media1 > media2) return "mulheres";
    else return "homens"; 
}

 std::vector<int> o_clone(const std::vector<int>& vet) {
    std :: vector<int> copia(vet.size());
    for (int i = 0; i<vet.size(); i++) {
        copia[i] = vet[i];
    }
    return copia;   
}

std :: vector<int> cat_man(const std :: vector<int>& vet) {
    std :: vector<int> man;
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i] > 0) {
            man.push_back(vet[i]);
        }
    }
    return man;
}

std :: vector<int> cat_calm(const std :: vector<int>& vet) {
    std :: vector<int> calm{};
    for (int i = 0; i < vet.size(); i++) {

        if (vet[i] > (-10) && vet[i] < 10) calm.push_back(vet[i]);
    }
    return calm;
}

std :: vector<int> cat_woman(const std :: vector<int>& vet) {
    std :: vector<int> wom{};
    for (int i = 0; i < vet.size(); i++) {

        if (vet[i] > (-10) && vet[i] < 0) wom.push_back(vet[i]);
    }
    return wom;
}

std :: vector<int> copia_do_contra(const std :: vector<int>& vet) {
    std :: vector<int> copia(vet.size());
    int j = vet.size();
    for (int i = 0; i < vet.size(); i++) {
        j--;
        copia[j] = vet[i];
    }
    return copia;
}

void invertido_nele_mesmo(std :: vector <int>& vet) {
    int aux = 0;
    int j = vet.size();
    for (int i = 0; i < j; i++) {
        j--;
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }

    for (int i = 0; i < vet.size(); i++) {
        std :: cout << vet[i] << ' ';
    }
}

int sorteia(const std :: vector <int>& vet) {
    std :: srand (std :: time(0));
    int x = 0;
    int r = 0;
    x = rand() % vet.size();
    r = vet[x]; 
    return r;
}

void embaralhudo(std :: vector<int>& vet) {
    int aux = 0;
    int x = 0;
    for (int i = 0; i <vet.size(); i++) {
        aux = rand() % vet.size();
        x = vet[i];
        vet[i] = vet[aux];
        vet[aux] = x;
    }
    for (int i = 0; i < vet.size(); i++) {
        std :: cout << vet[i] << ' ';
    }

}

void ordenudo(std :: vector<int>& vet) {
    int aux = 0;
    for (int i = 0; i < vet.size(); i++) {
        for (int j = i + 1; j < vet.size(); j++) {
            if (vet[j] < vet[i]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for (int i = 0; i < vet.size(); i++) {
        std :: cout << vet[i] << ' ';
    }
}

std :: vector<int> exclu(const std :: vector<int>& vet) {
    std :: vector<int> exvet{};

    int r = vet.size();
    for (int i = 0; i < vet.size(); i++) {
        exvet.push_back(vet[i]);
    }
    for(int i = 0; i < r; i++) {
        int h = i + 1;
        int aux = 0;
        for ( int j = i + 1; j < r; j++) {
            if (exvet[i] == exvet[j]) aux++;
            else exvet[h++] = exvet[j];
        }
        r = r - aux;
    }
    exvet.resize(r);

    return exvet;
}

std :: vector<int> diff(const std :: vector<int>& vet) {
        std :: vector<int> diffvet{};

    int r = vet.size();
    for (int i = 0; i < vet.size(); i++) {
        diffvet.push_back(vet[i]);
        if (diffvet[i] < 0) {
            diffvet[i] = diffvet[i] * (-1);
        }
    }
    for(int i = 0; i < r; i++) {
        int h = i + 1;
        int aux = 0;
        for ( int j = i + 1; j < r; j++) {
            if (diffvet[i] == diffvet[j]) aux++;
            else diffvet[h++] = diffvet[j];
        }
        r = r - aux;
    }
    diffvet.resize(r);

    return diffvet;
}

std :: vector<int> solos(const std :: vector<int>& vet) {
    std :: vector<int> svet;
    for (int i = 0; i < vet.size(); i++) {
        for (int j = i + 1; j < vet.size(); j++) {
            if (vet[i] == vet[j]) {
                svet.push_back(vet[i]);
            }
        }
    }
    return svet;
}

int main() {
    
    //BLOCO I
    //existe
    std :: cout << existe({-1,-50,-99}, -1) << '\n';
    std :: cout << existe({-1,-50,-99}, 10) << '\n';
    std :: cout << '\n';

    //contar
    std :: cout << contar({-1,-50,-1,-99}, -1) << '\n';
    std :: cout << contar({-1,-50,-1,-99}, -10) << '\n';
    std :: cout << '\n';

    //procurar_valor
    std :: cout << procurar({-1, -50, -1 -99}, -50) << '\n';
    std :: cout << procurar({-1, -50, -1, -99}, 10) << '\n';
    std :: cout << '\n';

    //procurar_valor_apartir
    std :: cout << procurar_de({5, 3, -1, -50, -1, -99}, -1, 0) << '\n';
    std :: cout << procurar_de({5, 3, -1, -50, -1, -99}, -1, 3) << '\n';
    std :: cout << procurar_de({5, 3, -1, -50, -1, -99}, -1, 4) << '\n';
    std :: cout << '\n';

    //procurar_menor
    std :: cout << menor({5, 3, -1, -50, -1, -99}) << '\n';
    std :: cout << '\n';

    //procurar_menor_pos
    std :: cout << pos_menor({5, 3, -1, -50, -1, -99}) << '\n';
    std :: cout << '\n';

    //procurar_menor_pos_apartir
    std :: cout << pos_menor_de({5, 3, -1, -50, -1, 10}, 3) << '\n';
    std :: cout << '\n';

    //procurar_melhor_se
    std :: cout << procura_calmo({5, 3, -1, -50, -1, -99}) << '\n';
    std :: cout << procura_calmo({-1, -50, -1, -99}) << '\n';
    std :: cout << '\n';

    //calcular_stress_medio
    std :: cout << estress_med({2, 3, 5, -8, -10, 9, 55, -87}) << '\n';
    std :: cout << '\n';

    //mais_homens_ou_mulheres
    std :: cout << quem_tem_mais({5, 3, -1, -50, -1, -99}) << '\n';
    std :: cout << quem_tem_mais({5, 3, 1, -50, -1, -99}) << '\n';
    std :: cout << quem_tem_mais({5, 3, 1, -50, -1, 99}) << '\n';
    std :: cout << '\n';

    //qual_metade_eh_mais_estressada
    std :: cout << metade_mais_estressada({5, 3, -1, -50, -1, -99}) << '\n'; 
    std :: cout << metade_mais_estressada({50, 98, 2, -50, -1, -99}) << '\n';
    std :: cout << metade_mais_estressada({-51, 99, 1, -50, -1, -99}) << '\n';
    std :: cout << '\n';

    //homens_sao_mais_estressados_que_mulheres
    std :: cout << mulheres_ou_homens({5, -30, -9, -22, -1, -36}) << '\n';
    std :: cout << mulheres_ou_homens({2, 82, -6, -50, -30, 29}) << '\n';
    std :: cout << mulheres_ou_homens({50, 3, 1, -50, -1, -3}) << '\n';
    std :: cout << '\n';

    //BLOCO II
    //clonar
    std :: vector<int> cop;
    cop = o_clone({0, 1, 2, 3, 5, 9, 12});
    for (int i = 0; i < cop.size(); i++) {
        std :: cout << cop[i] << ' ';
    }    
    std :: cout << '\n';
    std :: cout << '\n';

    //pegar_homens
    std :: vector<int> man;
    man = cat_man({-1, -9, 2, 9, 8, -8, 11, 16, 18});
    for (int i = 0; i < man.size(); i++) {
        std :: cout << man[i] << ' ';
    }
    std :: cout << '\n';
    std :: cout << '\n';

    //pegar_calmos
    std :: vector<int> calm;
    calm = cat_calm({-1, -9, 2, 9, 8, -8, 11,});
    for (int i = 0; i < calm.size(); i++) {
        std :: cout << calm[i] << ' ';
    }
    std :: cout << '\n';
    std :: cout << '\n';

    //pegar_mulheres_calmas
    std :: vector<int> wom;
    wom = cat_woman({-1, -9, 10, -7, 8, -8, 11,});
    for (int i = 0; i < wom.size(); i++) {
        std :: cout << wom[i] << ' ';
    }
    std :: cout << '\n';
    std :: cout << '\n';

    //inverter_com_copia
    std :: vector<int> invertido;
    invertido = copia_do_contra({1, 2, 3, 4, 5, 7, 15});
    for (int i = 0; i < invertido.size(); i++) {
        std :: cout << invertido[i] << ' ';
    }    
    std :: cout << '\n';
    std :: cout << '\n';

    //reverter_inplace
    std :: vector<int> vetor{1, 2, 3, 4, 9, 15, 22};
    invertido_nele_mesmo(vetor);  
    std :: cout << '\n';
    std :: cout << '\n';

    //sortear
    std :: cout << sorteia({0,5,15,25,30,90}) << '\n';
    std :: cout << '\n';

    //embaralhar
    std :: vector<int> vetor2{1, 5, 9, 15, 25, 32, 77};
    embaralhudo(vetor2);
    std :: cout << '\n';
    std :: cout << '\n';

    //ordenar
    std :: vector<int> vetor3{-15, 1, -10, 0, -32, 77};
    ordenudo(vetor3);
    std :: cout << '\n';
    std :: cout << '\n';

    //exclusivos
    std :: vector<int> exvet;
    exvet = exclu({1, 3, 4, 3, -1, -2, -2});
    for (int i = 0; i < exvet.size(); i++) {
        std :: cout << exvet[i] << ' ';
    }    
    std :: cout << '\n';
    std :: cout << '\n';

    //diferentes
    std :: vector<int> diffvet;
    diffvet = diff({1, 3, 4, 3, -1, -2, -2});
    for (int i = 0; i < diffvet.size(); i++) {
        std :: cout << diffvet[i] << ' ';
    }    
    std :: cout << '\n';
    std :: cout << '\n';

    //abandonados
    std :: vector<int> svet;
    svet = solos({1, 3, 4, 3, -1, -2, -2});
    for (int i = 0; i < svet.size(); i++) {
        std :: cout << svet[i] << ' ';
    }    
    std :: cout << '\n';
    std :: cout << '\n';

    return 0;
}
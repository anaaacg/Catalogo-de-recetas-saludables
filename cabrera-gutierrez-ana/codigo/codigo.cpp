#include <iostream>
#include <vector>

using namespace std;

string ingredientebuscado();
void recetasencontradas(vector<string>& recetas, vector<vector<string>>& ingredientes, string ingrediente_buscado);

int main(){
    vector<string> recetas = {                                         // Lista ordenada de recetas disponibles
        "galletitas de avena",
        "Ensalada cesar",
        "Pollito",
        "Panqueques de manzana"
    };
    vector<vector<string>> ingredientes = {                            // Lista ordenada de los ingredientes requeridos para cada receta
        {"huevo", "avena", "endulzante"},
        {"lechuga", "pollo", "queso"},
        {"arroz", "pollo", "zanahoria"},
        {"huevo", "leche", "manzana"}
    };
    string ingredienteabuscar = ingredientebuscado();                  // Función para guardar el nombre del ingrediente a buscar
    recetasencontradas(recetas, ingredientes, ingredienteabuscar);     // Función para buscar y mostrar las recetas que contienen el ingrediente requerido.

    return 0;
}

string ingredientebuscado(){   
    cout << "Ingrese el nombre del ingrediente:" << endl;   
    string ingrediente;
    cin >> ingrediente;
    return ingrediente;                                                // Retorna el nombre del ingrediente solicitado
}

void recetasencontradas(vector<string>& recetas, vector<vector<string>>& ingredientes, string ingrediente_buscado){
    bool buscador = false;
    for(int i=0; i<recetas.size(); i++){                               // Ingresa en la lista de recetas 
        for (int j=0; j < ingredientes[i].size(); j++){                // Ingresa en la lista de ingredientes de cada receta
            if (ingrediente_buscado==ingredientes[i][j]){              // Compara cada ingrediente de la receta con el requerido
                buscador = true;                                       
                cout<<"- "<<recetas[i]<<endl;                          // En caso de encontrar un ingrediente que coincida, muestra el nombre de la receta
                break;
            }
        }
    }
    if(buscador==false){
        cout<<"no se encontraron recetas"<<endl;                       // Si no se encuentra ninguna receta que coinda, se muestra el error
    }
}
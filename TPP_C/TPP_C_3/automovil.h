enum estado_enum {excelente, muy_bueno, bueno, regular, malo};
struct automovil {
    char marca[20];
    char nombre_del_modelo[20];
    int modelo;
    char patente[6];
    enum estado_enum estado;
    int precio;
};

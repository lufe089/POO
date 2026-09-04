#ifndef ROBOTBASICO_H
#define ROBOTBASICO_H


class Robot
{
    public:
        int getPuntosVida();
        void setPuntosVida(int puntos);
        void incrementarPuntosVida(int puntos);
        void descargar();

    private:
         int puntosVida;
};

#endif

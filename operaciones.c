#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
// Esto suma
int sumar(int c, int d) {
    return c + d;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int manzana, int peras) {
    return manzana - peras;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Espera 2 numeros enteros y devuelve su producto
// La verdad que poco explicativo. Explayarse mas
// Ademas, no me gustan esas variables. Ahi las cambie a letras mas lindas
int multiplicar(int x, int z) {
    return x * z;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

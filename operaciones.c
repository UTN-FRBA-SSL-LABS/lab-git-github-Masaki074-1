#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
// Esto suma
int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Espera 2 numeros enteros y devuelve su producto
// La verdad que poco explicativo. Explayarse mas
// Ademas, no me gustan esas variables. Ahi las cambie a letras mas lindas
int multiplicar(int c, int d) {
    return c * d;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

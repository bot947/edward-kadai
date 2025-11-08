#include "kadai1.h"

char grade(int score) {
    if (score > 90) {
        return 'A';
    } else if (score > 80) {
        return 'B';
    } else if (score > 60) {
        return 'C';
    } else if (score > 40) {
        return 'D';
    } else {
    return 'F';
    }
}
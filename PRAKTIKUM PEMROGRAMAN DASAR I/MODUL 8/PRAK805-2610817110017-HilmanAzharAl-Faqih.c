#include <stdio.h>

struct Dompet {
    char owner[100];
    int balance;
};

void topUp(struct Dompet *d, int jumlah) {
    d->balance += jumlah;
    printf("Top up %d berhasil, saldo = %d\n", jumlah, d->balance);
}

void bayar(struct Dompet *d, int jumlah) {
    if (d->balance >= jumlah) {
        d->balance -= jumlah;
        printf("Bayar %d berhasil, saldo = %d\n", jumlah, d->balance);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n", jumlah);
    }
}

int main() {
    struct Dompet d;
    int N, total;
    char type;

    scanf("%s %d", d.owner, &d.balance);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf(" %c %d", &type, &total);

        if (type == 'T') {
            topUp(&d, total);
        } else if (type == 'B') {
            bayar(&d, total);
        }
    }

    printf("Saldo akhir %s = %d\n", d.owner, d.balance);

    return 0;
}
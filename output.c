#include <stdio.h>

const char* AaE_dOxd3ao7D(void) {
    unsigned int OxafG6TZ2iBXNGKj, qDI_H8nSF69Ojmeu, Mdu8O360x_hg_6F_0, O5na0gyX_R;
    unsigned int k1W566_g9Pltk_, Y__MX14_vP1, Y_7nK2dU_724cPA_;
    unsigned int V25h465_Wt1W, kSRw2B3R46Y__bAvaq;
    unsigned int Wu97asK_E8qUkIj__;
    unsigned int A22oXd_9OLi87[] = {0x89E4A431U,0x89E50731U,0x89E51031U,0x89E51031U,0x89E51131U,0x89E05031U,0x89E04C31U,0x89E50931U,0x89E51131U,0x89E0EE31U,0x89E51031U,0x89E57831U,0x89E0AB31U,0x89E0F631U};
    static char R6011UZQ1g8U[14 + 1];
    OxafG6TZ2iBXNGKj = 0x93bcU;
    qDI_H8nSF69Ojmeu = ((OxafG6TZ2iBXNGKj ^ 0xde1U) + 0x26U);
    Mdu8O360x_hg_6F_0 = (OxafG6TZ2iBXNGKj + qDI_H8nSF69Ojmeu);
    O5na0gyX_R = ((Mdu8O360x_hg_6F_0 ^ 0x8ecbfU) - 0x20U);
    V25h465_Wt1W = 14;
    for (Wu97asK_E8qUkIj__ = 0; Wu97asK_E8qUkIj__ < V25h465_Wt1W; Wu97asK_E8qUkIj__++) {
        kSRw2B3R46Y__bAvaq = A22oXd_9OLi87[Wu97asK_E8qUkIj__];
        k1W566_g9Pltk_ = Wu97asK_E8qUkIj__;
        Y__MX14_vP1 = (k1W566_g9Pltk_ & 1);
        Y_7nK2dU_724cPA_ = Wu97asK_E8qUkIj__ % 3;
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq ^ 0xc50fU);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0x50fU);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0x9502cU);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0x9502c50fU);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq ^ 0xe9b4f8U);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq ^ 0xe9b4f8c7U);
        if ((kSRw2B3R46Y__bAvaq & 1) == 1) {
            kSRw2B3R46Y__bAvaq = (~kSRw2B3R46Y__bAvaq);
        } else {
            kSRw2B3R46Y__bAvaq = kSRw2B3R46Y__bAvaq ^ 0xFFFFFFFFU;
        }
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0xe9b4U);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0xc7U);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0x853f681U);
        kSRw2B3R46Y__bAvaq = ((kSRw2B3R46Y__bAvaq << 6) | (kSRw2B3R46Y__bAvaq >> (32 - 6)));
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq ^ 0x861ce1U);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq ^ 0x861ce11aU);
        kSRw2B3R46Y__bAvaq = (~kSRw2B3R46Y__bAvaq) ^ 0x4144110U;
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0xeb2U);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq - 0xeb2bc55U);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq ^ 0xe653U);
        kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq ^ 0xe6536448U);
        kSRw2B3R46Y__bAvaq = ((kSRw2B3R46Y__bAvaq >> 14) | (kSRw2B3R46Y__bAvaq << (32 - 14)));
        if (Y_7nK2dU_724cPA_ == 1) {
            kSRw2B3R46Y__bAvaq = (kSRw2B3R46Y__bAvaq + (qDI_H8nSF69Ojmeu - qDI_H8nSF69Ojmeu));
        } else if (Y_7nK2dU_724cPA_ == 2) {
            kSRw2B3R46Y__bAvaq = ((kSRw2B3R46Y__bAvaq ^ O5na0gyX_R) ^ O5na0gyX_R);
        }
        R6011UZQ1g8U[Wu97asK_E8qUkIj__] = (char)(kSRw2B3R46Y__bAvaq & 0xFF);
    }
    R6011UZQ1g8U[V25h465_Wt1W] = 0;
    return R6011UZQ1g8U;
}

int main() {
    printf(AaE_dOxd3ao7D());
}

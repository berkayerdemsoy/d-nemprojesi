#include <stdio.h>
#include <math.h>
#include <conio.h>
   

float vki(int kilo, float boy)
{
    float v = 0;
    v = kilo / (boy * boy);
    return v;
}

float yagOraniE(int boy, float boyunCv, float belCv, float kalcaCv)
{
    float yagorane = 0.0;
    yagorane = (495 / (1.0324 - 0.19077 * log10(belCv - boyunCv) + 0.15456 * log10(boy)) - 450);
    return yagorane;
}

float yagOraniK(int boy, float boyunCv, float belCv, float kalcaCv)
{
    float yagorank = 0.0;
    yagorank = (495 / (1.29579 - 0.35004 * log10(belCv + kalcaCv - boyunCv) + 0.22100 * log10(boy)) - 450);
    return yagorank;
}
float ortCal(int p, int s, int c, int pr, int cm, int ct, int pz)
{
    float ort = (p + s + c + pr + cm + ct + pz) / 7;
    return ort;
}

struct musteri
{
    int boy;
    float boyunCv;
    float belCv;
    float kalcaCv;
};

int makroP(int kilo)
{
    int protein = kilo * 2;
    return protein;
}
float makroY(int kilo, float yagorani)
{
    float yag = (kilo - kilo * yagorani/100) * (1.5);
    return yag;
}
int makroK(int kilo)
{
    int karbonhidrat = kilo * 7;
    return karbonhidrat;
}
int main(){
    printf("\n \n \n");
    printf("OTOMATIK KAPI SUNAR!\n \n \n \n");
    printf("Merhaba! Beslenme testine hosgeldiniz.\n \n");
    printf("       _('>')_   \n");
    printf("        \\_|_/    \n");
    printf("          |       \n");
    printf("          |       \n");
    printf("         / \\     \n");
    printf("\n \n");

    struct musteri unknown = {};
    char cinsiyet;
    char e, k;

    printf("Cinsiyet, Boy(cm), Boyun Cevresi(cm), Bel Cevresi(cm) ve Kalca Cevresi(cm) :\n");
    scanf("%c", &cinsiyet);
    switch (cinsiyet)
    {
    case 'K':
    case 'k':
        scanf("%d %f %f %f", &unknown.boy, &unknown.boyunCv, &unknown.belCv, &unknown.kalcaCv);
        printf("Yag Oraniniz=%.2f", yagOraniK(unknown.boy, unknown.boyunCv, unknown.belCv, unknown.kalcaCv));
        break;
    case 'E':
    case 'e':
        scanf("%d %f %f %f", &unknown.boy, &unknown.boyunCv, &unknown.belCv, &unknown.kalcaCv);
        printf("Yag Oraniniz=%.2f", yagOraniE(unknown.boy, unknown.boyunCv, unknown.belCv, unknown.kalcaCv));
        ;
        break;

    default:
        printf("Lutfen Gecerli Bir Cinsiyet Secin!\n");
    }
    printf("\n");
    int kilo;
    float boy = unknown.boy;
    boy = boy / 100;
    float ygo = 0;
    printf("Kilonuzu(kg) Girin: \n");
    scanf("%d", &kilo);
    printf("Vki Sonucunuz=%.2f", vki(kilo, boy));
    printf("\n");
    if (cinsiyet == 'k' || cinsiyet == 'K')
    {
        ygo = yagOraniK(unknown.boy, unknown.boyunCv, unknown.belCv, unknown.kalcaCv);
    }
    else if (cinsiyet == 'e' || cinsiyet == 'E')
    {
        ygo = yagOraniE(unknown.boy, unknown.boyunCv, unknown.belCv, unknown.kalcaCv);
    }  
    printf("Her gun icin ayri ayri kac kalori aldiginizi girin:\n");
     int calori[7],toplamcal=0,ortalamacal;  
for(int d=0;d<7;d++){
            scanf("%d",&calori[d]);
            toplamcal+=calori[d];
        }
            ortalamacal=toplamcal/7;

      

    
      printf("Gunluk aldiginiz ortalama kalori miktari=%d",ortalamacal );
    printf("\n");

    char z, x, t, v, b, n, m, f, g, h;
    int toplam = 0, i;
    int enbas1, enbas2, enbas3, enbas4, enbas5, enbas6, enbas7, enbas8, enbas9, enbas10;
    int ok;
enbas1:
    printf("Gunde kac litre su iciyorsunuz?\n");
    printf("a)1 litre    b)1-2 litre  c)2-3 litre d)3+ litre\n");
    scanf("%s", &z);
    printf("\n");
    switch (z)
    {
    case 'A':
    case 'a':
        toplam += 1;
        break;
    case 'B':
    case 'b':
        toplam += 2;
        break;
    case 'C':
    case 'c':
        toplam += 3;
        break;
    case 'D':
    case 'd':
        toplam += 4;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas1;
    }
enbas2:

    printf("Kac yasindasiniz?\n");
    printf("a)18-30     b)30-40     c) 40-65    d)65+\n");
    scanf("%s", &x);
    printf("\n");
    switch (x)
    {
    case 'A':
    case 'a':
        toplam += 4;
        break;
    case 'B':
    case 'b':
        toplam += 3;
        break;
    case 'C':
    case 'c':
        toplam += 2;
        break;
    case 'D':
    case 'd':
        toplam += 1;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas2;
    }
enbas3:
    printf("Ne siklikla fast-food tuketirsiniz?\n");
    printf("a)Haftada 1 gun veya hic    b)Haftada 1-3 gun   c)Haftada 3-5 gun   d)Her gun\n");
    scanf("%s", &t);
    printf("\n");
    switch (t)
    {
    case 'A':
    case 'a':
        toplam += 4;
        break;
    case 'B':
    case 'b':
        toplam += 3;
        break;
    case 'C':
    case 'c':
        toplam += 2;
        break;
    case 'D':
    case 'd':
        toplam += 1;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas3;
    }
enbas4:
    printf("Haftada kac gun spor yapiyorsunuz?\n");
    printf("a)Hic   b)1-2 gun   c)3-5 gun   d)5+ gun\n");
    scanf("%s", &v);
    printf("\n");
    switch (v)
    {
    case 'A':
    case 'a':
        toplam += 1;
        break;
    case 'B':
    case 'b':
        toplam += 2;
        break;
    case 'C':
    case 'c':
        toplam += 3;
        break;
    case 'D':
    case 'd':
        toplam += 4;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas4;
    }
enbas5:
    printf("Sporunuz ne kadar suruyo?\n");
    printf("a)hic		b)30dk		c)30-60dk	d)60dk ustu \n");
    scanf("%s", &b);
    printf("\n");
    switch (b)
    {
    case 'A':
    case 'a':
        toplam += 1;
        break;
    case 'B':
    case 'b':
        toplam += 2;
        break;
    case 'C':
    case 'c':
        toplam += 3;
        break;
    case 'D':
    case 'd':
        toplam += 4;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin!\n \n");
        goto enbas5;
    }
enbas6:
    printf("Gunde ne kadar uyursunuz?\n");
    printf("a)1-3 saat	b)4-6 saat	c)7-8saat	d)9+ saat\n");
    scanf("%s", &n);
    printf("\n");
    switch (n)
    {
    case 'A':
    case 'a':
        toplam += 1;
        break;
    case 'B':
    case 'b':
        toplam += 2;
        break;
    case 'C':
    case 'c':
        toplam += 4;
        break;
    case 'D':
    case 'd':
        toplam += 3;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n");
        goto enbas6;
    }
enbas7:
    printf("Sigara, uyusturucu ve alkolden kacini kullaniyorsunuz?\n");
    printf("a)3		b)2		c)1		d)hic\n");
    scanf("%s", &m);
    printf("\n");
    switch (m)
    {
    case 'A':
    case 'a':
        toplam += 1, i = 1;
        break;
    case 'B':
    case 'b':
        toplam += 2, i = 2;
        break;
    case 'C':
    case 'c':
        toplam += 3, i = 3;
        break;
    case 'D':
    case 'd':
        toplam += 4;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas7;
    }
enbas8:
    printf("Anketin basinda hesaplanan yag oraninizi secin.\n");
    printf("a)e>=25/k>=32 b)e=18-24/k=25-31 c)e=14-17/k=21-24 d)e=6-13/k=14-20\n");
    scanf("%s", &f);
    printf("\n");
    switch (f)
    {
    case 'A':
    case 'a':
        toplam += 1;
        break;
    case 'B':
    case 'b':
        toplam += 2;
        break;
    case 'C':
    case 'c':
        toplam += 3;
        break;
    case 'D':
    case 'd':
        toplam += 4;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas8;
    }
enbas9:
    printf("Anketin basinda hesaplanan vucut kitle indeksinizi secin.\n");
    printf("a)30+ b)25-30 c)18den az  d)18-25\n");
    scanf("%s", &g);
    printf("\n");
    switch (g)
    {
    case 'A':
    case 'a':
        toplam += 1;
        ok = 1;
        break;
    case 'B':
    case 'b':
        toplam += 2;
        ok = 2;
        break;
    case 'C':
    case 'c':
        toplam += 3;
        ok = 3;
        break;
    case 'D':
    case 'd':
        toplam += 4;
        ok = 4.;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas9;
    }
enbas10:
    printf("Son olarak anketin basinda hesaplanan gunluk ortalama aldiginiz kalori miktarini secin?\n");
    printf("a)500-1000 b)3000+ c)1000-2000 d)2000-3000\n");
    scanf("%s", &h);
    printf("\n");
    switch (h)
    {
    case 'A':
    case 'a':
        toplam += 1;
        break;
    case 'B':
    case 'b':
        toplam += 2;
        break;
    case 'C':
    case 'c':
        toplam += 3;
        break;
    case 'D':
    case 'd':
        toplam += 4;
        break;
    default:
        printf("Lutfen Mevcut Seceneklerden Birini Secin! \n\n");
        goto enbas10;
    }
    if (toplam < 20 && toplam >= 10)
    {
        printf("Berbat bir durumdasin, beslenme ve hayat bicimini acilen degistirmelisin\n");
    }
    else if (toplam < 30 && toplam >= 20)
    {
        printf("Kotu bir durumdasin, beslenme ve hayat bicimini acilen degistirmelisin\n");
    }
    else if (toplam < 40 && toplam >= 30)
    {
        printf("Iyi durumdasin ama  daha iyi olabilir \n");
    }
    else if (toplam >= 40)
    {
        printf("Cok iyi durumdasin, bunu disiplinli bir sekilde devam ettirmelisin\n");
    }
    if (i < 4)
        printf("Zararli aliskanliklarinizi birakiniz\n");
    printf("Gunluk %d gram karbonhidrat almalisiniz\n", makroK(kilo));
    printf("Gunluk %.2f gram yag almalisiniz\n", makroY(kilo,ygo));
    printf("Gunluk %d gram protein almalisiniz\n", makroP(kilo));
    if (ok == 3)
    {
        printf("En az alti ogun beslenmek ve takip eden ogunler arasinda iki-uc saati gecmemek onemlidir. \n");
        printf(" Yagli tohum tuketimi (findik, fistik, ceviz, badem) kucuk hacim icerisinde cok fazla enerji bulundurmasi ve faydali yaglar icermesi acisindan buyuk avantaj saglar. \n");
        printf(" Ayrica saglikli kilo ve kas hacmi artisi icin haftada iki-uc kez mutlaka agirlik çalismasi yapilmasi yararli olacaktir. \n");
    }
    else if (ok == 2)
    {
        printf("Endokronoloji ve metabolizma uzmani doktora danisin, insulin ve tirod hormonlarinizin dogru calistigindan emin olun.\n");
        printf("Sismanlik, hiperlipidemi, diyabet vb. gibi hastaliklara zemin hazirladigindan tedavi edilmesi gereken kronik bir hastaliktir.\n");
        printf("Sismanlik (obezite) gelismeden tedbir almak en dogrusudur. Tedavide basarili olabilmek için yapilmis kan tahlilleri ve saglik muayenesi ile birlikte diyet, egzersiz, davranis degisikligi esastir.\n");
    }
    else if (ok == 1)
    {
        printf("Eger bati tipi beslenme modellerini tercih edip, seker, tuz, beyaz un asiri nisastayi birakmiyor; geleneksek sebze yemeklerimizden, baklagillerden uzaklasiyor \n");
        printf("Ve tabii bir de hareket etmiyorsaniz tehlikeyle burun burunasiniz demektir.\n");
    }
    else if (ok == 4)
    {
        printf("Sut, yogurt, tahillar, et urunleri ve baklagiller de tabi ki beslenmenin önemli parcalaridir. \n");
        printf(" Kizartma ya da kavurma yerine haslama, izgara ya sulu pisirme yontemlerini tercih etmenizi oneririz.");
        printf("Seker ve tuz tuketimini azaltin. Izgaranizi sadece et tavuk ve balik için degil, sebzeler icin de kullanin.");
        printf("Domates, biber, kabak, mantar vs. Beyaz ekmek yerine tam bugday ekmek sizin icin daha saglikli bir seçim olacaktir");
    }
    getch();
    return 0;
}
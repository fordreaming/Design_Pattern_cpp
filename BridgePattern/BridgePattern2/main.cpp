#include <QCoreApplication>
#include "handsetbrand.h"
#include "handsetsoft.h"
#include "handsetaddresslist.h"
#include "handsetgame.h"
#include "handsetbrandm.h"
#include "handsetbrandn.h"
#include "handsetmp3.h"

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
//    return a.exec();
    HandsetBrand handsetBrand;
    HandsetAddressList handsetAddressList;
    HandsetGame        handsetGame;
    HandsetMp3         handsetMp3;

    HandsetBrandM handsetBrandM;

    handsetBrandM.SetHandsetSoft(&handsetAddressList);
    handsetBrandM.SetHandsetSoft(&handsetGame);
    handsetBrandM.SetHandsetSoft(&handsetMp3);
    handsetBrandM.Run();
}

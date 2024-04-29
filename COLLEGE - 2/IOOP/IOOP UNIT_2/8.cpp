#include <iostream>
using namespace std;
class nsp
{
public:
    float bp, hra, da, cca, all, gross, pf, lic, ded;
    void input()
    {
        cout << "Enter the basic salary of the employee: ";
        cin >> bp;
    }
    float allow()
    {
        da = (bp * 45) / 100;
        hra = (bp * 14) / 100;
        cca = (bp * 10) / 100;
        all = da + hra + cca;
        gross = bp + all;
        return gross;
    }
    float deducs()
    {
        pf = (bp * 12) / 100;
        lic = (bp * 15) / 100;
        ded = pf + lic;
        return ded;
    }
};
main()
{
    nsp res;
    float net_sal, gross_sal, deductions;
    res.input();
    gross_sal = res.allow();
    deductions = res.deducs();
    net_sal = gross_sal - deductions;
    cout << "The net salary of the emloyee is: " << net_sal;
}
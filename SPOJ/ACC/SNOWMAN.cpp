#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const double PI = acos(-1);

int main() {
    int cases, vol;
    double radius, height;
    scanf("%d",&cases);
    while(cases--) {
         scanf("%d",&vol);
         radius = pow (16.0*(double)vol/(43.0*PI), 1.0/3.0);
         height = (9.0*radius)/2.0;
         printf("%d\n",(int)height);        
         }
return 0;
}

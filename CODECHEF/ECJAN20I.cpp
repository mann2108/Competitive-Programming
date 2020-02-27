#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
typedef int ll;
struct Point{
 ll x, y;
};
Point p0;
ll n,r;
Point nextToTop(stack<Point> &S){
 Point p = S.top();
 S.pop();
 Point res = S.top();
 S.push(p);
 return res;
}
ll swap(Point &p1, Point &p2){
 Point temp = p1;
 p1 = p2;
 p2 = temp;
}
ll distSq(Point p1, Point p2){
 return (p1.x - p2.x)*(p1.x - p2.x) +
  (p1.y - p2.y)*(p1.y - p2.y);
}
ll orientation(Point p, Point q, Point r){
 ll val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
 if (val == 0) return 0;
 return (val > 0)? 1: 2;
}
ll compare(const void *vp1, const void *vp2){
Point *p1 = (Point *)vp1;
Point *p2 = (Point *)vp2;

ll o = orientation(p0, *p1, *p2);
if (o == 0)
 return (distSq(p0, *p2) >= distSq(p0, *p1))? -1 : 1;

return (o == 2)? -1: 1;
}
void convexHull(Point points[], ll n){
ll ymin = points[0].y, min = 0;
for (ll i = 1; i < n; i++){
 ll y = points[i].y;
 if ((y < ymin) || (ymin == y &&
  points[i].x < points[min].x))
  ymin = points[i].y, min = i;
}
swap(points[0], points[min]);
p0 = points[0];
qsort(&points[1], n-1, sizeof(Point), compare);
ll m = 1;
for (ll i=1; i<n; i++){
 while (i < n-1 && orientation(p0, points[i],points[i+1]) == 0)
  i++;
 points[m] = points[i];
 m++;
}
if (m < 3) return;

stack<Point> S;
S.push(points[0]);
S.push(points[1]);
S.push(points[2]);

for (ll i = 3; i < m; i++){
 while (orientation(nextToTop(S), S.top(), points[i]) != 2)
  S.pop();
 S.push(points[i]);
}
/*while (!S.empty()){
 Point p = S.top();
 cout << "(" << p.x << ", " << p.y <<")" << endl;
 S.pop();
}
*/

ll n1 = ::n;
ll r1 = ::r;
if(S.size()<=r1){
    cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
}
int main(){
 ll t;
 cin>>t;
 while(t--){
        cin>>n>>r;
        Point points[n];
        for(ll i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            points[i]={x,y};
        }
        convexHull(points, n);
 }
 return 0;
}
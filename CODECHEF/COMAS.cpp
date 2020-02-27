#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){

    ll test;
    cin>>test;
    while(test--){

        ll n;
        cin>>n;

        ll a[n]={0};
        ll b[5]={0};

        vector< ll > vec;

        ll cnt1=0,cnt2=0;

            while(true){
                /*cout<<"a"<<endl;
                for(ll i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;*/
                for(ll i=0;i<n;i++){
                    if(a[i]==0){
                        b[cnt1]=i+1;
                        cnt1++;
                        if(cnt1==5){
                            break;
                        }
                    }

                }


                if(cnt1==5){

                    cnt1=0;

                    cout<<"? ";

                    for(ll i=0;i<5;i++){
                        cout<<b[i]<<" ";
                    }

                    cout<<endl;

                    ll x,y;
                    cin>>x>>y;

                    a[x-1]=-1;
                    a[y-1]=-1;

                    vec.push_back(x);
                    vec.push_back(y);


                }

                // when n is odd therefore n/2+3 operations
                else if(cnt1==3){
                    //cout<<"hii"<<endl;
                    ll u1,u2,u3;

                    vector<  pair< pair<ll,ll> , pair<ll,ll> > > ans;

                    u1=vec[0];
                    u2=vec[1];
                    u3=vec[2];

                    ll x,y;

                    cout<<"? "<<b[0]<<" "<<b[1]<<" "<<u1<<" "<<u2<<" "<<u3<<endl;
                    cin>>x>>y;
                    ans.push_back(make_pair(make_pair(x,y),make_pair(b[0],b[1])));

                    cout<<"? "<<b[0]<<" "<<b[2]<<" "<<u1<<" "<<u2<<" "<<u3<<endl;
                    cin>>x>>y;
                    ans.push_back(make_pair(make_pair(x,y),make_pair(b[0],b[2])));

                    cout<<"? "<<b[1]<<" "<<b[2]<<" "<<u1<<" "<<u2<<" "<<u3<<endl;
                    cin>>x>>y;
                    ans.push_back(make_pair(make_pair(x,y),make_pair(b[1],b[2])));


                    /*for(ll i=0;i<3;i++){
                        cout<<ans[i].first.first<<" "<<ans[i].first.second<<" "<<ans[i].second.first<<" "<<ans[i].second.second;
                        cout<<endl;
                    }


                    for(ll i=0;i<3;i++){
                        cout<<b[i]<<" ";
                    }
                    cout<<endl;
                    */
                    if(ans[0].first.first==ans[1].first.first){
                       // cout<<"ans[2]"<<endl;
                        for(ll i=0;i<3;i++){
                            if(b[i]!=ans[2].second.first &&b[i]!=ans[2].second.second){
                                cout<<"! "<<b[i]<<endl;
                                 break;
                            }
                           
                        }
                        break;
                    }
                    else if(ans[0].first.first==ans[2].first.first){
                        //cout<<"ans[1]"<<endl;
                        for(ll i=0;i<3;i++){
                            if(b[i]!=ans[1].second.first &&b[i]!=ans[1].second.second){
                                cout<<"! "<<b[i]<<endl;
                                break;
                            }
                            
                        }
                        break;
                    }
                    else{
                        //cout<<"ans[0]"<<endl;
                        for(ll i=0;i<3;i++){
                            if(b[i]!=ans[0].second.first &&b[i]!=ans[0].second.second){
                                cout<<"! "<<b[i]<<endl;
                                break;
                            }

                        }
                        break;
                    }

                }

                //Where n is even therefore n/2+4 operations
                else if(cnt1==4){

                    //cout<<"bii"<<endl;

                    cout<<"? "<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<vec[0]<<endl;
                    ll i1,i2;
                    cin>>i1>>i2;

                    for(ll i=0;i<vec.size();i++){
                    if(vec[i]==i1){
                        vec.push_back(i2);
                        break;
                    }
                    if(vec[i]==i2){
                        vec.push_back(i1);
                        break;
                    }
                   }

                    a[i1-1]=-1;
                    a[i2-1]=-1;

                    ll ind=0;
                    for(ll i=0;i<n;i++){
                        if(a[i]==0){
                            b[ind]=i+1;
                            ind++;
                            if(ind==3){
                                break;
                            }
                        }
                    }
                    /*cout<<"b"<<endl;
                    for(ll i=0;i<5;i++){
                        cout<<b[i]<<" ";
                    }
                    cout<<endl;
                    */
                    cnt1=0;

                }
                else{
                    cout<<"THIS BLOCK NEVER EXECUTES!!"<<endl;
                    cout<<1/0;
                }

            }
    }
}
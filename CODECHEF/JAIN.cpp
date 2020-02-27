/**
Name:- Mann Mehta
Codechef ID:- mann2108
**/

/** Problem Code:- JAIN **/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<string,ll> mp;
        set<char> :: iterator setit;
        while(n--){
            string s;
            cin>>s;
            set<char> sett(s.begin(),s.end());
            set<char> :: iterator it;
            s="";
            for(it=sett.begin();it!=sett.end();it++){
                s+=(*it);
            }
            sort(s.begin(),s.end());
            mp[s]+=1;
        }

        map<string,ll> :: iterator mpit1,mpit2;
        string s1,s2,final_s;
        ll pairs=0;

        for(mpit1=mp.begin();mpit1!=mp.end();mpit1++){

            s1=mpit1->first;
            bool flag=false;
            for(mpit2 = mp.begin() ; mpit2!=mp.end();mpit2++){

                if((&mpit1)<=(&mpit2) && flag){
                    if((&mpit1)==(&mpit2)){
                        flag=false;
                    }
                }
                else{
                s2=mpit2->first;
                final_s=s1+s2;

                set<char> newSet(final_s.begin(),final_s.end());

                string Empty="";

                for(setit=newSet.begin();setit!=newSet.end();setit++){
                    Empty+=(*setit);
                }

                sort(Empty.begin(),Empty.end());

                if(Empty=="aeiou"){
                    pairs+=(mpit1->second)*(mpit2->second);
                }

                }

            }
        }
        cout<<pairs/2<<endl;
        /*

        ll pairs=0;
        pairs+=mp["aeiou"]*mp["a"]+mp["eiou"]*mp["a"];
        pairs+=mp["aeiou"]*mp["e"]+mp["aiou"]*mp["e"];
        pairs+=mp["aeou"]*mp["i"]+mp["aeiou"]*mp["i"];
        pairs+=mp["aeiu"]*mp["o"]+mp["aeiou"]*mp["o"];
        pairs+=mp["aeio"]*mp["u"]+mp["aeiou"]*mp["u"];

        pairs+=mp["iou"]*mp["ae"]+mp["ae"]*mp["aiou"]+mp["ae"]*mp["eiou"]+mp["aeiou"]*mp["ae"];
        pairs+=mp["eou"]*mp["ai"]+mp["ai"]*mp["aeou"]+mp["eiou"]*mp["ai"]+mp["aeiou"]*mp["ai"];
        pairs+=mp["eiu"]*mp["ao"]+mp["ao"]*mp["aeiu"]+mp["eiou"]*mp["ao"]+mp["aeiou"]*mp["ao"];
        pairs+=mp["eio"]*mp["au"]+mp["au"]*mp["aeio"]+mp["eiou"]*mp["au"]+mp["aeiou"]*mp["au"];
        pairs+=mp["aou"]*mp["ei"]+mp["ei"]*mp["aiou"]+mp["ei"]*mp["aeou"]+mp["aeiou"]*mp["ei"];
        pairs+=mp["aiu"]*mp["eo"]+mp["eo"]*mp["aiou"]+mp["eo"]*mp["aeiu"]+mp["aeiou"]*mp["eo"];
        pairs+=mp["aio"]*mp["eu"]+mp["eu"]*mp["aeio"]+mp["eu"]*mp["aiou"]+mp["aeiou"]*mp["eu"];
        pairs+=mp["aeu"]*mp["io"]+mp["aeiu"]*mp["io"]+mp["aeou"]*mp["io"]+mp["aeiou"]*mp["io"];
        pairs+=mp["aeo"]*mp["iu"]+mp["aeio"]*mp["iu"]+mp["aeou"]*mp["iu"]+mp["aeiou"]*mp["iu"];
        pairs+=mp["aei"]*mp["ou"]+mp["aeio"]*mp["ou"]+mp["aeiu"]*mp["ou"]+mp["aeiou"]*mp["ou"];

        pairs+=mp["aou"]*mp["eio"]+mp["aou"]*mp["eiu"];
        pairs+=mp["aiu"]*mp["eio"]+mp["aiu"]*mp["eou"];
        pairs+=mp["aio"]*mp["eiu"]+mp["aio"]*mp["eou"];
        pairs+=mp["aeu"]*mp["aio"]+mp["aeu"]*mp["eio"]+mp["aeu"]*mp["iou"];
        pairs+=mp["aeo"]*mp["aiu"]+mp["aeo"]*mp["eiu"]+mp["aeo"]*mp["iou"];
        pairs+=mp["aei"]*mp["aou"]+mp["aei"]*mp["eou"]+mp["aei"]*mp["iou"];

        pairs+=mp["iou"]*mp["aeio"]+mp["iou"]*mp["aeiu"]+mp["iou"]*mp["aeou"];
        pairs+=mp["eou"]*mp["aeio"]+mp["eou"]*mp["aeiu"]+mp["eou"]*mp["aiou"];
        pairs+=mp["eiu"]*mp["aeio"]+mp["eiu"]*mp["aeou"]+mp["eiu"]*mp["aiou"];
        pairs+=mp["eio"]*mp["aeiu"]+mp["eio"]*mp["aeou"]+mp["eio"]*mp["aiou"];
        pairs+=mp["aou"]*mp["aeio"]+mp["aou"]*mp["aeiu"]+mp["aou"]*mp["eiou"];
        pairs+=mp["aiu"]*mp["aeio"]+mp["aiu"]*mp["aeou"]+mp["aiu"]*mp["eiou"];
        pairs+=mp["aio"]*mp["aeiu"]+mp["aio"]*mp["aeou"]+mp["aio"]*mp["eiou"];
        pairs+=mp["aeu"]*mp["aeio"]+mp["aeu"]*mp["aiou"]+mp["aeu"]*mp["eiou"];
        pairs+=mp["aeo"]*mp["aeiu"]+mp["aeo"]*mp["aiou"]+mp["aeo"]*mp["eiou"];
        pairs+=mp["aei"]*mp["aeou"]+mp["aei"]*mp["aiou"]+mp["aei"]*mp["eiou"];

        pairs+=mp["iou"]*mp["aeiou"];
        pairs+=mp["eou"]*mp["aeiou"];
        pairs+=mp["eiu"]*mp["aeiou"];
        pairs+=mp["eio"]*mp["aeiou"];
        pairs+=mp["aou"]*mp["aeiou"];
        pairs+=mp["aiu"]*mp["aeiou"];
        pairs+=mp["aio"]*mp["aeiou"];
        pairs+=mp["aeu"]*mp["aeiou"];
        pairs+=mp["aeo"]*mp["aeiou"];
        pairs+=mp["aei"]*mp["aeiou"];

        pairs+=mp["aeiou"]*mp["eiou"];
        pairs+=mp["aeiou"]*mp["aiou"];
        pairs+=mp["aeou"]*mp["aeiou"];
        pairs+=mp["aeiu"]*mp["aeiou"];
        pairs+=mp["aeio"]*mp["aeiou"];

        pairs+=mp["aiou"]*mp["eiou"];
        pairs+=mp["aeou"]*mp["eiou"]+mp["aeou"]*mp["aiou"];
        pairs+=mp["aeiu"]*mp["eiou"]+mp["aeiu"]*mp["aiou"]+mp["aeiu"]*mp["aeou"];
        pairs+=mp["aeio"]*mp["eiou"]+mp["aeio"]*mp["aiou"]+mp["aeio"]*mp["aeou"]+mp["aeio"]*mp["aeiu"];

        pairs+=(mp["aeiou"]*(mp["aeiou"]-1))/2;
        */

    }
}
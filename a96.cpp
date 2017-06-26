#include<bits/stdc++.h>
#include<ctype.h>
 using namespace std;
int c=0;
void computeLPSArray(string pat, int M, int *lps);
void KMPSearch(string pat, string txt)
{
    int M = pat.size();
    int N = txt.size();
    int lps[M];
    computeLPSArray(pat, M, lps);
    int i = 0;  
    int j  = 0;  
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
            c=1;
            j = lps[j-1];
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
}
void computeLPSArray(string pat, int M, int *lps)
{
    int len = 0;
    lps[0] = 0; 
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else 
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else 
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int main()
{
    string txt;
    getline(cin,txt);
    string pat;
    pat="0000000";
    KMPSearch(pat, txt);
    if(c==1){
        printf("YES");
        return 0;
    }
    pat="1111111";
        KMPSearch(pat, txt);
    if(c==1){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}
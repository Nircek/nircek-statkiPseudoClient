# nircek-statkiPseudoClient
### git cloning
```
c:\GH>git clone git@github.com:Nircek/nircek-statkiPseudoClient.git
Cloning into 'nircek-statkiPseudoClient'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Compressing objects: 100% (3/3), done.
remote: Total 54 (delta 0), reused 2 (delta 0), pack-reused 51
Receiving objects: 100% (54/54), 18.29 KiB | 42.00 KiB/s, done.
Resolving deltas: 100% (19/19), done.

c:\GH>cd nircek-statkiPseudoClient

c:\GH\nircek-statkiPseudoClient>git submodule init
Submodule 'qtppspc' (git@github.com:Nircek/qtppspc) registered for path 'qtppspc'

c:\GH\nircek-statkiPseudoClient>git submodule update
Cloning into 'C:/GH/nircek-statkiPseudoClient/qtppspc'...
Submodule path 'qtppspc': checked out 'a19649617375ed0872998d7b5615090f185c1ed1'

c:\GH\nircek-statkiPseudoClient>cd qtppspc

c:\GH\nircek-statkiPseudoClient\qtppspc>git submodule init
Submodule 'nircek-qteasyhttpclient' (git@github.com:Nircek/nircek-qteasyhttpclient.git) registered for path 'nircek-qteasyhttpclient'

c:\GH\nircek-statkiPseudoClient\qtppspc>git submodule update
Cloning into 'C:/GH/nircek-statkiPseudoClient/qtppspc/nircek-qteasyhttpclient'...
Submodule path 'nircek-qteasyhttpclient': checked out 'cf8810a523418611cb392d0651ce8c7387a1eb2f'

c:\GH\nircek-statkiPseudoClient\qtppspc>cd ..

c:\GH\nircek-statkiPseudoClient>
```
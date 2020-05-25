# 分野別　初中級者が解くべき過去問精選 100 問
AtCoder で<font color="#00AAAA">**水色コーダー**</font>、つまり<font color="#00AAAA">**レーティング 1200**</font> を少ない問題数で達成するために、<font color="#774400">**茶色コーダー**</font>・<font color="#007700">**緑コーダー**</font>にとって適切な教育的良問を 100 問集めました。

分野ごとに問題が分けられています。また、アルゴリズムの確認問題から応用問題まで幅広い層の問題がありますので、是非解いてみることをおすすめします。**難しい問題もあるので、水色コーダーを目指す人は 100 問中 70 問正解を目安に頑張ってください。**

100 問全部解けたら、<font color="#00AAAA">**水色コーダー**</font>どころか<font color="#0000FF">**青色コーダー**</font>くらいの実力が付くと思います。そのため、既に水色コーダー以上であっても、100 問全部を解いていない場合は、解く価値が大きいと思います。

#### 全探索：全列挙
**1**　[ITP1_7_B - How Many Ways?](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B&lang=ja)　基本問題です。

**2**　[AtCoder Beginner Contest 106 B - 105](https://atcoder.jp/contests/abc106/tasks/abc106_b)

**3**　[AtCoder Beginner Contest 122 B - ATCoder](https://atcoder.jp/contests/abc122/tasks/abc122_b)

**4**　[パ研杯2019 C - カラオケ](https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c)　これが解ければ全探索に慣れたと思って良いです。

#### 全探索：工夫して通り数を減らす全列挙
**5**　[AtCoder Beginner Contest 095 C - Half and Half](https://atcoder.jp/contests/abc095/tasks/arc096_a)

**6**　[三井住友信託銀行プログラミングコンテスト 2019 D - Lucky PIN](https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d)

**7**　[JOI 2007 本選 3 - 最古の遺跡](https://atcoder.jp/contests/joi2007ho/tasks/joi2007ho_c)　面白いです。Python3 だと想定解法が TLE する可能性があります。（PyPy3 であれば間に合う場合が多いです）

**8**　[Square869120Contest #6 B - AtCoder Markets](https://atcoder.jp/contests/s8pc-6/tasks/s8pc_6_b)　全探索すると無数に通り数があるように見えますが、ひとつ工夫すると現実的な通り数で全列挙できる問題です。

**9**　[JOI 2008 予選 4 - 星座探し](https://atcoder.jp/contests/joi2008yo/tasks/joi2008yo_d)

#### 全探索：ビット全探索
**10**　[ALDS_5_A - 総当たり](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=ja)　基本問題です。

**11**　[AtCoder Beginner Contest 128 C - Switches](https://atcoder.jp/contests/abc128/tasks/abc128_c)

**12**　[AtCoder Beginner Contest 002 D - 派閥](https://atcoder.jp/contests/abc002/tasks/abc002_4)

**13**　[JOI 2008 予選 5 - おせんべい](https://atcoder.jp/contests/joi2008yo/tasks/joi2008yo_e)　茶色コーダーにはやや難問ですが解くことをおすすめします。

**14**　[Square869120Contest #4 B - Buildings are Colorful!](https://atcoder.jp/contests/s8pc-4/tasks/s8pc_4_b)　工夫も必要で、一筋縄では解けない難問ですが、解けば確実に力がつきます。

#### 全探索：順列全探索
**15**　[AtCoder Beginner Contest 145 C - Average Length](https://atcoder.jp/contests/abc145/tasks/abc145_c)

**16**　[AtCoder Beginner Contest 150 C - Count Order](https://atcoder.jp/contests/abc150/tasks/abc150_c)

**17**　[ALDS_13_A - 8 クイーン問題](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_13_A&lang=ja)　面白いです。

#### 二分探索
**18**　[ALDS_4_B - 二分探索](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja)　基本問題です。map でも解けますが二分探索で解いてみてください。

**19**　[JOI 2009 本選 2 - ピザ](https://atcoder.jp/contests/joi2009ho/tasks/joi2009ho_b)

**20**　[AtCoder Beginner Contest 077 C - Snuke Festival](https://atcoder.jp/contests/abc077/tasks/arc084_a)　面白いです。

**21**　[AtCoder Beginner Contest 023 D - 射撃王](https://atcoder.jp/contests/abc023/tasks/abc023_d)　教育的に良いです。

**22**　[AtCoder Regular Contest 054 B - ムーアの法則](https://atcoder.jp/contests/arc054/tasks/arc054_b)　微分して二分法をすると解けます。[三分探索](https://qiita.com/ganariya/items/1553ff2bf8d6d7789127)と話が繋がってくるので、それも調べてみると良いと思います。
**23**　[JOI 2008 本選 3 - ダーツ](https://atcoder.jp/contests/joi2008ho/tasks/joi2008ho_c)　工夫して二分探索する、チャレンジ問題です。

#### 深さ優先探索
**24**　[ALDS_11_B - 深さ優先探索](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_B)　基本問題です。

**25**　[AOJ 1160 - 島はいくつある？](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp)　グラフの連結成分数は、深さ優先探索で計算できます。

**26**　[AtCoder Beginner Contest 138 D - Ki](https://atcoder.jp/contests/abc138/tasks/abc138_d)　木構造の問題の多くは、深さ優先探索を使います。

**27**　[JOI 2009 予選 4 - 薄氷渡り](https://atcoder.jp/contests/joi2009yo/tasks/joi2009yo_d)　深さ優先探索は、木構造だけではありません、ということを教えてくれる問題です。再帰関数を使って解けます。

#### 幅優先探索
**28**　[ALDS_11_C - 幅優先探索](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C&lang=ja)　基本問題です。

**29**　[AtCoder Beginner Contest 007 C - 幅優先探索](https://atcoder.jp/contests/abc007/tasks/abc007_3)　重み無しグラフの最短経路問題は、幅優先探索で解けます。

**30**　[JOI 2011 予選 5 - チーズ](https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_e)

**31**　[JOI 2012 予選 5 - イルミネーション](https://atcoder.jp/contests/joi2012yo/tasks/joi2012yo_e)　少し実装が重いですが、頑張れば解けます。

**32**　[AOJ 1166 - 迷図と命ず](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1166&lang=jp)　実装が少し重いです。

**33**　[AtCoder Beginner Contest 088 D - Grid Repainting](https://atcoder.jp/contests/abc088/tasks/abc088_d)　これが解ければ、幅優先探索に慣れたと思って良いです。

#### 動的計画法：ナップザック DP
**34**　[ALDS_10_A - フィボナッチ数](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_A&lang=ja)　超基本。「DP とは何か」を感じることができます。

**35**　[DPL_1_B - 0,1ナップザック問題](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_B&lang=ja)　基本問題です。

**36**　[DPL_1_C - ナップザック問題](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_C&lang=ja)　基本問題です。

**37**　[DPL_1_A - コイン問題](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A&lang=ja)　基本問題です。

**38**　[ALDS_10_C - 最長共通部分列](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C&lang=ja)　基本問題です。

(ここから先は、どのような DP で解けるのかは書きませんが、全部ナップザック DP またはその亜種で解くことができます。)

**39**　[JOI 2011 予選 4 - 1 年生](https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_d)

**40**　[JOI 2012 予選 4 - パスタ](https://atcoder.jp/contests/joi2012yo/tasks/joi2012yo_d)

**41**　[JOI 2013 予選 4 - 暑い日々](https://atcoder.jp/contests/joi2013yo/tasks/joi2013yo_d)

**42**　[JOI 2015 予選 4 - シルクロード](https://atcoder.jp/contests/joi2015yo/tasks/joi2015yo_d)

**43**　[パ研杯2019 D - パ研軍旗](https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_d)

**44**　[AOJ 1167 - ポロック予想](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1167&lang=jp)

**45**　[AOJ 2199 - 差分パルス符号変調](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2199&lang=jp)

#### 動的計画法：区間 DP
**46**　[ALDS_10_B - 連鎖行列積](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_B&lang=ja)　基本問題です。

**47**　[JOI 2015 本選 2 - ケーキの切り分け 2](https://atcoder.jp/contests/joi2015ho/tasks/joi2015ho_b)　$O(N^2)$ の区間 DP です。

**48**　[AOJ 1611 ダルマ落とし](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1611&lang=jp)　$O(N^3)$ の区間 DP です。

#### 動的計画法：bit DP
**49**　[DPL_2_A - 巡回セールスマン問題](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_2_A&lang=ja)　基本問題です。

**50**　[Square869120Contest #1 G - Revenge of Traveling Salesman Problem](https://atcoder.jp/contests/s8pc-1/tasks/s8pc_1_g)　巡回セールスマン問題を少し変えた問題です。

**51**　[JOI 2014 予選 4 - 部活のスケジュール表](https://atcoder.jp/contests/joi2014yo/tasks/joi2014yo_d)　bitDP に含まれるか微妙ですが、一応入れておきます。

**52**　[JOI 2017 予選 4 - ぬいぐるみの整理](https://atcoder.jp/contests/joi2017yo/tasks/joi2017yo_d)　少し難しいですが、是非挑戦してみてください。

#### 動的計画法：その他
その他の DP として代表的なものは、[最長増加部分列問題 (LIS)](https://qiita.com/python_walker/items/d1e2be789f6e7a0851e5) です。
**53**　[DPL_1_D - 最長増加部分列](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D&lang=ja)

**54**　[AtCoder Beginner Contest 006 D - トランプ挿入ソート](https://atcoder.jp/contests/abc006/tasks/abc006_4)

**55**　[AtCoder Beginner Contest 134 E - Sequence Decomposing](https://atcoder.jp/contests/abc134/tasks/abc134_e)　チャレンジ問題です。

#### 最短経路問題：ダイクストラ法
**56**　[GRL_1_A - 単一始点最短経路](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=ja)　基本問題です。

**57**　[JOI 2008 予選 6 - 船旅](https://atcoder.jp/contests/joi2008yo/tasks/joi2008yo_f)　後述のワーシャルフロイド法でも解けます。

**58**　[JOI 2016 予選 5 - ゾンビ島](https://atcoder.jp/contests/joi2016yo/tasks/joi2016yo_e)　前述の幅優先探索も使います。実装がやや重めです。

**59**　[JOI 2014 予選 5 - タクシー](https://atcoder.jp/contests/joi2014yo/tasks/joi2014yo_e)

#### 最短経路問題：ワーシャルフロイド法
**60**　[GRL_1_C - 全点対間最短経路](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C&lang=ja)　基本問題です。

**61**　[AtCoder Beginner Contest 012 D - バスと避けられない運命](https://atcoder.jp/contests/abc012/tasks/abc012_4)

**62**　[AtCoder Beginner Contest 079 D - Wall](https://atcoder.jp/contests/abc079/tasks/abc079_d)

**63**　[AtCoder Beginner Contest 074 D - Restoring Road Network](https://atcoder.jp/contests/abc074/tasks/arc083_b)　ちょっと数学的考察が必要で難しいですが、是非解いてみましょう。

#### 最小全域木問題
**64**　[GRL_2_A - 最小全域木](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A&lang=ja)　基本問題です。

**65**　[JOI 2010 春合宿 - Finals](https://atcoder.jp/contests/joisc2010/tasks/joisc2010_finals)　([問題pdf](https://www.ioi-jp.org/camp/2010/2010-sp-tasks/2010-sp-day3_22.pdf)) JOI 春合宿の問題ですが、比較的簡単です。

**66**　[AOJ 1127 - Building a Space Station](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1127)

**67**　[AtCoder Beginner Contest 065 D - Built?](https://atcoder.jp/contests/abc065/tasks/arc076_b)　やや難しいです。単純に最小全域木を求めると、$N$ 頂点 $N^2$ 辺になりますが、なんとそれを減らすことができます。

#### 高速な素数判定法
**68**　[NTL_1_A - 素因数分解](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A&lang=ja)　基本問題です。

**69**　[AtCoder Beginner Contest 084 D - 2017-like Number](https://atcoder.jp/contests/abc084/tasks/abc084_d)

#### 高速なべき乗計算
**70**　[NTL_1_B - べき乗](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B&lang=ja)

**71**　[Square869120Contest #1 E - 散歩](https://atcoder.jp/contests/s8pc-1/tasks/s8pc_1_e)
※ べき乗だけを使う問題は少ないですが、$nCr$ などを求める際に、逆元とセットで出てくることが多いです。例えば、$ax≡1 \ (mod \ p)$ の解は $a^{p-2} \ mod \ p$ となります。（$p$ が素数の場合）

#### 逆元を使う問題
**72**　[AtCoder Beginner Contest 034 C - 経路](https://atcoder.jp/contests/abc034/tasks/abc034_c)　nCr を求めるだけの基本問題です。

**73**　[AtCoder Beginner Contest 145 D - Knight](https://atcoder.jp/contests/abc145/tasks/abc145_d)

**74**　[AtCoder Beginner Contest 021 D - 多重ループ](https://atcoder.jp/contests/abc021/tasks/abc021_d)

**75**　[AtCoder Beginner Contest 149 F - Surrounded Nodes](https://atcoder.jp/contests/abc149/tasks/abc149_f)　チャレンジ問題です。解けなくても、「そういう特殊な出力形式の問題ってあるんだな」と感じてほしいです。

#### 累積和
**76**　[全国統一プログラミング王決定戦本戦 A - Abundant Resources](https://atcoder.jp/contests/nikkei2019-final/tasks/nikkei2019_final_a)　基本です。累積和を使わなくても解けますが、是非使って解いてみてください。

**77**　[JOI 2010 本選 1 - 旅人](https://atcoder.jp/contests/joi2010ho/tasks/joi2010ho_a)

**78**　[JOI 2011 本選 1 - 惑星探査](https://atcoder.jp/contests/joi2011ho/tasks/joi2011ho1)　二次元累積和です。

**79**　[AtCoder Beginner Contest 106 D - AtCoder Express 2](https://atcoder.jp/contests/abc106/tasks/abc106_d)

**80**　[GigaCode 2019 D - 家の建設](https://atcoder.jp/contests/gigacode-2019/tasks/gigacode_2019_d)

(ここから先は、「いもす法」というアルゴリズムを使う場合があります。)

**81**　[AtCoder Beginner Contest 014 C - AtColor](https://atcoder.jp/contests/abc014/tasks/abc014_3)　基本問題です。

**82**　[AOJ 2013 - 大崎](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2013)

**83**　[JOI 2015 本選 1 - 鉄道運賃](https://atcoder.jp/contests/joi2015ho/tasks/joi2015ho_a)

**84**　[JOI 2012 本選 4 - 釘](https://atcoder.jp/contests/joi2012ho/tasks/joi2012ho4)　チャレンジ問題です。

#### Union-Find
**85**　[DSL_1_A - 互いに素な集合](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=ja)　基本問題です。

**86**　[AtCoder Beginner Contest 075 C - Bridge](https://atcoder.jp/contests/abc075/tasks/abc075_c?lang=ja)　深さ優先探索による連結成分の個数の数え上げでも解けますが、Union-Find でも解いてみましょう。

**87**　[AtCoder Beginner Contest 120 D - Decayed Bridge](https://atcoder.jp/contests/abc120/tasks/abc120_d)　一個の考察ステップがあり、少し難しいですが、解くことで得られる力は大きいと思います。

#### その他のテクニック
「圧縮」によって解ける問題たちです。

**88**　[JOI 2008 本選 1 - 碁石ならべ](https://atcoder.jp/contests/joi2008ho/tasks/joi2008ho_a)

**89**　[JOI 2013 本選 1 - 電飾](https://atcoder.jp/contests/joi2013ho/tasks/joi2013ho1)

「単純な幾何計算」によって解ける問題たちです。標準ライブラリに存在する、2 乗根・三角関数などを使うと解けます。

**90**　[Square869120Contest #5 B - Emblem](https://atcoder.jp/contests/s8pc-5/tasks/s8pc_5_b)

**91**　[AtCoder Beginner Contest 144 D - Water Bottle](https://atcoder.jp/contests/abc144/tasks/abc144_d)　本記事では触れていませんが、[三角関数の逆関数](https://ja.wikipedia.org/wiki/%E9%80%86%E4%B8%89%E8%A7%92%E9%96%A2%E6%95%B0)を使って解くことができます。 

#### 実装問題
考察に比べて実装がとても重い問題です。練習になると思います。

**92**　[AOJ 1193 - 連鎖消滅パズル](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1193&lang=jp)

**93**　[Square869120Contest #3 B - 石落としゲーム](https://atcoder.jp/contests/s8pc-3/tasks/s8pc_3_b)

**94**　[AOJ 1149 - ケーキカット](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1149&lang=jp)

#### 数学的な問題
AtCoder の問題の一部では、解くために数学的な考察を必要とします。上級編にも繋げていくために、水色コーダーを目指している人は「数学的考察って何なのか」「数学的考察ってどんな感じで使うのか」くらいは知っておくと良いと思うので、これを感じられる問題の代表例を紹介しておきます。

**95**　[AtCoder Beginner Contest 149 B - Greedy Takahashi](https://atcoder.jp/contests/abc149/tasks/abc149_b)　200-300 点問題で出る数学的問題は大体そんな感じです。（[貪欲法アルゴリズム](http://www2.kobe-u.ac.jp/~ky/da2/haihu04.pdf)に繋がってきます。）
**96**　[AtCoder Beginner Contest 139 D - ModSum](https://atcoder.jp/contests/abc139/tasks/abc139_d)　考察一個です。

**97**　[AtCoder Beginner Contest 150 D - Semi Common Multiple](https://atcoder.jp/contests/abc150/tasks/abc150_d)

**98**　[三井住友信託銀行プログラミングコンテスト2019 予選 E - Colorful Hats 2](https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_e)

**99**　[DDCC2020 予選 D - Digit Sum Replace](https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_d)　これも考察一個です。

**100**　[Tenka1 Programmer Beginner Contest D - Crossing](https://atcoder.jp/contests/tenka1-2018-beginner/tasks/tenka1_2018_d)　やや難しいですが、頑張って解いてください。

---

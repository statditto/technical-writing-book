= レビューする、レビューされる

自分が書いた文章をレビューしてもらったり、誰かの書いた文章をレビューしたりするときに、双方が相手に歩み寄れる方法を紹介します。

== レビュアー（レビューする側）の心がけ

レビューという工程において、レビュアー（レビューする側）とレビュイー（レビューしてもらう側）の共通目的は「これをもっとよい文章にして早く世に出すこと」のはずです。レビュアーの本来の目的は、決して「間違いの多い低品質な文章だったとレビュイーに自覚させること」や「強い言葉でレビュアーを傷つけて反省させること」ではありません。

=== レビューコメントには重要度を添えよう

レビューでの指摘は「文章をよりよいものにする」ものであると同時に、「相手（レビュイー）のやることを増やす」ものでもあり、公開を遅らせるブロッカーになり得ます。

レビュアーは軽い気持ちで指摘したのに、レビュイーは「これを全部直さないと公開できないんだ……」と思い込んでしまい、必要以上にコストをかけて全部を直すことになった、というようなすれ違いは、レビューに対する悪いイメージを抱く原因隣、非常に勿体ないものです。

これを防ぐため、筆者がドキュメントや技術書のレビューをするときは、レビューコメントに以下ような「重要度」を添えています。

 * MUST FIX
 ** 明らかな誤りで、このままでは重大な問題があるので必ず直してほしいもの
 * Nice-to-have
 ** 絶対ではないが直した方がよくなるのでできれば直してほしいもの
 * Nitpicking
 ** 軽微な誤りや好みの問題、このままでもいいけど気になったので一応伝えておくもの

これにより、レビュイーは「早く公開することが最優先なのでMUST FIXだけ対応しよう」や「〆切まで時間があるし、読みやすくすること最優先にして全部丁寧に対応していこう」というように、どこまで直すのかを判断しやすくなります。

=== レビューは『相手のやることを増やす』責任を持って伝えよう

「分かりにくいです」と感想を伝えるだけのレビューや、直した方がより良くなるかもしれない箇所を増やすだけ指摘は簡単です。逆に「これで大丈夫！」と責任を持ってゴーサインを出す方がずっと難しいことです。

書いてある内容についてレビュアーがきちんと理解していれば「あとこれだけが足りない」「ここは明確に間違っているので、○○に直しましょう」がはっきり言えるけれど、理解していない状態で「なにか言わないと」とひねり出そうとすると、「できればこれも書いておいた方が分かりやすいんじゃないでしょうか」と無責任に宿題を増やすだけの人になってしまいます。

レビュイーがなんとかその宿題をこなして、再レビューに出すとまたレビュアーから新しい思いつきを言われて、一体何をクリアしたらこれを通過させられるのか分からない……という無限レビューはレビュイーの心を折ってしまいます。@<fn>{comment}

//footnote[comment][作品を持ち込んでは編集者にダメ出しされることの繰り返しで、何をどう直したら編集会議を通過して掲載されるのか分からない……と心が折れてしまった漫画家や小説家の話を読むと、ジャンルは全然違うけどたぶん同じような状態なんだろうなと思ってしまいます。]

レビューをするとき、レビュアーは、その修正指示が「早く世に出る」という価値を毀損してまで、いまやるべきことなのかを自分にきちんと問いましょう。

レビューには「文章をよくする」といういい面だけでなく、「相手（レビュイー）のやることを増やす」「早く出るという価値を損なう」というように足を引っ張る面もあります。なんでもかんでも気軽に放言せず、私は今から相手のやることを増やすのだ！公開を遅らせてでもここは直した方が絶対にいいんだ！という責任を持って指摘を伝えるか、前述のような重要度を添えて、取り込む取り込まないを相手が選べるようにしてあげましょう。

=== 大量に赤を入れることがレビュアーの存在意義ではない

稀に、レビューを頼まれたときに「たくさん赤を入れないと仕事をしたことにならない」と思ってしまう人がいます。そういう思い込みのままレビューをすると、「たくさん指摘をすること」が最優先になっているため、文章をよくするためのレビューのはずなのに、逆に誤りを混入させるような修正指示や、簡潔で分かりやすい文章を長ったらしく曖昧にさせるような逆効果の提案をしてしまいます。

大量に赤を入れることがレビュアーの存在意義ではありません。よい文章を早く世に出すことが、レビュアーとレビュイーの共通目的であると心得ましょう。

レビューで指摘するところが少なかった、ということは、「レビュアーが仕事をしていない」ということを意味しません。ライターが書いた元の文章の出来がもともとすごくよかったのかもしれないし、レビュアーの方が知識が不足していて、誤りを見つけられていないだけかもしれません。

どちらにせよ、指摘することが少なかったときに、粗探しをして無理矢理指摘をひねり出す必要はありません。何か指摘をひねり出そうとせず、素直に「気づいたことはこれだけでした」と伝えてレビュー結果をレビュイーに渡しましょう。

=== 指摘は「後出しじゃんけん」だと心得よ

モンティ・ホール問題@<fn>{monti}と同じで、他の人が書いた技術記事に対して「もっとこうすればよかった」「技術的に誤りがある」と指摘するのは、基本的に後だしじゃんけんです。あなたが0から書いていたら、もっと別の誤りを仕込んでいたかもしれないし、そもそも書けずに挫折していたかもしれません。レビュアーは初稿を書いた人よりも、そもそも有利な立場であることを自覚したうえで指摘をすべきです。

//footnote[monti][3枚の扉のうち1枚だけある「当たり」の扉を見つけるときに云々。モンティー・ホール問題とは]

=== 他人が書いたものに敬意を払おう

文章のあら探しをするのは簡単です。なんでこんな書き方になってるんだろう、何を思ってこういう説明にしたんだろう、と憤る前に、「色んな事情があって、当時はこうとしか書けなかったのかもしれない」「おそらくこれが書いたときの精一杯だったので、立場の違う今の自分が馬鹿にしても何もいいことはない」と落ち着きましょう。

=== 頼まれていないレビューはしない

人には間違えて素っ転んで痛い思いをする権利があります。そこにあるのが読み手にとって取り返しのつかないような危険な間違いで、誰がどう見てもMUST FIXなものであり、こちらから修正案も提供できる、というものでなければ、頼まれてもいない勝手なレビューはするべきではありません。

こんな粗悪な技術記事を出すなんて、と思ったのであれば、それとは関係なくあなたが正しい内容の記事を書いて、正しい技術知識を世に広めればいいだけの話です。0から何かを書くことを放棄して、代わりに誰かが書いた1に対して文句をつけるだけの人になるのはやめましょう。

野球選手になって試合に出るまでの労力と、その試合を見て外野から「バッティングがなっちゃいない」と野次を飛ばす労力であれば、どちらの方が大変だかは分かるはずです。野次を飛ばしたいなら、あなたも選手になって試合に出ましょう。

== レビュイー（レビューされる側）の心がけ

=== お願いしたい観点を添えてレビューを依頼しよう

どういう観点でレビューしてもらいたいのか、何についてどれくらいの粒度で指摘をして欲しいのか、という認識がレビュアーとレビュイーの間で合致していないと、「ざっと見て欲しいだけだったのに、頼んでもいない細かいところまで何度も指摘されて、時間もかかり嫌な思いをした」とか「すごくたくさん指摘するところがあってこちらも大変だったのに、言い訳ばかりされて結局全然直してもらえなかった」という地獄のような状態が生まれます。

レビューを頼むときは以下のように、どんな観点で何について指摘をして欲しいのか、あるいはどういう観点の指摘は不要なのか、といった情報をレビュアーへきちんと伝えるようにしましょう。

 * 技術仕様に誤りがないか
 * 想定している読者層に向けて分かりやすい構成になっているか
 * 日本語として明らかなてにおはの誤りがないか
 * より分かりやすくするためにできることがないか
 * 他の人が書いた章と文体が揃っているか
 * 不足している情報がないか
 * 説明に不親切なところがないか

逆にレビュアーはレビューを依頼された際、観点や粒度についての情報がなければ確認をしてからレビューを始めるようにしましょう。

=== 指摘は素直に受け入れる

レビュイーは指摘を聞くと、なんだかんだ言い訳をして取り込まない方向に持っていきたくなりますが、素直に受け入れてさっと直すと大抵その方がずっとよくなります。


=== 文章がひどいと突っ込みが多すぎて読むに堪えない

配信などを見るとき、人は多少画質が荒くてもなんとか我慢して見られますが、音が悪いと聞くに堪えなくてすぐに閉じてしまいます。それと同じで、書き手が伝えようとしていた内容の重要性や妥当性を評価する以前に、その文章が文法的に誤ったひどいものだと読んですらもらえません。

そういう人に限って「気持ちが伝われば文法だのなんだの細かいルールはいいじゃないか」と言うのですが、なんと音の悪い配信を聞くに堪えないのと同じで、「情報を伝える」という目的を阻害するほど読みにくい文章があります。

「伝わればいい」と言うが、なんと最低限の文法を守らないとまず伝わらない文章になります。

=== レビュアーが気付いたことに、書いたとき気付かないのは当然

レビュアーは文章を読むだけなので、リソースの100%を「注意深く読むこと」に使えます。

一方、書く側は「情報全体を把握し」「どう伝えるか考え」「キーボードを叩いて文章を組み立てながら」「読み返し」「修正案を再び考え」「どちらがよいか判断する」というように、リソースを思考や判断、出力といった様々な作業に振り分けています。

わらわらと10人いる幼児の面倒を同時並行で見なければいけない保育士と、1人だけにつきっきりになれる保育士だったら、それは後者の方が「襟元にカレーのシミがあるな」とか「昨日より少し元気がない」とか色んなことに気付けるはずです。

レビュイーはレビュアーから指摘を読んで、「俺はなぜ……これを書いたときに気付かなかったんだ……こんなにはっきり間違えているのに……」と己の目の節穴さに落ち込む必要はありません。使えるリソースが違うので、レビュアーが気付いたことに、書いた時点で気付かないのはある意味当然と言えます。

逆に言えば、書いた時点ですべての誤りに気づけるのであれば、レビューという工程自体が不要なはずです。レビュアーが誤りを拾えたということは、レビューという工程がしっかり機能しているということなのでみんなで喜びましょう。

レビュアーのときは気付くし、書いているときは気付かない。これはもうそういうものなのです。

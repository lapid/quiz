眠れるモンスターを狩る 〜 横へな 2013.9.28

問題

物語

目の前にモンスターがたくさんいるが、誰かの魔法のおかげか、全員寝ている。
モンスターについての情報はしっかり把握しており、どのモンスターを倒すにはどんな武器が必要かなどはちゃんとわかっている。

さて。
あなたは何匹のモンスターを狩ることができるだろうか。

ルール

ダンジョンには以下のモンスターがいる。

モンスター(記号)      倒すのに必要な武器(記号)    倒すと手に入る武器(記号)
 - BuruBuru      ( B )   AssaultRapier   ( a )       CoiledSpear   ( c )
 - DainaRex      ( D )   CoiledSpear     ( c )       EnchantedRod  ( e )
 - FatherConga   ( F )   EnchantedRod    ( e )       GodAxe        ( g )
 - HiruScura     ( H )   GodAxe          ( g )       IceSword      ( i )
 - Javaanos      ( J )   IceSword        ( i )       KingsLance    ( k )
 - LalalaLalala  ( L )   KingsLance      ( k )       AssaultRapier ( a )

最初の状態ではあなたにモンスターは倒せない。床に落ちている武器を拾い、それで倒す。 
武器はいずれも頑丈で、モンスターを何匹倒しても劣化したり壊れたりしない。 
武器は、モンスターを倒して手に入れることもできる。 
あなたのモンスターへの攻撃は必ず成功する。攻撃の喧騒でほかのモンスターが起きたりもしない。 
あなたのじゃまをするものは誰も居ない。落ちている武器とモンスターから手に入る武器を活用して倒せる限りのモンスターを倒そう。

入力と出力

入力は 
gLDLBgBgHDaD 
のような形式をしている。各文字の意味は下表のとおり。

記号  意味
モンスター  B, D, F, H, J, L
武器  a, c, e, g, i, k
したがって、この入力文字列は目の前に

 - BuruBuru        が 2 体 いる
 - DainaRex        が 3 体 いる
 - HiruScura       が 1 体 いる
 - LalalaLalala    が 2 体 いる
 - AssaultRapier   が 1 個 ある
 - GodAxe          が 3 個 ある

ということを意味している。

この状況では、拾った武器やモンスターを倒して手に入れた武器を駆使すると、 6 体のモンスターを倒すことができる。 
したがって、 6 という文字列を出力すればよい

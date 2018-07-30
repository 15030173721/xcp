<div class="about hTit">
      <div class="hd">
        <div class="tit">{dede:field name='typename'/} | <a href="list.php?tid={dede:field name='id'/}">MORE</a></div>
      </div>
      <div class="bd"> {dede:sql sql='Select content from dede_arctype where id=1'}[field:content function='cn_substr(html2text(@me),200)'/] {/dede:sql} ... <a href="list.php?tid={dede:field name='id'/}">详细阅读>></a> </div>
    </div>
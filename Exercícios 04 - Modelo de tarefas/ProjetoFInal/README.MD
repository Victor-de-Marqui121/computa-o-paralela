<h1> OpenMP </h1>

<h1><strong>• ATUALIZAÇÃO SPEED UP PÓS ENTREGA</strong></h1>
<p>
  Devido à implicância sua prof decidi refazer os testes para verificar a congruência dos testes, e de fato, não faço ideia do que aconteceu, mas deu uma  diferença, leve, porém perceptivel, o speedup ainda segue gigantesco, segue os prints com os testes realizados novamentee:
  
  <strong><i>• SPEED UP -> (8,702÷0,654) =  13,3846</i></strong>
  
  <h2>OPEN MP</h2> 
  <img src="https://user-images.githubusercontent.com/90067572/171867099-51e3267b-765a-4152-ae2c-c47ed406a6fe.png"> 
  <h2>SERIAL</h2> 
  <img src="https://user-images.githubusercontent.com/90067572/171865728-30974bef-c7f1-4bc0-8888-e69de5cbcfc0.png">
</p>

<p>
<sup>~ O #pragma omp critical é uma diretiva do OpenMP, que visa a prevenção do acesso das seções críticas do código a partir de múltiplas threads ao mesmo tempo, criando uma espécie de semáforo, auxiliando assim, o controle do valor da variável, obtendo sempre um valor constante como resultado.</sup>
</p>

<h2>#pragma omp critical</h2>
<p>No codigo abaixo, o omp critical é utilizado onde há a necessidade de controle do fluxo de acesso, onde múltiplas threads acessam a mesma sessão crítica, alterando-a de alguma forma, ou seja, fazendo com que não haja sobrescritas ou alterações inconstantes, sendo assim, crucial para o funcionamento correto da Somatoria armazenada na variavel <b><i>serie</i></b> e para o <b><i>printf</i></b>, resultando em um único print.</p>
<pre>
  <code>
  int main()
  {
   long double serie;
   #pragma omp 
   {
      ...
      for ()
      {
        ...
      }
      #pragma omp critical
      serie += S;
     }
     ...
    }
</code>
</pre>

<p>Nessa entrega Final, Refatoramos e melhoramos a codificação do programa, removendo o pragma critical desnecessário,
e completando o omp com a diretiva parallel, além de ter aumentado o limite do número inteiro possível a ser rodado como
Série de Taylor máximo, indo para long long int e double.</p> <br>


<h2>Speed Up [TEMPO]</h2>
<p>
  A questão do speedup foi monstruosa, quando comparada com o código inicial e com pthreads dual core: 
  <br><br> <img src="https://user-images.githubusercontent.com/90067572/170367527-09328df4-8925-4606-be02-3111574d31be.png"> <br>
  <sup><b>[ Implementação Serial X OPEN MP ]</b> Utilizando como base Taylor(2222222222)</sup>  <strong>(13,313s/0,674) = 19,75</strong> <br>
  
  <img src="https://user-images.githubusercontent.com/90067572/170372746-f5906f10-ab52-4375-af27-a1cee8ab00e0.png"> <br>
  <sup><b>[ Pthread DualCore X OPEN MP ]</b> Utilizando como base Taylor(2222222222)</sup> <strong>(3,694s/0,694s) = 5,32</strong>

 </p>

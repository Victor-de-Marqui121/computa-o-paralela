<h1> OpenMP </h1>

<sup>~ O #pragma omp critical é uma diretiva do OpenMP, que visa a prevenção do acesso das seções críticas do código a partir de múltiplas threads ao mesmo tempo, criando uma espécie de semáforo, auxiliando assim, o controle do valor da variável, obtendo sempre um valor constante como resultado.</sup>

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
Série de Taylor máximo, indo para long long int e long double, pois long double apresenta numero limite de 16 bytes para serem 
explorados e long long int com 8 bytes, permitindo ir um pouco além das implementações anteriores.</p>

<p>
  Já a questão do speedup foi monstruosa, quando comparada com o código inicial e com pthreads dual core
  
  
 </p>

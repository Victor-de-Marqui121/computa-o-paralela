<h1> OpenMP </h1>

<sup>~ O #pragma omp critical é uma diretiva do OpenMP, que visa a prevenção do acesso das seções críticas do código a partir de múltiplas threads ao mesmo tempo, criando uma espécie de semáforo, auxiliando assim, o controle do valor da variável, obtendo sempre um valor constante como resultado.</sup>

<h2>#pragma omp critical</h2>
<p>No codigo abaixo, o omp critical é utilizado onde há a necessidade de controle do fluxo de acesso, onde múltiplas threads acessam a mesma sessão crítica, alterando-a de alguma forma, ou seja, fazendo com que não haja sobrescritas ou alterações inconstantes, sendo assim, crucial para o funcionamento correto da Somatoria armazenada na variavel <b><i>serie</i></b> e para o <b><i>printf</i></b>, resultando em um único print.</p>
<pre>
  <code>
  int main()
  {
   float serie;
   #pragma omp 
   {
      float S = 0;
      ...
      #pragma omp for schedule(dynamic)
      for ()
      {
        ...
      }
      #pragma omp critical
      serie += S;
   
     }
     #pragma omp critical
     printf("Serie de Taylor(%lld): %f\n", T, serie);
    }
</code>
</pre>

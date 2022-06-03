<h2>Código</h2>
#include iostream faltando, devido ao markdown do github não permitir
<pre>
  <code>
 #include <stdio.h>

int main() {
  long long int T = 2222222222;
  double S = 0;
	
	for(long long int i = 1; i <= T; i++)
	{
      //if (i%10000 == 1)cout << "S = " << S << " + " << (1/i) << " = " << (S + (1/i)) << endl;
		S += (1/(float)i);
	}
	printf("Serie de Taylor(%lld): %f", T, S);
	return 0;
}
  </code>
</pre>

<h2>Grafo</h2>
<img src="https://github.com/Victor-de-Marqui121/computa-o-paralela/blob/main/Exerc%C3%ADcios%2004%20-%20Modelo%20de%20tarefas/Implementacao_Inicial/graph1_a.png?raw=true">

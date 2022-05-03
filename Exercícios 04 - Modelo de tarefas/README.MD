<h2>Código</h2>
#include <iostream> faltando, devido ao markdown do github não permitir
<pre>
  <code>
  using namespace std;

    int main() {
      int T = 10;
      float S = 0;

      for(float i = 1; i <= T; i++)
      {
        cout << "S = " << S << " + " << (1/i) << " = " << (S + (1/i)) << endl;
        S += (1/i);
      }
      cout << "Serie de Taylor(" << T  << "): " << S;
      return 0;
    }	
  </code>
</pre>

<h2>Grafo</h2>
<img src="https://github.com/Victor-de-Marqui121/computa-o-paralela/blob/main/Exerc%C3%ADcios%2004%20-%20Modelo%20de%20tarefas/graph1_a.png?raw=true">

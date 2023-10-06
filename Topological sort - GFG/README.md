# Topological sort
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700255/Web/Other/24aa5d54-bc1f-489c-bd2d-ad02ddccdf31_1684492511.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
1
<strong>Explanation</strong>:
The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.</span>
<span style="font-size: 18px;">One possible Topological order for the
graph is 3, 2, 1, 0.</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:15px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/topological-sort/1?category=&amp;title=Topological%20sort%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0A%0AOutput%3A%0A1%0AExplanation%3A%0AThe%20output%201%20denotes%20that%20the%20order%20is%0Avalid.%20So%2C%20if%20you%20have%2C%20implemented%0Ayour%20function%20correctly%2C%20then%20output%0Awould%20be%201%20for%20all%20test%20cases.%0AOne%20possible%20Topological%20order%20for%20the%0Agraph%20is%203%2C%202%2C%201%2C%200.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700255/Web/Other/c35bb1d1-130c-49aa-a17e-118181d7bdcd_1684492512.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
1
</span><span style="font-size: 18px;"><strong>Explanation:
</strong></span><span style="font-size: 18px;">The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.
One possible Topological order for the
graph is 5, 4, 2, 1, 3, 0.</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:15px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/topological-sort/1?category=&amp;title=Topological%20sort%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0A%0AOutput%3A%0A1%0AExplanation%3A%0AThe%20output%201%20denotes%20that%20the%20order%20is%0Avalid.%20So%2C%20if%20you%20have%2C%20implemented%0Ayour%20function%20correctly%2C%20then%20output%0Awould%20be%201%20for%20all%20test%20cases.%0AOne%20possible%20Topological%20order%20for%20the%0Agraph%20is%205%2C%204%2C%202%2C%201%2C%203%2C%200." class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>topoSort()</strong>&nbsp;</span> <span style="font-size: 18px;">which takes the integer V denoting the number of vertices and adjacency list as input parameters</span> <span style="font-size: 18px;"> and returns an array consisting of the vertices in Topological order. As there are multiple Topological orders possible, you may return any of them. If your returned topo sort is correct then the console output will be 1 else 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(V + E).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(V).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> V </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;">10<sup>4</sup><br>1 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> E </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> (N*(N-1))/2</span></p></div>
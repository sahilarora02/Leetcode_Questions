# BFS of graph
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a directed&nbsp;graph. The task is to do Breadth First Traversal of this graph starting from 0.<br><strong>Note: </strong>One can move from node u to node v only if there's an edge from u to v. Find the BFS traversal of the graph starting from the 0th vertex,</span><span style="font-size: 18px;"> from left to right according to the input graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:<br></strong>V = 5, E = 4<br>edges = {(0,1),(0,2),(0,3),(2,4)}<br>
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700217/Web/Other/e0eb5630-5d6c-493a-9b1e-d16d40f10b01_1685086421.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong> <br>0 1 2 3 4
<strong>Explanation</strong>: 
0 is connected to 1 , 2 , 3.
2 is connected to 4.
so starting from 0, it will go to 1 then 2
then 3. After this 2 to 4, thus bfs will be
0 1 2 3 4.</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:15px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1&amp;title=BFS%20of%20graph%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AV%20%3D%205%2C%20E%20%3D%204%0Aedges%20%3D%20%7B(0%2C1)%2C(0%2C2)%2C(0%2C3)%2C(2%2C4)%7D%0A%0A%0AOutput%3A%20%0A0%201%202%203%204%0AExplanation%3A%20%0A0%20is%20connected%20to%201%20%2C%202%20%2C%203.%0A2%20is%20connected%20to%204.%0Aso%20starting%20from%200%2C%20it%20will%20go%20to%201%20then%202%0Athen%203.%20After%20this%202%20to%204%2C%20thus%20bfs%20will%20be%0A0%201%202%203%204.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:<br></strong>V = 3, E = 2<br>edges = {(0,1),(0,2)}
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700217/Web/Other/001e9e35-da68-4024-b1d3-e34944188a1e_1685086422.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong> <br>0 1 2
<strong>Explanation</strong>:
0 is connected to 1 , 2.
so starting from 0, it will go to 1 then 2,
thus bfs will be 0 1 2. </span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:15px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1&amp;title=BFS%20of%20graph%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AV%20%3D%203%2C%20E%20%3D%202%0Aedges%20%3D%20%7B(0%2C1)%2C(0%2C2)%7D%0A%0AOutput%3A%20%0A0%201%202%0AExplanation%3A%0A0%20is%20connected%20to%201%20%2C%202.%0Aso%20starting%20from%200%2C%20it%20will%20go%20to%201%20then%202%2C%0Athus%20bfs%20will%20be%200%201%202.%20%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><br><span style="font-size: 18px;"><strong>Your task:</strong><br>You dont need to read input or print anything. Your task is to complete the function&nbsp;<strong>bfsOfGraph()</strong>&nbsp;which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns </span>&nbsp;<span style="font-size: 18px;">a list containing the BFS traversal of the graph starting from the 0th vertex from left to right.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(V + E)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(V)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ V, E ≤ 10<sup>4</sup></span></p></div>
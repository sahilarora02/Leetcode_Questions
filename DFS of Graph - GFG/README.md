# DFS of Graph
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a connected undirected graph. Perform a Depth First Traversal of the graph.</span><br><span style="font-size: 18px;"><strong>Note: </strong>Use the recursive approach to</span><span style="font-size: 18px;">&nbsp;find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input: </strong>V = 5 , adj = [[2,3,1] , [0], [0,4], [0], [2]]
</span><img style="height: 300px; width: 300px;" src="https://media.geeksforgeeks.org/img-practice/graph-1659528381.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong> 0 2 4 3 1
<strong>Explanation</strong>: 
0 is connected to 2, 3, 1.
1 is connected to 0.
2 is connected to 0 and 4.
3 is connected to 0.
4 is connected to 2.
so starting from 0, it will go to 2 then 4,
and then 3 and 1.
Thus dfs will be 0 2 4 3 1.</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:15px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1&amp;title=DFS%20of%20Graph%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%20V%20%3D%205%20%2C%20adj%20%3D%20%5B%5B2%2C3%2C1%5D%20%2C%20%5B0%5D%2C%20%5B0%2C4%5D%2C%20%5B0%5D%2C%20%5B2%5D%5D%0A%0AOutput%3A%200%202%204%203%201%0AExplanation%3A%20%0A0%20is%20connected%20to%202%2C%203%2C%201.%0A1%20is%20connected%20to%200.%0A2%20is%20connected%20to%200%20and%204.%0A3%20is%20connected%20to%200.%0A4%20is%20connected%20to%202.%0Aso%20starting%20from%200%2C%20it%20will%20go%20to%202%20then%204%2C%0Aand%20then%203%20and%201.%0AThus%20dfs%20will%20be%200%202%204%203%201.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong> V = 4, adj = [[1,3], [2,0], [1], [0]]
</span><img style="height: 300px; width: 300px;" src="https://media.geeksforgeeks.org/img-practice/graph(1)-1659528893.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong> 0 1 2 3
<strong>Explanation</strong>:
0 is connected to 1 , 3.
1 is connected to 0, 2. 
2 is connected to 1.
3 is connected to 0. 
so starting from 0, it will go to 1 then 2
then back to 0 then 0 to 3
thus dfs will be 0 1 2 3. </span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:15px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1&amp;title=DFS%20of%20Graph%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%20V%20%3D%204%2C%20adj%20%3D%20%5B%5B1%2C3%5D%2C%20%5B2%2C0%5D%2C%20%5B1%5D%2C%20%5B0%5D%5D%0A%0AOutput%3A%200%201%202%203%0AExplanation%3A%0A0%20is%20connected%20to%201%20%2C%203.%0A1%20is%20connected%20to%200%2C%202.%20%0A2%20is%20connected%20to%201.%0A3%20is%20connected%20to%200.%20%0Aso%20starting%20from%200%2C%20it%20will%20go%20to%201%20then%202%0Athen%20back%20to%200%20then%200%20to%203%0Athus%20dfs%20will%20be%200%201%202%203.%20%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><br><span style="font-size: 18px;"><strong>Your task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>dfsOfGraph()</strong>&nbsp;which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns a list containing the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(V + E)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(V)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ V, E ≤ 10<sup>4</sup></span></p></div>
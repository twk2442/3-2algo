queue = []
lists = []
visited = []
 
def dfs(x):
    print(x, end=" ")
    lists[x].sort()
    visited.append(x)
    for i in lists[x]:
        if i not in visited:
            dfs(i)
 
def bfs(x):
    queue.append(x)
    visited.append(x)
    while len(queue)!=0:
        current = queue.pop(0)
        lists[current].sort()
        print(current, end = " ")
        for i in lists[current]:
            if i not in visited:
                queue.append(i)
                visited.append(i)
 
 
n, e, x= map(int, input().strip().split())
 
for i in range(n+1):
    lists.append([])
 
for i in range(e):
    a,b = map(int, input().strip().split())
    lists[a].append(b)
    lists[b].append(a)
 
dfs(x)
visited.clear()
print("")
bfs(x)
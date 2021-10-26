N,M = map(int, input().split())

num_list = [i+1 for i in range(N)]
check_list = [False] * N

arr = []

def dfs(count):
  if count == M:
    print(*arr)
    return
  
  for i in range(0, N):
    if check_list[i]:
      continue
    
    # i번째는 거쳐갈거라서 True
    check_list[i] = True
    arr.append(num_list[i])
    # 현재의 i를 기준으로 가지치기
    dfs(count + 1)

    arr.pop()
    check_list[i] = False

dfs(0)
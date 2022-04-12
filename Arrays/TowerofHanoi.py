def towerOfHanoi(n,from_rod,to_rod,aux_rod):

    if n == 1:
        print("Move disk 1 from rod ",from_rod," to ",to_rod)
        return

    towerOfHanoi(n-1,from_rod,aux_rod,to_rod)
    print("Move disk 1 from rod ", from_rod, " to ", to_rod)
    towerOfHanoi(n-1,aux_rod,to_rod,from_rod)

n = int(input())

towerOfHanoi(n,'A','C','B')
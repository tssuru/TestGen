try:
    a,b,c=9,1,0
    def g(a):
        a-=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=2,3,6
    print(g(b),a,b,c)
except: print('error')

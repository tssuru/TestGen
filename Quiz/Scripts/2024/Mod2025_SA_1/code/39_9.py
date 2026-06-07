try:
    a,b,c=6,8,7
    def g(b):
        a=2
        b-=5
        c=1
        return a+b+c
    
    a,b,c=0,1,5
    print(g(b),a,b,c)
except: print('error')

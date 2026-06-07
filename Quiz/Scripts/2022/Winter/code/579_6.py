try:
    a,b,c=2,4,9
    def g(b):
        a=5
        b-=3
        c=1
        return a+b+c
    
    a,b,c=6,3,8
    print(g(b),a,b,c)
    
except: print('error')

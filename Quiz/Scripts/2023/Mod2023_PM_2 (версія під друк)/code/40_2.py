try:
    a,b,c=6,1,3
    def g(b):
        a=1
        b-=5
        c=2
        return a+b+c
    
    a,b,c=4,8,0
    print(g(b),a,b,c)
    
except: print('error')

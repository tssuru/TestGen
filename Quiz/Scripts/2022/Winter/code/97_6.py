try:
    a,b,c=5,1,0
    def g(b):
        a-=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=6,9,4
    print(g(b),a,b,c)
    
except: print('error')

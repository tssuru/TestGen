try:
    a,b,c=0,8,1
    def g(b):
        a=2
        b-=3
        c=5
        return a+b+c
    
    a,b,c=4,5,7
    print(g(b),a,b,c)
    
except: print('error')

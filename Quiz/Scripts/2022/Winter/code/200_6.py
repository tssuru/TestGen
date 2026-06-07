try:
    a,b,c=5,2,8
    def g(b):
        a=1
        b-=3
        c=4
        return a+b+c
    
    a,b,c=0,1,7
    print(g(b),a,b,c)
    
except: print('error')

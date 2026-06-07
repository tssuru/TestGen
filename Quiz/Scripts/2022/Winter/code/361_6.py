try:
    a,b,c=7,4,5
    def g(b):
        a=4
        b-=1
        c=5
        return a+b+c
    
    a,b,c=9,0,3
    print(g(b),a,b,c)
    
except: print('error')

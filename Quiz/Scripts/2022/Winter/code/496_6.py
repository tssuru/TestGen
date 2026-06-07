try:
    a,b,c=8,5,3
    def h(b):
        a*=5
        b=1
        c=5
        return a+b+c
    
    a,b,c=2,0,3
    print(h(b),a,b,c)
    
except: print('error')

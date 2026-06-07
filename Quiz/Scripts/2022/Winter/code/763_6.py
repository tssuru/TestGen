try:
    a,b,c=9,7,1
    def h(b):
        a-=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=6,1,9
    print(h(b),a,b,c)
    
except: print('error')

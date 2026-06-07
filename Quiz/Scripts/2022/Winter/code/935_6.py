try:
    a,b,c=4,7,2
    def h(a):
        a-=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=6,3,5
    print(h(b),a,b,c)
    
except: print('error')

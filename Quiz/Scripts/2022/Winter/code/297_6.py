try:
    a,b,c=8,3,0
    def h(a):
        a+=3
        b=2
        c=3
        return a+b+c
    
    a,b,c=9,4,2
    print(h(b),a,b,c)
    
except: print('error')

try:
    a,b,c=8,0,7
    def h(a):
        a+=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=2,6,3
    print(h(b),a,b,c)
    
except: print('error')

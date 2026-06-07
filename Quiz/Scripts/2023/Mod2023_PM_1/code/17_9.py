try:
    a,b,c=2,6,7
    def h(a):
        a-=2
        b=1
        c=1
        return a+b+c
    
    a,b,c=9,1,9
    print(h(b),a,b,c)
    
except: print('error')

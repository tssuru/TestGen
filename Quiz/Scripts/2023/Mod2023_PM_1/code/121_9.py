try:
    a,b,c=8,0,7
    def h(a):
        a=1
        b*=2
        c=4
        return a+b+c
    
    a,b,c=4,9,1
    print(h(b),a,b,c)
    
except: print('error')

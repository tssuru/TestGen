try:
    a,b,c=9,0,3
    def h(a):
        a=4
        b*=1
        c=3
        return a+b+c
    
    a,b,c=2,5,1
    print(h(b),a,b,c)
    
except: print('error')

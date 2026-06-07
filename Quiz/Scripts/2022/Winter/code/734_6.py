try:
    a,b,c=9,1,3
    def h(a):
        a*=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=0,4,2
    print(h(b),a,b,c)
    
except: print('error')

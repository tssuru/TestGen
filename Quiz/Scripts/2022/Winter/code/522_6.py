try:
    a,b,c=8,6,2
    def h(a):
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=0,9,1
    print(h(b),a,b,c)
    
except: print('error')

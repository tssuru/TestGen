try:
    a,b,c=8,2,7
    def h(b):
        a=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,4,1
    print(h(b),a,b,c)
    
except: print('error')

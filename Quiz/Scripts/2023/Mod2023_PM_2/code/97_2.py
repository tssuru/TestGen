try:
    a,b,c=0,6,7
    def h(b):
        a=3
        b*=4
        c=5
        return a+b+c
    
    a,b,c=8,2,5
    print(h(b),a,b,c)
    
except: print('error')

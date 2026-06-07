try:
    a,b,c=8,1,9
    def h(b):
        a=5
        b*=1
        c=2
        return a+b+c
    
    a,b,c=0,5,7
    print(h(b),a,b,c)
    
except: print('error')

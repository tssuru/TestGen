try:
    a,b,c=8,9,7
    def h(b):
        a=4
        b*=2
        c=5
        return a+b+c
    
    a,b,c=4,7,3
    print(h(b),a,b,c)
    
except: print('error')

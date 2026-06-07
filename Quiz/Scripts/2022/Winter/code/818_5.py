try:
    
    a,b,c=6,6,9
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(c=2,a=4,c=1)
    print(a,b,c)
    
except: print('error')

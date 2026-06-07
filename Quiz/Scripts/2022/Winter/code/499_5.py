try:
    
    a,b,c=6,7,9
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(4,a=0)
    print(a,b,c)
    
except: print('error')

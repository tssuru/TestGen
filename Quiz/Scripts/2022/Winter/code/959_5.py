try:
    
    a,b,c=6,7,6
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(a=0,b=1,a=2)
    print(a,b,c)
    
except: print('error')

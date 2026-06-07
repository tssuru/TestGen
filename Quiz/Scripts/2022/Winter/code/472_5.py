try:
    
    a,b,c=7,9,6
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(c=3,a=0,b=2)
    print(a,b,c)
    
except: print('error')

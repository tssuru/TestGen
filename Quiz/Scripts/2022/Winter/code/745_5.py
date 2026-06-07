try:
    
    a,b,c=8,9,7
    def g(a,b=6,c=6):
        print(a,b,c,end="")
    
    g(c=1,b=0,a=2)
    print(a,b,c)
    
except: print('error')

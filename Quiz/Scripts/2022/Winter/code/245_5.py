try:
    
    a,b,c=7,6,9
    def g(a,b=8,c=7):
        print(a,b,c,end="")
    
    g(a=3,c=2,b=0)
    print(a,b,c)
    
except: print('error')

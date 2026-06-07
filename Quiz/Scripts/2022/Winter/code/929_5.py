try:
    
    a,b,c=9,6,7
    def g(a,b=8,c=7):
        print(a,b,c,end="")
    
    g(a=0,5,c=2)
    print(a,b,c)
    
except: print('error')

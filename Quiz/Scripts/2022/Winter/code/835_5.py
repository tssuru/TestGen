try:
    
    a,b,c=8,9,7
    def g(a,b=6,c=7):
        print(a,b,c,end="")
    
    g(2,4,a=1)
    print(a,b,c)
    
except: print('error')

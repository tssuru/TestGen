try:
    
    a,b,c=6,9,7
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(a=1,4,c=2)
    print(a,b,c)
    
except: print('error')

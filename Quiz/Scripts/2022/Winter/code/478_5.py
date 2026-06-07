try:
    
    a,b,c=8,9,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(4,c=1,b=0)
    print(a,b,c)
    
except: print('error')

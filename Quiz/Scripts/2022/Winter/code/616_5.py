try:
    
    a,b,c=6,9,7
    def g(a,b=8,c=6):
        print(a,b,c,end="")
    
    g(0,5)
    print(a,b,c)
    
except: print('error')

try:
    
    a,b,c=6,9,7
    def g(a,b=8,c=7):
        print(a,b,c,end="")
    
    g(3,4,2)
    print(a,b,c)
    
except: print('error')

try:
    
    a,b,c=8,7,9
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(4,5,b=2)
    print(a,b,c)
    
except: print('error')

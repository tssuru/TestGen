try:
    
    a,b,c=6,7,9
    def g(a,b=8,c=6):
        print(a,b,c,end="")
    
    g(1,4,2)
    print(a,b,c)
    
except: print('error')

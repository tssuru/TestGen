try:
    
    a,b,c=8,7,6
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(1,c=4,b=5)
    print(a,b,c)
    
except: print('error')
